import zipfile
import sys
import os
from pathlib import Path

WANNACRY_PASSWORD = b"W24184bcd8921e0d11a1b846b0b642f96f60e51bca66a1640325d47917571b25137a126221ea80d6713f43"

def extract_and_convert_to_txt(input_path_str, output_dir_str="payload_analisis_txt"):
    # Normalizar ruta utilizando Path object
    input_file = Path(input_path_str).resolve()
    output_dir = Path(output_dir_str).resolve()

    if not input_file.is_file():
        print(f"[!] Error: El archivo '{input_file}' no existe.")
        return

    print(f"[*] Leyendo el recurso: {input_file}...")
    with open(input_file, "rb") as f:
        data = f.read()

    # Verificar marca de inicio ZIP
    zip_start = data.find(b"PK\x03\x04")
    if zip_start != -1 and zip_start > 0:
        print(f"[*] Cabecera personalizada detectada. Omitiendo los primeros {zip_start} bytes...")
        data = data[zip_start:]
        target_file = input_file.parent / "temp_clean.zip"
        with open(target_file, "wb") as f_out:
            f_out.write(data)
    else:
        target_file = input_file

    output_dir.mkdir(parents=True, exist_ok=True)

    try:
        with zipfile.ZipFile(target_file, 'r') as zf:
            for file_info in zf.infolist():
                if file_info.is_dir():
                    continue
                
                # Leer contenido del ZIP sin ejecutar
                file_data = zf.read(file_info, pwd=WANNACRY_PASSWORD)
                
                # Crear extensión .txt de forma segura
                clean_name = file_info.filename.replace("/", "_").replace("\\", "_") + ".txt"
                out_path = output_dir / clean_name
                
                with open(out_path, "wb") as txt_out:
                    txt_out.write(file_data)
                
                print(f"[+] Convertido a texto seguro: {clean_name}")

            print(f"\n[+] Extracción completada. Archivos en: '{output_dir}'")

    except Exception as e:
        print(f"[!] Error de descompresión: {e}")
    finally:
        temp_clean = input_file.parent / "temp_clean.zip"
        if temp_clean.exists():
            temp_clean.unlink()

if __name__ == "__main__":
    archivo = sys.argv[1] if len(sys.argv) > 1 else r"D:\Descargas\Malware\payload.zip"
    extract_and_convert_to_txt(archivo)
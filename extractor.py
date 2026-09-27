import os
import sys
from pathlib import Path

try:
    import pyzipper
except ImportError:
    print("[!] Error: Se requiere la librería 'pyzipper'.")
    print("    Ejecuta en PowerShell: python -m pip install pyzipper")
    sys.exit(1)

# Contraseña nativa en bytes puros de 84 caracteres (WannaCry)
PASSWORD_BYTES = b"W24184bcd8921e0d11a1b846b0b642f96f60e51bca66a1640325d47917571b25137a126221ea80d6713f43"

def extract_wannacry_zip(zip_path_str, output_dir_str="payload_analisis_txt"):
    zip_path = Path(zip_path_str).resolve()
    output_dir = Path(output_dir_str).resolve()

    if not zip_path.is_file():
        print(f"[!] El archivo '{zip_path}' no existe.")
        return

    output_dir.mkdir(parents=True, exist_ok=True)
    print(f"[*] Abriendo '{zip_path.name}' con pyzipper y la clave de 84 bytes...")

    try:
        # Abrir el ZIP con soporte de cifrado ZipCrypto y AES
        with pyzipper.AESZipFile(zip_path) as zf:
            zf.setpassword(PASSWORD_BYTES)
            
            for file_info in zf.infolist():
                if file_info.is_dir():
                    continue

                print(f"[*] Extrayendo y desencriptando: {file_info.filename}...")
                
                # Leer bytes descifrados
                file_bytes = zf.read(file_info)

                # Generar nombre seguro .txt
                safe_name = file_info.filename.replace("/", "_").replace("\\", "_") + ".txt"
                out_path = output_dir / safe_name

                with open(out_path, "wb") as f_out:
                    f_out.write(file_bytes)

                print(f"    [✔] Guardado como texto inofensivo: {safe_name}")

        print(f"\n[+] ¡Desencripción exitosa! Todos los archivos están en: '{output_dir}'")

    except Exception as e:
        print(f"[!] Error de descompresión: {e}")

if __name__ == "__main__":
    # Apuntamos al archivo unpacked_payload.zip generado en el paso anterior
    archivo_objetivo = r"D:\Descargas\Malware\unpacked_payload.zip"
    extract_wannacry_zip(archivo_objetivo)
import os
from Crypto.Cipher import AES

def decrypt_t_wnry(input_path, output_path):
    if not os.path.exists(input_path):
        print(f"[-] No se encontró: {input_path}")
        return

    with open(input_path, 'rb') as f:
        data = f.read()

    if data[:8] != b'WANACRY!':
        print("[-] Cabecera inválida.")
        return

    # Clave AES-128 extraída del header de t.wnry
    aes_key = bytes.fromhex('BEE19B98D2E5B12211CE211EECB13DE6')
    iv = bytes(16)  # IV en ceros

    # Salta los 280 bytes del encabezado WANACRY!
    encrypted_payload = data[280:]

    cipher = AES.new(aes_key, AES.MODE_CBC, iv)
    decrypted_data = cipher.decrypt(encrypted_payload)

    with open(output_path, 'wb') as f_out:
        f_out.write(decrypted_data)

    print(f"[+] Payload descifrado con éxito: {output_path}")

if __name__ == "__main__":
    decrypt_t_wnry("t.wnry", "t_decrypted1.dll")
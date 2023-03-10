#include <iostream>
#include <string>

std::string xor_encrypt(std::string plaintext, std::string key) {
  std::string ciphertext = "";
  for (int i = 0; i < plaintext.size(); i++) {
    ciphertext += (char)(plaintext[i] ^ key[i % key.size()]);
  }
  return ciphertext;
}

std::string xor_decrypt(std::string ciphertext, std::string key) {
  std::string plaintext = "";
  for (int i = 0; i < ciphertext.size(); i++) {
    plaintext += (char)(ciphertext[i] ^ key[i % key.size()]);
  }
  return plaintext;
}

int main() {
  std::string plaintext = "Selamat dan Sukses Ujian Akhir Semester Gasal 2022-2023";
  std::string key = "12345";

  std::string ciphertext = xor_encrypt(plaintext, key);
  std::cout << "Enkripsi: " << ciphertext << std::endl;
  

  std::string decrypted = xor_decrypt(ciphertext, key);
  std::cout << "Dekripsi: " << decrypted << std::endl;

  return 0;
}
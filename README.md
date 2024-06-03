# Encryption/decryption project using the Caesar cipher in C++

Author: Gergana Karabelyova

# Overview
This is a basic encryption/decryption project using the Caesar cipher (Shift cipher) in C++. The Caesar Cipher is a rotation cipher used by Julius Caesar. Caesar rotated each letter of the plaintext forward three times to encrypt, so that A became D, B became E, etc., doing the same process but reversed for decryption. The same is done in the code. The shift of 3 letters if hardcoded in the "encryption.cpp" file, feel free to modify it.

# Files
main.cpp  encryption.cpp  encryption.h  sample.txt

# How to Use
Compile the Program: g++ main.cpp encryption.cpp -o run
Run the Program: ./run
Interact with the Program: 
• Follow the on-screen menu to enter the name of the file that you want to encrypt/decrypt, the default file is "sample.txt", so you can use it or use your own file
• Use 'e' for encryption or 'd' for decryption (cappital letters are also allowed)

# Example use 1:
• Sample text: abc
• Encrypted text: def

# Example use 2:
• Sample text: Hello there
• Encrypted text: Khoor wkhuh

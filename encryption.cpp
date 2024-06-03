/*
    encryption.cpp

    Basic encryption/decryption project using the Caesar cipher (Shift cipher)

    Author: Gergana Karabelyova
    Date: 03 June 2024
*/

#include "encryption.h"
#include <fstream>
#include <cctype>

using namespace std;

bool performCaesarCipher(string& content, bool encrypt){
    int shift = encrypt ? 3 : -3;

    // Performing Caesar cipher
    for(char& ch : content){ // for every character (we'll call it 'ch') in 'content' fo this
        if(isalpha(ch)){     // if that character is a letter and not anything else
            char base = isupper(ch) ? 'A' : 'a'; // if the base is upper case or lower case
            ch = static_cast<char>((ch - base + shift + 26) % 26 + base); // the English alphabet has 26 letters, so if the user inputs something like 27, it will come back to 'A'
        }
    }

    return true;
}

bool encryptFile(const string& filename, bool encrypt){

    // Open the content of the file
    ifstream inFile(filename);

    if (!inFile){
        return false;
    }

    // Read the content of the file
    string content((istreambuf_iterator<char>(inFile)), {}); // read the contents of the file and write them down in the 'content' variable
    inFile.close();

    if(performCaesarCipher(content, encrypt)){
        // Creating an output file and writing the modified content inside of it
        ofstream outFile (encrypt ? "encrypted_" + filename : "decrypted_" + filename); // writing the names of the new files after the main operation is performed

        if(!outFile){
            return false;
        }

        outFile << content;
        outFile.close();

        return true;
    }

    return true;
}
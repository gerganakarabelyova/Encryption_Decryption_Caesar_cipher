/*
    encryption.h

    Basic encryption/decryption project using the Caesar cipher (Shift cipher)

    Author: Gergana Karabelyova
    Date: 03 June 2024
*/

#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include<string>

using namespace std;

bool encryptFile(const string& filename, bool encrypt);

#endif // ENCRYPTION_H
/*
    main.cpp

    Basic encryption/decryption project using the Caesar cipher (Shift cipher)

    Author: Gergana Karabelyova
    Date: 03 June 2024
*/

#include<iostream>
#include "encryption.h"

using namespace std;

int main(){

    string filename;
    char mode; // encrypt or decrypt mode

    cout<<"Enter the filename: ";
    getline(cin >> ws, filename); // ws = whitespace, it means "ignore the whitespaces"

    cout << "Encrypt (e) or Decrypt (d) ?";
    cin>> mode; 

    if(mode=='e' || mode=='E'){
        if(encryptFile(filename, true)){
            cout<<"Encryption completed successfully." << endl;
        }
        else {
            cerr << "Error: Unable to perform encryption.";
        }
    } 
    else if (mode=='d' || mode=='D'){
        if(encryptFile(filename, false)){
            cout<<"Decryption completed successfully." << endl;
        }
        else {
            cerr << "Error: Unable to perform decryption.";
        }
    }
    else {
        cerr << "Error: Invalid mode selection. Use 'e' for encryption or 'd' for decryption." << endl;
    }

    return 0;
}
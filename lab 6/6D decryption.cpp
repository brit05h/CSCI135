/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyguen 
Assignment: Lab 6D

Write a program implementing two decryption functions
corresponding to the above ciphers.
Be sure to include:
decryptCaesar(ciphertext, rshift) == plaintext
decryptVigenere(ciphertext, keyword) == plaintext
*/

#include <iostream>
#include <string>
using namespace std;
int vigenereIndex = -1; 

int key(char a){                    //returns 0-25 for characters
    int worded = (int)a;
    if(worded >=97 && worded <= 122){
        return worded - 97;
    }
    else return -1;
}
char keys(int x){                // returns character from 0-25
    x+=26;
    return (char)((x%26)+97);
}

int cipher(string codeword){
    vigenereIndex++;
    vigenereIndex%=codeword.length();
    return key(codeword[vigenereIndex]);
}

char shiftChar(char c, int rshift){
    char worded = tolower(c);
    int s = ((int)worded - 97 + rshift);
    s += 26;
    s =  s % 26;
    s += 97;
    worded = (char)s;

    if((int)c >= 65 && (int)c <= 90){ // uppercase letters
        worded = toupper(worded);
        return worded;
    }

    if((int)c >= 97 && (int)c <= 122){ // lowercase letters
        return worded;
    }
    else{ //punctuation
        return c;
    }
}

string encryptCaesar(string plaintext, int rshift){
    string output;
    for(int i=0; i < plaintext.length(); i++){
    output += shiftChar(plaintext[i], rshift);
    }
    return output;
}

string encryptVigenere(string plaintext, string keyword){
    string output;
    char wordedchar;
    bool plainCASE = true; // if true, this is a lower case character
    vigenereIndex = -1; // reset for this Vigenere run
    for(int j=0; j<plaintext.length(); j++){
        wordedchar = tolower(plaintext[j]);
        plainCASE = (plaintext[j] == wordedchar);

        if((int)wordedchar >= 97 && (int)wordedchar <= 122){
            if(plainCASE){
                output += keys(cipher(keyword)+key(wordedchar));            
            }
            else{
                output += toupper(keys(cipher(keyword)+key(wordedchar)));
            }
        }
        else{
            output += plaintext[j];
        }
    }
    return output;
}

string decryptCaesar(string ciphertext, int rshift){    //negates caesar shift
    return encryptCaesar(ciphertext, 0-rshift);
}

string decryptVigenere(string ciphertext, string keyword){ //Reverse implementation of Vigenere Cipher
    string output;
    char wordedchar;
    bool plainCASE = true; // if true, this is a lower case character
    vigenereIndex = -1; // reset for this Vigenere run
    for(int j=0; j<ciphertext.length(); j++){
        // cout << ciphertext[j] << endl;
        wordedchar = tolower(ciphertext[j]);
        plainCASE = (ciphertext[j] == wordedchar);

        if((int)wordedchar >= 97 && (int)wordedchar <= 122){
            if(plainCASE){
                output += keys(key(wordedchar)-cipher(keyword));            
            }
            else{
                output += toupper(keys(key(wordedchar)-cipher(keyword)));
            }
        }
        else output += ciphertext[j];
    }
    return output;
}


int main(){             //all input and outputs for whats being asked
    string input = "";
    int shift;
    string keyword;
    cout << "Enter Plaintext: ";
    getline(cin, input);
    cout << "= Caesar =\n Enter Shift    : ";   //cesars input
    cin >> shift;
    string caesarIn = encryptCaesar(input, shift);
    cout << "Ciphertext     : " << caesarIn << endl;    //cesars output
    cout << "Decrypted      : " << decryptCaesar(caesarIn, shift) << endl << endl;

    cout << "= Vigenere = \n Enter keyword  : ";    //vigenere input
    cin >> keyword;
    string vigenereIn = encryptVigenere(input, keyword);
    cout << "Ciphertext     : " << vigenereIn << endl;  //vigenere output
    cout << "Decrypted      : " << decryptVigenere(vigenereIn, keyword) << endl;
    
    
    return 0;
}
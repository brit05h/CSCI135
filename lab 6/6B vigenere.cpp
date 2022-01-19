/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyguen 
Assignment: Lab 6B

Write a program with functions implementing
Caesar cipher encryption.Case and characters should be left unchanged.
*/

#include <cctype>
#include <string>
#include <iostream>     
using namespace std;

int word(char a){                    // 0-25 for characters
    int output = (int)a;
    if(output >=97 && output <= 122){
        return output - 97;
    }
    else return -1;
}
char keys(int x){                // character from 0-25
    x+=26;
    return (char)((x%26)+97);
}

int cipher(string codeword){
    int static i = -1;
    i++;
    i%=codeword.length();
    return word(codeword[i]);
}
string encryptVigenere(string plaintext, string keyword){
    string output;
    char outputchar;
    bool plainCASE = true; // if true, this is a lower case character
    for(int j=0; j<plaintext.length(); j++){
        outputchar = tolower(plaintext[j]);
        plainCASE = (plaintext[j] == outputchar);

        if((int)outputchar >= 97 && (int)outputchar <= 122){
            if(plainCASE){
                output += keys((int)cipher(keyword)+word(outputchar));            
            }
            else{
                output += toupper(keys(cipher(keyword)+word(outputchar)));
            }
        }
        else{
            output += plaintext[j];
        }
    }
    return output;
}
char shiftChar(char c, int rshift){
    if (islower(c)){ // CC type header,a-z characters
        return 'a'+((c-'a' +rshift)%26); // 26,# of alphabets(lower)
    }

    else if(isupper(c)){
        return 'A'+((c-'A' +rshift)%26);//(uppercase)
    }
    else{
        return c;
    }
}

string encryptCaesar(string plaintext, int rshift)//encryption
{
    for (int i = 0; i < plaintext.length(); i++)
    {
        char c =plaintext[i];   //terms of i
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        plaintext[i]=shiftChar(plaintext[i],rshift);
    }
    }
    return plaintext; 
}
int main()
{
    string plaintext;
    string rshift;

    cout << "Enter plaintext: ";//input and output
    getline(cin, plaintext);
    cout << "Enter keyword: ";
    cin >> rshift;
    cout <<"Ciphertext: " << encryptVigenere(plaintext,rshift)<<endl;
    return 0;
}
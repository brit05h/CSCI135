/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 6B

Write a program with functions implementing
Caesar cipher encryption.Case and characters should be left unchanged.
*/

#include <cctype>
#include <string>
#include <iostream>     
using namespace std;

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
    int rshift;

    cout << "Enter plaintext: ";//input and output
    getline(cin, plaintext);
    cout << "Enter shift: ";
    cin >> rshift;
    cout <<"Ciphertext: " << encryptCaesar(plaintext,rshift)<<endl;

}
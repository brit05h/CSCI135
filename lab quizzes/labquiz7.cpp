/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab Quiz 7

Write a program that defines the function 'void remove_e(string
& sentence)' Removes all 'e' characters from the original string

*/

#include <iostream>
#include <string>
using namespace std;

void remove_e(string &sentence){    //function to remove e in string
    for(int i = 0; i < sentence.size(); i++){ //string length
        if(sentence[i] == 'e'){ //character e recognized
           sentence.erase(sentence.begin()+i); //erases char e
        }
    }
}

int main()
{
    string hello = "Hello";
    remove_e(hello);
    return 0;
    
}
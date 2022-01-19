/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 6A

Write a program that asks the user to input a line of text.It 
should report all characters from the input line together with their ASCII codes..
*/

#include <iostream>
using namespace std;
int main(){
    string s;
    cout << "Input: ";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" "<<(int)s[i]<<endl;
    }
}
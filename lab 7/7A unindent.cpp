/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 7A

Write a program, unindent.cpp, that reads input from cin
and prints out each input line with leading spaces removed.
*/

#include<iostream>              //include libraries
#include <cctype>               //to use function isspace to check if 
using namespace std;            // character is a whitespace
string removeLeadingSpaces(string line){    //function takes one line of code as inout
    string outLine;
    bool remove=false;  
    for (int i=0; i < line.length(); i++){
        if (!isspace(line[i])){//isspace function
             remove = true;
        }
        if (remove) outLine += line[i];
    }
    return outLine;
}

int main(){             //main function
    string line;        //grabs the string and reads input
    while(getline(cin, line)){
        cout << removeLeadingSpaces(line) << endl;//prints each line with spaced removed
    }
    return 0;
}

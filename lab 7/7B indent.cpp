/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 7B

Write a program, indent.cpp, that enhances the program from the previous task.
As it reads the input line by line, it should also count the number of open and
closed {} in it,and keep track of how ,many blocks is currently open at the beginning of each line.
*/

#include<iostream>              //include libraries
#include <cctype>               //to use function isspace to check if 
#include <sstream>
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

int countChar(string line, char c){     //scans the line and return # of characters
    int count;
    for(int i=0;i<line.length();i++){
        if(line[i]==c)                  //every time i is c it is counted
            count++;
    }
    return count;
}

string addLeadingSpaces(string lineB){
    string print;
    istringstream cleanStream(lineB);
    int indentTotal = 0;
    string indent = "";
    for(string line; getline(cleanStream, line); ) {
        if(line[0] == '}'){         // IF first line is a '}' then its reduced
            indent = string(indentTotal - 1, '\t');
        }
        else{
            indent = string(indentTotal, '\t');
        }
        print += indent + line + "\n";
        indentTotal += countChar(line, '{') - countChar(line, '}');  //changes indent of the next line
    }
    return print;
}

int main(){             //main function
    string line;       //grabs the string and reads input
    string indent;
    while(getline(cin, line)){
        indent += removeLeadingSpaces(line) + "\n";//prints each line with spaced removed
    }
    cout<<addLeadingSpaces(indent);     //new function
    return 0;
}

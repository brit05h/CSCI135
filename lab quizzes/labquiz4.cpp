/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab Quiz 4

Write a program, Reading files: Open and read a file called 
"data.txt", which contains lines of text with names of colors and their RGB values
Read and print each line. Close the file after processing it.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    ofstream out; // Open a file with the name hello.txt.
    out.open("data.txt"); 
    out<<"redFF0000"<<endl<<"green00FF00"<<endl<<"blue0000FF";
    out.close(); //Close the file.
    ifstream in;// Open the same file again.

    string message;     // Reads the message into a string variable and print it.
    getline(in, message);
    cout << message << endl;
    in.close();         
    return 0;
}
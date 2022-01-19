/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen
Assignment: HW E8.1

Write a program  that carries out the following tasks:
    Open a file with the name hello.txt.
    Store the message "Hello, World!" in the file.
    Close the file.
    Open the same file again.
    Read the message into a string variable and print it.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
    ofstream out; // Open a file with the name hello.txt.
    out.open("hello.txt"); // Store the message "Hello, World!" in the file.
    out << "Hello, World!"; //Close the file.
    out.close(); // Open the same file again.
    ifstream in;
    in.open("hello.txt");

    string message;     // Reads the message into a string variable and print it.
    getline(in, message);
    cout << message << endl;
    in.close();         
    return 0;
}
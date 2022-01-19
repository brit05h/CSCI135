/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: HW E5.6

Write a function string middle(string str) that returns a 
string containing the middle character in str if the length
of str is odd, or the two middle characters if the length is
even.
*/

#include <iostream>
#include <string>
using namespace std;

string middle(string str) {
    int i = str.length();

    if ((i % 2) == 0) {   //determines if the string length is even 
        return str.substr(i/2 - 1, 2);//returns the two middle
    }
    return str.substr(i/2, 1); //if odd returns one middle
}

int main() { //main function
    string input; //variable for string 
    cout << "Enter string: "; //ask for string
    cin >> input;
    string result = middle(input);//calling parameter funct.
    cout << result << endl; //print new result string 

    return 0;
}
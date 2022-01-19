/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 13A

Write a program recursion.cpp, defining a function void printRange(int left, int right);
that prints all numbers in range ≤ x ≤ right,separated by spaces. (Don’t use loops, global
or static variables.)When left > right, the range is empty and the program should not print
any numbers.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printRange(int left,int right);
//Part A:
void printRange(int left,int right){    //range is empty and base
    if(left>right){                     //case is when we want to stop
        return;                         //printing numbers
    }
    cout<<left<<" ";    //make recursive call to print next values
    printRange(left + 1, right);
}


int main() {
    printRange(-2, 10);
}
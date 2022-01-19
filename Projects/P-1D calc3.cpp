/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Project 1D

Write a program that can understand square numbers.
Use Ctrl+D to emulate the End-of-file situation.
*/
#include <iostream>
using namespace std;
int main(){
    int sum = 0, num;
    cin >> num;
    char operation;
    char nextOperation;

    while (cin >> nextOperation){
        if (nextOperation == '^')
        {
            //Adds or subtracts the number squared to the sum
            sum += operation == '-' ? -(num * num) : (num * num);
            cin >> operation;
        }
        else 
        {
            //Adds or subtracts the next number to the sum
            sum += operation == '-' ? -num : num;
            operation = nextOperation;
        }

        if (operation == ';')
        {
            //Prints the sum
            cout << sum << endl;
            sum = 0;
        }

        cin >> num;
    }

    return 0;
}
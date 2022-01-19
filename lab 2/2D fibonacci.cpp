/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Lab 2D

Write a program that uses an array of ints to compute and 
print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main(){
    int fib[60]; // make an array
    fib[0] = 0; // first two terms are given
    fib[1] = 1;
    cout<<fib[0]<<endl<<fib[1]<<endl;
    for(int i=2;i<60;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        // and all the following ones can be computed iteratively as
        cout<<fib[i]<<endl;
    }
    return 0;
}

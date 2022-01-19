/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Lab 2B

Write a program that asks the user to input two integers L and U 
(representing the lower and upper limits of the interval), 
and print out all integers in the range 
L ≤ i < U separated by spaces. 
Notice that we include the lower limit, but exclude the upper 
limit.

*/

#include<iostream>
using namespace std;

int main(){
    int lower,upper;
    cout<<"Please enter L: ";
    cin>>lower;
    
    cout<<"Please enter U: ";
    cin>>upper;
    
    for(int i = lower; i < upper; i++) {
    cout<<i<<" ";
    }
    return 0;
}

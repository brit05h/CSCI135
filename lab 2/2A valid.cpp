/*
Author: Britney Huiracocha
CSCI135
Instructor: Minh Nguyen
Assignment: Lab 2A

Write a program that asks the user to input an integer
in the range 0<n<100. 
If the number is out of range,the program should keep 
asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.

*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Please enter an integer: ";
    cin>>num;
    while(num<1||num>99)
    {
        cout<<"Please re-enter: ";
        cin>>num;
    }
    
    int numSquared=num*num;
    cout<<"Number squared is "<<numSquared;

    return 0;
}

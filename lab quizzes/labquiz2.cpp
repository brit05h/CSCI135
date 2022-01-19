/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab Quiz 2
Write a program that finds out the bigger of two integers.
*/

#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number: ";  //asking for the 1st num
    cin>>num1;
    cout<<"Enter the second number: "; //asking for the 2nd num
    cin>>num2;
    
    if(num1>num2){  //if statement on condition
        cout<<"The larger of the two is "<<num1; //if 1st num is more than 2nd
    }
    else
    {
        cout<<"The larger of the two is "<<num2;
    }
    return 0;
}

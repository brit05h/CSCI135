/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: HW E3.5

Write a program that reads three numbers and prints “increasing” if they are
in increasing order, “decreasing” if they are in decreasing order, and “neither”
other- wise. 
*/

#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;     //setting up integers 
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    
    if(num1<num2 && num2<num3)      //if statement for whether its + or -
    {
        cout<<"Increasing"<<endl;
    }
    else if(num1>num2 &&num2>num3)
    {
        cout<<"Decreasing"<<endl;
    }
    else 
    {
        cout<<"Neither"<<endl;  //for no + or no - 
    }
    return 0;
}

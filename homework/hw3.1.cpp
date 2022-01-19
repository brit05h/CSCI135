/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: HW E3.1

Write a program that reads an integer and 
prints whether it is negative,zero,or positive.
*/

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    
    if(num>0)
    {
        cout<<"The integer is positive."<<endl;
    }
    else if(num<0)
    {
        cout<<"The integer is negative."<<endl;
    }
    else if(num==0)
    {
        cout<<"The integer is zero."<<endl;
    }
    return 0;
}

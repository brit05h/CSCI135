/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment:Lab1A

This program asks the user to input two integer numbers.
It then prints out the smaller of the two.

*/

#include <iostream>
using namespace std;
int main(){

        int num1,num2;

        cout<<"Enter the first number: ";
        cin>>num1;

        cout<<endl;

        cout<<"Enter the second number: ";
        cin>>num2;

        if (num1<num2){
           cout<<"The smaller of the two is: "<<num1;
        }
        else{
           cout<<"The smaller of the two is: "<<num2;
        }
}

/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Lab 1C

Write a program that asks the user to input 
an integer representing a year number.If the input is a leap year,
it should print Leap year, otherwise, print Common year.
*/

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    
    if(year%4!=0){
        cout<<"Common Year"; //year is not divisible by 4 then it is common year
    }
    
    else if (year%100!=0){
        cout<<"Leap Year"; //year is not divisible by 100 then it is leap year
    }
    
    else if (year%400!=0){
        cout<<"Common Year"; //year is not divisible by 400 then it is common year
    }
    
    else{
        cout<<"Leap Year"; //anything else is leap year
    }
    return 0;
}
/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Lab 1D

Write a program that asks the user to input 
the year and the month.Then prints the number of days in that month.
*/

#include <iostream>
using namespace std;
int main()
{
    int year,month;
    
    cout<<"Enter the year: ";
    cin>>year;
    cout<<"Enter the month: ";
    cin>>month;
    
        if (month==1 or month==3 or month==5 or month==7 or month==8 or month==10 or month==12){
            cout<<"31 days";}
        else if (month==4 or month==6 or month==9 or month==11){
            cout<<"30 days";
        }
    
    else{
        if (year%4!=0){
        cout<<"28 days"; //year is not divisible by 4 then it is common year
        }
    
        else if (year%100!=0){
        cout<<"29 days"; //year is not divisible by 100 then it is leap year
        }
    
        else if (year%400!=0){
        cout<<"28 days"; //year is not divisible by 400 then it is common year
        }
    
        else{
        cout<<"29 days"; //anything else is leap year
        }
        }
    return 0;
}
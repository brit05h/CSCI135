/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Project 1A

Write a program that reads a sequence of integers from cin. 
It should then report their sum.
*/

#include<iostream>
using namespace std;

int main()
{   
    int sum = 0;            
    int num;
    while (cin >> num) 
    {
        sum=sum+num;
        //TODO: instead of print out a number once we get it,
        //we will add it to a variable sum.
        //cout << num << endl;
  
    }
    cout<<sum;
    //TODO print the value of sum.

    return 0;
}
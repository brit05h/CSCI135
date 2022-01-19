/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4D

Write a program that prints the 
bottom-left half of a square, given the side length.
*/

#include <iostream>
using namespace std;
int main()
{
    int side;            //setting up inputs
    cout<<"Input side length: ";
    cin>>side;
    cout<<endl;
    
    cout<<"Shape: ";
    cout<<endl;
    for(int r=1;r<=side;r++){   //the rows
        for(int c=1;c<=r;c++){ //cols
            {
                cout<<"*"; //added an if statement depending on the coordinates
            }
        }
        cout<<endl;
    }
    return 0;
}

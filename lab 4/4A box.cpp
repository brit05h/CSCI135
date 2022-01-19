/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4A

Write a program that asks the user to input width and height and 
prints a solid rectangular box of the requested size using asterisks.
*/

#include <iostream>
using namespace std;
int main()
{
    int width=0;            //setting up inputs
    cout<<"Input width: ";
    cin>>width;
    cout<<endl;
    int height=0;
    cout<<"Input height: ";
    cin>>height;
    cout<<endl;
    for(int row=0;row<height;row++){   //the aterisk character width times
        for(int col=0;col<width;col++){ //using a loop to repeat height times
            cout<<"*";}
        cout<<endl;
    }
    return 0;
}

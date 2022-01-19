/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4B

Write a program that asks the user to input width and height and 
prints a rectangular checkerboard of the requested size using asterisks and spaces.
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
            if (row % 2 == 0 && col % 2 == 0 || row % 2 == 1 && col % 2 == 1)
            {
                cout<<"*"; //added an if statement depending on the coordinates
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

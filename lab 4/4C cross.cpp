/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4C

Write a program that asks the user to input the shape size,
and prints a diagonal cross of that dimension.
*/

#include <iostream>
using namespace std;
int main()
{
    int num;            //setting up inputs
    cout<<"Input size: ";
    cin>>num;
    int diagonal=num-1;
    cout<<endl;
    
    cout<<"Shape: ";
    cout<<endl;
    for(int row=0;row<num;row++){   //the rows
        for(int col=0;col<num;col++){ //cols
            if (row ==col||col==diagonal-row)
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

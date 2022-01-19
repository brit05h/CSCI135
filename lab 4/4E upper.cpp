/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4E

Write a program that prints the 
top-right half of a square, given the side length.
*/

#include <iostream>
using namespace std;
int main()
{
    int r,c,side;
    cout<<"Input side length: ";
    cin>>side;
    cout<<endl;
    
    cout<<"Shape: ";
    cout<<endl;
    for(r=1; r<=side; r++){//outer for loop
   for(c=1; c<r; c++){//inner for loop
   cout<<" ";//print space
   }
   for(c=r; c<=side; c++){//inner for loop
   cout<<"*";//print stars
   }
   cout<<"\n";//move to next line
}
    return 0;
}
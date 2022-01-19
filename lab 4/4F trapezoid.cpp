/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4F

Write a program that prints an upside- 
down trapezoid of given width and height.
*/

#include <iostream>
using namespace std;
int main()
{
    int width,height,i,j,s,space;
    
    cout<<"Input width: "; //tells the input for width
    cin>>width;
    cout<<"Input height: ";//tells the input for height
    cin>>height;
    cout<<"\n";
    
    if(width%2==0 && height>width/2)
    {
        cout<<"Impossible shape!";
    }
    else if(width%2 !=0 && height>(width/2+1))
    {
        cout<<"Impossible shape!";
    }
    else
    {
        space=0;
        for(i=1;i<=height;i++)//uses a for loop
        {
            for(s=0;s<space;s++)
            cout<<" ";
            for(j=1;j<=width;j++)
            cout<<"*";
            cout<<endl;
            width=width-2;//decreases width by 2
            space++;//increases left space by 1.
        }
    }
    }

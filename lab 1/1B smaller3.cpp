/*
Britney Huiracocha
CSCI135
Instructor: Minh Nguyen
Assignment:Lab 1B

This program asks the user to input three integer numbers.
It then prints out the smallest of the three.
*/

#include <iostream>
using namespace std;
int main()
{

        int x,y,z;

        cout<< "Enter first number : ";
        cin>>x;

        cout<< "Enter second number : ";
        cin>>y;

        cout<< "Enter third number : ";
        cin>>z;

        int small;

        if(x<y){
          small=x;
        }
        else{
          small=y;
        }
        if(small>z){
           small=z;
        }

           cout<< "The smaller of the three is "<<small<<endl;
}
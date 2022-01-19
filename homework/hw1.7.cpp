/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment:HW E1.7

This program asks the user to input three of your favorite movies.
Then prints out these titles, on three seperate lines.
*/

#include <iostream>
using namespace std;
int main()
{
    string movieOne;
    string movieTwo;
    string movieThree;
    
    cout<<"Enter your first favorite movie: ";
    cin>>movieOne;
    
    cout<<"Enter your second favorite movie: ";
    cin>>movieTwo;
    
    cout<<"Enter your third favorite movie: ";
    cin>>movieThree;
    
    cout<< movieOne<<endl<< movieTwo<<endl<< movieThree<<endl;
    
    return 0;
}

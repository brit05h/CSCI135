/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Lab 2C

Write a program that that creates an array of 10 integers, 
and provides the user with an interface to edit any of its 
elements.
*/

#include <iostream>
using namespace std;
int main(){
    int myData[10];
    int i, v, x;
    for(int x = 0; x < 10; x++)
    {
        myData[x] = 1;
        cout << myData[x] << " ";
    }
    do{
    cout << endl;
    cout << "Input index: " << endl;
    cin >> i; 
    cout << "Input value: " << endl;
    cin >> v;
    if (i < 10 && i >= 0){
        myData[i] = v;
        for (int x = 0; x < 10; x++)
        {
            cout << myData[x] << " ";
        }
       
    }
    else{
        cout << "Index out of range.Exit." << endl;
    }
    
    } while (i < 10 && i >= 0);
    return 0;
}

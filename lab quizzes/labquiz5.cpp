/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab Quiz 5

Write a program that outputs a 5 wide, 6 tall star grid to the console using 'cout
<<', each line looks "* * * * " ( without double quotes)
*/

#include <iostream>
using namespace std;

int main (){
    int count = 0;
    for(int row = 0; row < 6; row++){
        for (int col = 0; col < 5; col++){
            if(count < 4)
                cout << "* ";
            else
                {cout << '*';}
            count++; //increase counter
        }
        count = 0; //reset the counter
        //cout << '|'; //checker for trailing spaces
        cout << endl; //new line
    }
}
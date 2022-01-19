/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Mguyen
Assignment: Lab Quiz 9

Write a program where brackets define int
unbalanced_brackets(string input), return difference
of unbalanced open and closed brackets. 
Ex. : Given "{}}}", return -2
*/

#include <iostream>
using namespace std;

int unbalanced_brackets(string input){  //function given
    int count = 0; //declares count as an integer set to 0
    for (int i = 0; i < input.length(); i++){ //measures the length of string,input
        if (input[i] == '{'){ //condition set
            count ++;   //adds one to every {
        }
        else{
            count --; // subtracts one to every }
        }
    }
    return count; //returns final value after calculating
}

int main(){  //main function 
    string input; //asks user to enter string 
    cout << "Enter curly brackets: ";
    cin >> input; //receives input
    //calls function 
    cout<<unbalanced_brackets(input); //function that returns brackets

}

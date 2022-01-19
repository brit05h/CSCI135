/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen
Assignment: Lab Quiz 6

Write a program that defines the function 'int max3(int a,
int b, int c)' that returns the maximum of a, b, and c.

*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c){ //given function to find max of 3 numbers
int num = a;
	if(num < b){ //if a is smaller than b
		return b; //the output would be b
    }
	if (num < c){ //if b is smaller than c
		return c; //the output would be c
    }
    else
	return num; //if not true then it would be a
}

//main function
int main (){ 
}
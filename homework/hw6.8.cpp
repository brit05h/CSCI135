/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: HW E6.8

Write a function,bool equals(int a[],int a_size,intb[],int b_size), 
It checks whether two arrays have the same elements in the same order.
*/

#include <iostream>
using namespace std;

bool equals(int a[],int a_size,int b[],int b_size){ //function that is given
    if (a_size != b_size){ //if the size of array a is not equal to the size of array b
        return false;     //then funct. will return false (not equal)
    }
    for(int i=0;i<a_size;i++){ //for every element in the size of array a
        if(a[i] != b[i]){ //if the array a is not the same as the one in array b (for every element that is checked)
            return false; //the function is false (elements are not the same)
        }
        return true; //otherwise if they are, funct. is true (same order,same elements)
    }
    
int main() //main function (not in use)
{
    return 0;
}

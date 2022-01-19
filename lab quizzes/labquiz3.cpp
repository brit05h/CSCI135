/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab Quiz 3

Write a program that initializes array of numbers 1-10
and uses 'cout>>' to print each number on a seperate line.
*/

#include <iostream>
using namespace std;
int main() {
   int arr[10]={1};
   for(int i=0;i<10;++i){
       arr[i]=1+i;
       cout<<arr[i]<<endl;
   }
}
/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: HW E4.8

Write a program that reads a word and prints
each character of the word on a seperate line.
*/

#include<iostream>
using namespace std;
int main() 
{
   string str;
   cout << "enter a word: "; //asks for input
   cin >> str;
   for(int i = 0; i<str.length(); i++)
   {
      cout << str.at(i) << endl; //get character at position i
   }
   return 0;
}

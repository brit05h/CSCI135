/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 4G

Write a program that asks the user to input width 
and height and prints a checkerboard of 3-by-3 squares.
(It should work even if the input dimensions are not a multiple of three.)
*/

#include <iostream>
using namespace std;


int main()
{    

int height, width;          //set up inputs 

cout << "Input width: ";
cin >> width;
cout<<endl;

cout << "Input height: ";
cin >> height;
cout<<endl;

for(int i = 0; i < height; i++) { //use a for loop

for(int j = 0; j < width; j++) {  
     if ( (j % 6 == 0 || j % 6 == 1 || j % 6 == 2 || j % 6 == 6) && ( i % 6 == 3 || i % 6 == 4 || i % 6 == 5 ) ){
       cout << " ";  
     } 
     else if( j % 6 == 0 || j % 6 == 1 || j % 6 == 2 || j % 6 == 6){
         cout << "*"; 
     } 
     else if( i % 6 == 3 || i % 6 == 4 || i % 6 == 5 ){
       cout << "*";   //for the 3x3 pattern
     } 
     else{
         cout<<" ";//prints out the spacing
     }
}
    cout << endl;
}
 return 0;
}
  
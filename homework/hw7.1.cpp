/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: HW E7.1

Write a function,void sort2 (double* p,double* q) that recieves
two pointers and sorts the values to which they point.If you call
sort2(&x,&y) then x<=y after the call.
*/

#include <iostream>
using namespace std;
void sort2 (double*p, double*q);
void sort2 (double*p, double*q){      //function recieving two pointers
     if (*q < *p){                      //sorting values
     double temp = 0;                   //double used for decimals
     *q = temp;                         //swaps the two pointers
     *p = *q ;
     temp = *p; 
 }
}
int main (){
     double x =0;                   //declares double values
     double y =0;
     sort2(&x, &y);                 //when you call the function then 
 }                                  //x<=y after its called

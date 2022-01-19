/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyguen 
Assignment: HW E5.14 (sort 2)

Write a function void sort2(int& a, int& b) that swaps 
the values of a and b if a is greater than b and otherwise 
leaves a and b unchanged. 
*/

#include <iostream>
#include <cassert>
using namespace std;

void sort2(int & a, int & b){
    int num;
    if (a>=b){
        num = b;
        b = a;
        a = num;
    }
    else {
        a = a;
        b = b;
    }    
}

int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    int y;
    cout<<"Enter number: ";
    cin>>y;
    sort2(x, y);

    cout << x << " " << y<< endl;
    return 0;
}
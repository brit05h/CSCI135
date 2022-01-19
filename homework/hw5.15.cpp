/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: HW E5.15 (sort 3)

Write a function sort3
(int& a, int& b, int& c) that swaps its
three arguments to arrange them in sorted order.
*/

#include <iostream>
#include <cassert>
using namespace std;

void sort3(int & a, int & b,int &c){
    int num;
    int sort;
    if (a>=b){
        num = b;
        b = a;
        a = num;
    }
    if(a>=c){
        sort=c;
        c=a;
        a=sort;
    }
    if(b>=c){
        sort=c;
        c=b;
        b=sort;
    }
    else {
        a = a;
        b = b;
        c = c;
    }    
}

int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    int y;
    cout<<"Enter number: ";
    cin>>y;
    int z;
    cout<<"Enter number: ";
    cin>>z;
    sort3(x, y,z);

    cout << x << " " << y<<" "<<z<< endl;
    return 0;
}
/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 5A

Write a function, bool isDivisibleBy(int n,int d);, 
where n is divisible by d.The function should return true,otherwise 
return false.Program should also have a main function that test your code.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n,int d);

int main(){
    cout<<isDivisibleBy(100,25)<<endl;
    cout<<isDivisibleBy(100,24)<<endl;
    cout<<isDivisibleBy(100,23)<<endl;
    return 0;
}
bool isDivisibleBy(int n,int d){
    if (d==0){
        return false;   //'return' command tells the return of that value
    }                   //and not go any further
    if(n%d==0){
        return true;    //otherwise if meaning n%d!=0 then it would be 
    }                   //return false;
    return false;
}

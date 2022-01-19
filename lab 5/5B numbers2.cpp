/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 5B

Write a function, with the same program numbers.cpp, 
where you include the function, bool isPrime(int n);.The function should
return true if n is prime,otherwise return false.Change the function to test.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n,int d);
bool isPrime(int n);

int main(){
    cout<<isPrime(1)<<endl;
    cout<<isPrime(5)<<endl;
    cout<<isPrime(22)<<endl;
    cout<<isPrime(24)<<endl;
    return 0;
}

bool isPrime(int n){
    if (n <= 1)
    {
        return false;
    }
    for(int i=2; i<=n-1; i++)
    {
        if(n % i ==0)
        {
            return false;
        }
    }
return true;
}
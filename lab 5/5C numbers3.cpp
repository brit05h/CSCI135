/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 5C

Write a function, with the same program numbers.cpp, 
where you add the function, int nextPrime(int n);.The 
function should return the smallest prime greater than n.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n,int d);    
bool isPrime(int n);        //for prime
int nextPrime(int n);       //for next prime

int main(){
    cout<<nextPrime(17)<<endl; //whether 1 is a prime,should be false
    cout<<nextPrime(19)<<endl;
    return 0;
}
int nextPrime(int n){
    n++;
    while(!isPrime(n)){
        n++;
    }
    return n;
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
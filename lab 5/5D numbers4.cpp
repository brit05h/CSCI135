/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 5D

Write a function, with the same program numbers.cpp, 
where you add the function, int countPrimes(int a,int b);.The 
function should return the number of prime numbers in the interval a<x<b.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n,int d);    
bool isPrime(int n);        //for prime
int nextPrime(int n);       //for next prime
int countPrimes(int a, int b);  //for count primes

int main(){
    cout<<nextPrime(17)<<endl; //whether 1 is a prime,should be false
    cout<<nextPrime(19)<<endl;
    return 0;
}
int countPrimes(int a, int b){
    int counter=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            counter++;          //when you get prime,increment 1
        }
    }
    return counter;
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
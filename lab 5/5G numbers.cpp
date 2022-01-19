/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 5G

Write a function, with the same program numbers.cpp, 
where you add the function,int largestTwinPrime(int a, int b);.The 
function should return the largest twin prime,if not then return -1..
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n,int d);    
bool isPrime(int n);        //for prime
int nextPrime(int n);       //for next prime
int countPrimes(int a, int b);  //for count primes
bool isTwinPrime(int n);        //for isTwinPrime
int nextTwinPrime(int n);       //next twin prime
int largestTwinPrime(int a, int b);  //largest twin prime

int main(){
    cout<<largestTwinPrime(3, 105)<<endl; //whether 1 is a prime,should be false
    return 0;
}
int largestTwinPrime(int a, int b){
    for(int i=b;i>=a;i--){
        if(isTwinPrime(i))
        return i;
    }
    return -1;      //if no twin prime then return -1
}
int nextTwinPrime(int n){
    int i=n;
    do{
        ++i;
    }while(!isTwinPrime(i));
        return i;
    }
bool isTwinPrime(int n){
    if(isPrime(n)&&(isPrime(n-2) or isPrime(n+2))){
        return true;
    }
    return false;
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
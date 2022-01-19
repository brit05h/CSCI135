/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 12A

A big benefit of vectors is their ability to be 
returned from functions. For this task, program a 
function called vector<int> makeVector(int n) that 
returns a vector of n integers that range from 0 to n-1.
Call your program vectors.cpp. Your function must be implemented
outside the main function and must return a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector<int> newVector;
    for(int i = 0;i <n; i++){ //i ranges from 0 to n-1
        newVector.push_back(i);
    }
    return newVector; //return result
}

int main(){
    int n=5;
    vector<int> test = makeVector(n); //print 0 1 2 3 4 
    for (int i = 0; i < test.size(); i++){
        cout << test[i] << " ";
    }
    cout<<endl; //end of vector
}

/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab Quiz 13

Define function vector<int> makeVector(int n) which, if n
is positive, return a vector of ints of 0 to n-1, otherwise
return an empty vector
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int>makeVector(int n){
    vector<int> temp; 
    if (n<0){
        return temp; //empty array is returned
    }
    for(int i=0; i<n; i++){
        temp.push_back(i);
    }
    return temp;
}

int main(){
   // vector(int)temp = makeVector(0);
    //for(int i!temp){
     //   cout<<i<<endl;
    //}
}

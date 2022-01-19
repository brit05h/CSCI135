/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 12D

Write a program called pairwise.cpp that implements
the function vector<int> sumPairWise(const vector<int> &v1,
const vector<int> &v2) that returns a vector of integers whose
elements are the pairwise sum of the elements from the two vectors
passed as arguments. If a vector has a smaller size than the other,
consider extra entries from the shorter vectors as 0.
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
    vector<int> sum;
    int total;
    if(v1.size() > v2.size()){//if v1 is bigger
        for(int i=0; i<v2.size(); i++){
            sum[i] += v2[i]; //adds v1 and v2
        }
    }
    else{
        for(int i=0; i<v1.size(); i++){
            sum[i] += v1[i];
        }
    }
    return sum;
}

int main(){
   vector<int> v1{1,2,3};
   vector<int> v2{4,5};
   sumPairWise(v1, v2); // returns [5, 7, 3]
}
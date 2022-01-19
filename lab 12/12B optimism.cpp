/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 12B

Make a program called optimism.cpp that implements
the function vector<int> goodVibes(const & vector<int> v); 
that, given a vector of integers, returns a vector with only
the positive integers in the same order.
*/

#include <iostream>
#include <vector>
using namespace std;

//vector<int> goodVibes(const & vector<int> v);
vector<int> goodVibes(vector<int> v){
    vector<int> positive; //goes through the input v
    for (int i = 0; i<v.size(); i++) {
        if (v[i] > 0){
            positive.push_back(v[i]);
        }
    }
    return positive;
}

int main(){
    //vector<int> v{1,2,-1,3,4,-1,6};
    //v=goodVibes(v); //returns {1,2,3,4,6}
    // for (int i=0;i<v.size();i++){
    //      cout<<v[i]<<" ";
    // }
    // cout<<endl;
}
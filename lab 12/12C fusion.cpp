/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 12C

Make a program called fusion.cpp that implements
the function void gogeta(vector<int> &goku, vector<int> &vegeta)
that appends elements of the second vector into the first and empties
the second vector.
*/

#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (int i=0; i<vegeta.size();i++){ //pushes elements from v2 to v1
        goku.push_back(vegeta[i]);
    }
    vegeta.clear(); //clear v2
}

int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    gogeta(v1,v2); //v1 is now 1 2 3 4 5 and v2 is empty
    for (int i=0; i<v2.size();i++){ 
        cout<< v2[i]<<" ";
    }
    cout<<endl;
}
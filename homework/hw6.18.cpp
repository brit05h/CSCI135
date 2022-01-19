/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: HW E6.18

Write a function, vector<int> append(vector<int> a, vector<int> b
that appends one vector after another. For example, if a is 1 4 9 16
and b is 9 7 4 9 11 then append returns the vector 1 4 9 16 9 7 4 9 11
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b) {
    vector<int> v;
    for (int x : a) {
    v.push_back(x);
  }

  for (int x : b) {
    v.push_back(x);
  }

  return v;

}

int main() {

  vector<int> a = {1, 4, 9, 16};
  vector<int> b = {9, 7, 4, 9, 11};

  vector<int> c = append(a, b);

  for (int x: c) {
    cout << x << endl;
  }


  return 0;
}
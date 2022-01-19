/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment:HW E5.21

Write a recursive function, string reverse(string str),that computes
the reverse of a string. For example, reverse("flow") should return 
"wolf". Hint: Reverse the substring starting at the second character, 
then add the first character at the end. For example, to reverse "flow",
first reverse "low" to "wol", then add the "f" at the end.
*/

#include <iostream>
#include <string>
using namespace std;

string reverse(string str) { //provided recursive function
  if (str.length() == 1) { //if length is 1 
    return str;
  }
  else {
    return str.substr(str.length()-1, 1) + reverse(str.substr(0, str.length()-1));
  }
}

int main() {
  cout << reverse("flow") << endl;
  return 0;
}
/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 9D

 You are provided with the program poem.cpp.
 Fix the program poem.cpp. It should keep creating poems but 
 dynamically aallocate memory should get deleted when its not needed.
*/

#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p; //delete dynamically allocated memory when finished
    }
}
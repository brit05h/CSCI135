/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 13B

In the same program recursion.cpp, add a function, 
int sumRange(int left, int right); that computes the sum
of all numbers in range left ≤ x ≤ right.(Don’t use loops,
global or static variables.What makes it different from the 
previous example, this function has to return the answer:if the
range is empty, the sum is zero.Otherwise 
sum(left, right) = left + sum(left + 1, right).
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printRange(int left,int right); //Part A function provided
int sumRange(int left, int right);  //Part B function provided

//Part B:
int sumRange(int left, int right){
    if (left>right){
        return 0;
    }
    return left + sumRange(left + 1, right); //compute values with recursive call
}

//Part A:
void printRange(int left,int right){    //range is empty and base
    if(left>right){                     //case is when we want to stop
        return;                         //printing numbers
    }
    cout<<left<<" ";    //make recursive call to print next values
    printRange(left + 1, right);
}

//Part B main function: 
int main() {
    int x = sumRange(1, 3);
    cout << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << y << endl;   // 52
}
//Part A main function :
/*int main() { 
      printRange(-2, 10);
}
*/


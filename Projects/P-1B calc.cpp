/*
Author: Britney Huiracocha
Course: CSCI135
Instructor: Minh Nguyen
Assignment: Project 1B

Write a program that  that reads from the cin a sequence of one or more 
non-negative integers written to be added or subtracted.
Then print the result of the input summation.
*/

#include <iostream>
using namespace std;
int main(){
    int num;
    char sum;
    int counter=0;
    cin>>counter;
    
    while(cin>>sum>>num)
    {
        if(sum=='+'){
            counter +=num;
        }
        if(sum=='-'){
            counter -=num;
        }
    }
    cout<<counter<<endl;
    return 0;
}

/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen
Assignment: Project 1C

Write a program that can evaluate multiple arithmetic expressions.
The output should evaluate all of the expressions and print them each on its own line
*/

#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int newNum;
    char op;
    
    cin>>sum;
    while(cin>>op>>newNum) //reads the operation
    {
        if(op =='+')  //if operation is addition then use:
        {
            sum=sum+newNum;
        }
        if(op =='-')   //if operation is subtraction then use:
        {
            sum=sum-newNum;
        }
        
        if(op ==';')
        {
            cout<<sum<<endl;
            sum=newNum;
        }
    }
    cout<<sum<<endl;
    return 0;
}

/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: HW E7.16

Define a structure Point. A point has an x and a y coordinate.
Write a function double distance(Point a, Point b) that computes
the distance from a to b. Write a program that reads the coordinates
of the points, calls your function, and displays the result.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};
// Function to calculate distance
double distance(Point a, Point b){
    // Calculating distance
    double x1=a.x;
    double y1=a.y;
    double x2=b.x;
    double y2=b.y;
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
 
int main(){  
    Point first,second;
    cout<<"Enter x1: \n";
    cin>>first.x;
    cout<<"Enter x2: \n";
    cin>>second.x;
    cout<<"Enter y1: \n";
    cin>>first.y;
    cout<<"Enter y2: \n";
    cin>>second.y;
    cout << distance(first,second);
}
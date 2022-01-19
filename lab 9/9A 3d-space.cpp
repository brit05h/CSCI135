/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Ngyuen
Assignment: Lab 9A

Write a program in which you define a function length()
that recieves the coordinates of a point P passed as a pointer,
and computes the distance from the origin to the point P.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {     //declares Coord3 class (objects)
public:
    double x;
    double y;
    double z;
};
//Calculate the length(), point P in 3D space to origin O
//using the Euclidea formula
double length(Coord3D *p){
    return sqrt (pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}

int main() {    //main function
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
}
/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 9C

Write the same file and add a function, 
void move(Coord3D *ppos, Coord3D *pvel, double dt);
which gets the position and velocity of an object and computes
objects new coordinates after the time interval dt.
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
//part B, same file as A
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1)>length(p2)){ //length function from part A
        return p1;
    }
    else{
        return p2;
    }
}
void move(Coord3D *ppos, Coord3D *pvel, double dt){ //part c
    //update the new position ppos for 3 coord.
    //using formula
    ppos->x=ppos->x + (pvel->x*dt);
    ppos->y=ppos->y + (pvel->y*dt);
    ppos->z=ppos->z + (pvel->z*dt);
}  


int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}
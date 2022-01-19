/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 9E

In the program 3d-space.cpp, add functions that create,
delete, and coordinate objects dynamically:
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
//part d
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *p = new Coord3D; //dynamically allocate memory
    p->x=x;
    p->y=y;
    p->z=z;
    return p;
}
// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
}
int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
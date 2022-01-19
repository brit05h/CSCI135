/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 9B

Write the same file and add a function, 
Coord3D * fartherFromOrigin (Coord3D *p1,Coor3D *p2);
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

int main() {    //main function
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?
}
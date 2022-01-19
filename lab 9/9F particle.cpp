/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 9F

Write a new program particle.cpp, where you should
declare a new class particle, which stores position and
velocity of the particle, and provides the following programming interface
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
//new class particle
class Particle{
    public:
        Coord3D position,velocity; //both are coord3d type
};
// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
    Particle *newParticle=new Particle;
    (newParticle->position).x=x;
    (newParticle->position).y=y;
    (newParticle->position).z=z;

    (newParticle->velocity).x=vx;
    (newParticle->velocity).y=vy;
    (newParticle->velocity).z=vz;

    return newParticle;
}

// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz){
    (p->velocity).x=vx;
    (p->velocity).y=vy;
    (p->velocity).z=vz;
}

// get its current position
Coord3D getPosition(Particle *p){
    return (p->position);
}

// update particle's position after elapsed time dt
void move(Particle *p, double dt){
    (p->position).x+= (p->velocity).x * dt;
    (p->position).y+= (p->velocity).y * dt;
    (p->position).z+= (p->velocity).z * dt;
}

// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
    delete p;
}

int main() {
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
}
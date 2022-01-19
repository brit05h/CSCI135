/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen
Assignment: Lab 10A

Create a new program ,time.cpp. Implement two new 
functions:
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
*/

#include <iostream>
using namespace std;

class Time {
public:
    int h;
    int m;
};

//Task A - return the number of minutes from 0:00AM until time
int minutesSinceMidnight(Time time)
{
    int mins = 0;
    Time midnight = { 0, 0 }; //Midnight 12:00 AM --> 0:00 24/hr format
    mins = (time.h - midnight.h) * 60; //60 mins per hr
    mins += (time.m - midnight.m); //Add remaining mins elasped
    return mins;
}

//receive two Time arguments earlier and later and report how many minutes separate the two moments
int minutesUntil(Time earlier, Time later)
{
    int mins = 0;
    mins = (later.h - earlier.h) * 60; //60 mins per hr
    mins += (later.m - earlier.m); //Add remaining mins elasped
    return mins;
}


int main(){
    Time time1, time2;
    cout << "Enter the first time (hour then minute): " << endl;
    cin >> time1.h >> time1.m;
    cout << "Enter the second time (hour then minute): " << endl;
    cin >> time2.h >> time2.m;
    //for the classes you cant do it this way:
    //cin>>time1
    cout << "Number of minutes between "<< time1.h << ":"<<time1.m<<" and 00:00 is " << minutesSinceMidnight(time1)<<endl;
    cout << "Number of minutes between "<< time1.h << ":"<<time1.m<<" and "<< time2.h<<":"<<time2.m<<" is "<<  minutesUntil(time1. time2)<<endl;
}
/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 10B

Add a new function to time.cpp:
Time addMinutes(Time time0, int min);
The function should create and return a 
new moment of time that is min minutes after time0.
*/

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};
//goes from 12am to current time
int minutesSinceMidnight(Time time){
    int numMin = time.h * 60 + time.m; //converts the hr into minutes by mult. by 60
    return numMin;
}

int minutesUntil(Time earlier, Time later){
    int numMin = (later.h-earlier.h)* 60 + (later.m-earlier.m);
    return numMin;
}
//convert time to military and calculate
Time addMinutes(Time time0, int min){ //return a new moment of time that is min minutes after time0.
    Time newTime;
    newTime.h = time0.h + (time0.m + min)/60;
    newTime.m = (time0.m + min)%60;
    return newTime;
}

int main(){
    Time time1, time2;
    cout << "Enter the first time (hour then minute): " << endl;
    cin >> time1.h >> time1.m;
    cout << "Enter the second time (hour then minute): " << endl;
    cin >> time2.h >> time2.m;
    //for the classes you cant do it this way:
    //cin>>time1
    cout << "Number of minutes between "<< time1.h << ":"<<time1.m<<" and 00:00 is "<<minuteSinceMidnight(time1)<<endl;
    cout << "Number of minutes between "<< time1.h << ":"<<time1.m<<" and "<< time2.h<<":"<<time2.m<<" is "<<  minutesUntil(time1. time2)<<endl;
}
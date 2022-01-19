/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: Lab 10C

In the same program, time.cpp, implement
your own printing function, printTimeSlot(TimeSlot ts),
It should make output in the following format:
Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
The ending time is the starting time + movie duration.

Write main function that defines at least five time slots

morning, daytime, and evening defined previously,
plus add a couple of your own time slots with some
of your favorite movies (their duration time can be found in IMDB).
*/

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};

//Part C 
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
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

//part c : 
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}
//part c:
void printTimeSlot(TimeSlot ts){
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);//print out first output, movie title,movie genre and duration
    cout << "[ strats at "<<ts.startTime.h<<":"<<ts.startTime.m<<", ends by "<<endingTime.h<<":"<<endingTime.m<<"]"<<endl;
}

int main(){
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"movie x", DRAMA, 180;
    Movie movie4 = {"movie y", ROMANCE, 200};


    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie3, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    TimeSlot afternoon = {movie4, {14, 30}}; 
    TimeSlot late = {movie3, {23, 45}}; 
    
    printTimeSlot(morning);
    printTimeSlot(daytime);
    printTimeSlot(afternoon);
    printTimeSlot(evening);
    printTimeSlot(late);


    Time time1, time2;
    cout << "Enter the first time (hour then minute): " << endl;
    cin >> time1.h >> time1.m;
    //cout << "Enter the second time (hour then minute): " << endl;
    //cin >> time2.h >> time2.m;
    //for the classes you cant do it this way:
    //cin>>time1
    //Part B 
    time2 = addMinutes(time1, 150);
    cout << "Some text goes here..." <<time2.h << ":" <<time2.m<<endl;
    cout << "Number of minutes between "<< time1.h << ":"<<time1.m<<" and 00:00 is "<<minutesSinceMidnight(time1)<<endl;
    cout << "Number of minutes between "<< time1.h << ":"<<time1.m<<" and "<< time2.h<<":"<<time2.m<<" is "<<  minutesUntil(time1,time2)<<endl;
}
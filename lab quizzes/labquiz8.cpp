/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen
Assignment: Lab Quiz 8

Date Define class Date with public data members year, month,day as int 
and day_of_week as string.Define printDate(date *input) prints day_of_week,
month/day/year. Ex. : 12/6/2021, Monday is printed 
"Monday, 12/6/2021".
*/

#include <iostream>
#include <string>
using namespace std;

class Date {
    public:
        int year;
        int month;
        int day;
        string day_of_week;
};

void printDate(Date* input){ //receives pointer
    cout << input->day_of_week << ", " << input->month << "/" << input->day << "/" <<input->year << endl;
}
//use of -> to deference pointer and obtain value while accessing data members
// (*input).day_of_week same as input->day_of_week


int main()
{
    Date myDate; //new variable type Date called myDate 
    
    cout << "Enter year: ";
    cin >> myDate.year; //user input access year member
    cout << "Enter month: ";
    cin >> myDate.month; //user input access month member
    cout << "Enter day: ";
    cin >> myDate.day;  //user input access day member
    cout << "Enter day of week: ";
    cin >> myDate.day_of_week;  //user input access day_of_week member
    
    printDate(&myDate);  //prints uses funct. and uses address of myDate object 
    return 0;
}
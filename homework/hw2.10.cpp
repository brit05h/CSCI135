/*
Author: Britney Huiracocha
Course: CSCI135
Assignment:HW E2.10

Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank.

*/

#include <iostream>
using namespace std;
int main(){
    double gallon;
    cout<<"Enter the number of gallons of gas in the tank: ";
    cin>>gallon;
    
    double fuel;
    cout<<"Enter the fuel efficiency (m/g): ";
    cin>>fuel;
   
    double price;
    cout<<"Enter the price of gas per gallon: ";
    cin>>price;
    
    double cost = (100/fuel) * price;
    double mileage = gallon*fuel;
    
    cout<<"The cost per 100 miles is $"<<cost<<"."<<endl;
    cout<<"The car can go "<<mileage<<" miles."<<endl;
    return 0;
}
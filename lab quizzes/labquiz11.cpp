/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen
Assignment: Lab Quiz 11

Write a program that defines class Money, which contains public int 
members dollars and cents.A non-member function 'Money add_money(Money x,
Money y)' which returns a Money object that contains sum of x and y in dollars and cents. 
Value in cents is <100.
*/

#include <iostream>
using namespace std;

class Money{  //the class Money set up 
public: //accessible data members
	int dollars; //integer dollars
	int cents; //integer for cents
};

Money add_money(Money x, Money y){ //function receives two amounts consisting both data members
    Money total; //declare a total of type Money (consist of dollars & cents)
	total.dollars = x.dollars + y.dollars; //dot operator gets specfic member
	total.cents = x.cents + y.cents; //dollars & cents added separetly 
	if (total.cents >= 100){ //Cents can never be value of 100 since it'll increment the dollar amount
		total.dollars++; //dollar raises $1 = 100 cents
		total.cents = total.cents - 100;    //converts cents into dollars
	}
	return total; //total is summed up
}

int main(){
    int a, b, c, d = 0; //initalizes dollars and cents to 0
	cout << "Enter first amount: "; 
	cin >> a >> b; //receives first amount (a= dollars , b = cents)
	cout << "Enter second amount: ";
	cin >> c >> d; //receives second amount (a= dollars , b = cents)

	Money m1 = { a , b }; //orders the variables into members {dollars,cents}
	Money m2 = { c , d }; //of class type Money then new variable name
	Money m3 = add_money(m1, m2); //funct. used to find a new amount which is sum
	cout << "The total is: $" << m3.dollars << "." << m3.cents << endl;
	//access each member by dot operator and variable name
}
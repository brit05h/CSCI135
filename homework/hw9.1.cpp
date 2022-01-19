/*
Author: Britney Huiracocha
Course: CSCI-136
Instructor: Yasmeen Hassan
Assignment: HW E9.1

Write a program where we add a button to the tally
counter in Section 9.2 that allows an operator to undo
an accidental button click. Provide a member function
void undo()
that simulates such a button. As an added precaution, make sure
that the operator cannot click the undo button more often than the count button.
*/

#include <iostream>
using namespace std;

class Counter{      //the class declaration
public:
   void reset();
   void count();
   int get_value() const;
   void undo();   //new void function 
private:
   int value;
};

void Counter::count(){
   value = value + 1;
}

void Counter::reset(){
   value = 0;
}

int Counter::get_value() const{
   return value;
}

void Counter::undo(){
    if(value>0){
        value--;
    }
    else{
       cout << "cannot click the undo button more often than the count button"<<endl;
    }
}

int main(){     //main function 
   Counter tally;
   tally.reset();
   tally.count();
   tally.count();
   int result = tally.get_value();
   cout << "Value of tally: " << result << endl;
   tally.count();
   tally.count();
   tally.undo();
   result = tally.get_value();
   cout << "Value of tally: " << result << endl;

   Counter concert_counter;
   concert_counter.reset();
   concert_counter.count();
   concert_counter.count();
   concert_counter.count();
   concert_counter.undo();
   result = concert_counter.get_value();
   cout << "Value of concert_counter: " << result << endl;
   
   return 0;
}
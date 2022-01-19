/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen
Assignment: Lab Quiz 12

Define class class Customer, which as data member name and unique_id,
define default and non-default constructor,setter, and getter
*/

#include<iostream>
using namespace std;

class Customer{ //declared class Customer
private: //members cannot be accessed outside 
    string name; //will return a string name
    string unique_id; //returns a string unique id
public: //accessible members
    Customer(string name, string unique_id);
    Customer();
    string get_name();
    string get_unique_id();
    void set_name(string input_name);
    void set_unique_id(string input_unique_id);
};

Customer(string name,string unique_id){ //non-default constructor with parameters
    this -> name = name; //this pointer retrieves the objects name by local name
    this -> unique_id = unique_id; //same for unique_id
}
Customer(){ //default constructor
    name=("");
    unique_id=("");
}
string get_name(){ //getter for name
    return name; //gets the name
}
string get_unique_id(){ //getter for unique id
    return unique_id; //gets the unique id
}
void set_name(string input_name){ //no return type just sets variable name to paramter received
    name=input_name; //sets the variable 
}
void set_unique_id(string input_unique_id){ //sets the string to local variable
    unique_id=input_UniqueID;
}
int main(){
}
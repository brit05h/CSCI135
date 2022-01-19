/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen
Assignment: Lab Quiz 12

Write a program that defines class Customer. private string
members name,unique_id;public:Customer(),Customer(string name,
string unique_id), string get_name(),string get_unique_id(),void
set_name(string input_name),void set_unique_id(string input_unique_id)
*/

#include <iostream>
using namespace std;

class Customer{
    private:
        string name;
        string unique_id;

public:
    Customer(string name, string unique_id) {
        this -> name = name;
        this -> unique_id = unique_id;
    }
    Customer()
        :name(""), unique_id("") {}

    string get_name(){
        return name;
    }
    string get_unique_id(){
        return unique_id;
    }

    void set_name(string input_name){
        name = input_name;
    }

    void set_unique_id(string input_unique_id){
        unique_id = input_unique_id;
    }
};

int main()
{
    return 0;
}

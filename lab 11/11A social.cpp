/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 11A

Create a a program social.cpp, in which you have to implement
the class Profile that can store the info about a user of the network.
It has two private properties of type string: displayname and username.
The public interface consists of two constructors initializing the private
 variables and three functions:
getUsername returns the username.
getFullName returns the string in the format “displayname (@username)”.
setDisplayname allows to change the displayname property.
*/

#include <iostream>
#include <string>
using namespace std;

//Part A:
class Profile { //the class declaration provided
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

//Part A: 
int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}

//Part A: Here we code a constructor for a user
Profile::Profile(string usrn, string dspn){ 
    username=usrn;  //private variables
    displayname=dspn;   //private variables
}

//Part A: Profile constructor (username="",displayname="")
Profile::Profile(){
    username="";
    displayname="";
}

//Part A: Return the username
string Profile::getUsername(){
    return username;
}

// Part A:Return name in the format: "displayname (@username)"
string Profile::getFullName(){
    return displayname + "(@" + username +")";
}

//Part A:Change display name
void Profile ::setDisplayName(string dspn){
    displayname=dspn;
}
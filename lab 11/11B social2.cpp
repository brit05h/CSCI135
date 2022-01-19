/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 11B

Write a program social2.cpp, implementing the first 
version of the class Network (feel free to copy your class
Profile and anything else from the previous program).
This first version of the class should be able to add new users and
store their profiles, for that, the class has the following private variables:
an array of registered user profiles,
an integer numUsers, which stores the number of registered users.
the size of the profiles array is defined as MAX_USERS=20, we cannot sign up more
than this number of users.
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

//Part B:
class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
};

/*//Part A: 
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
*/

//Part B:
int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}

//Part B:
// Returns user ID (index in the 'profiles' array) by their username
// (or -1 if username is not found)
int Network::findID(string usrn){
    for(int i=0;i<numUsers;i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}


Network::Network(){
    numUsers = 0;
}
//attempts to sign up a new user
bool Network::addUser(string usrn,string dspn){
    //check if network is already full
    if(numUsers==MAX_USERS){
        return false;
    }
    //Check if username is already full
    for(int i=0;i<numUsers;i++){
        if(profiles[i].getUsername() == usrn){
            return false;
        }
    }
    //check if username is alphanumeric
    for ( int i=0;i<usrn.length();i++){
        if(!isalpha(usrn[i]) && !isdigit(usrn[i])){
            return false;
        }
    }
    //if username is valid then add user to network
    //add username to end of "profiles" array
    profiles[numUsers]=Profile(usrn,dspn);
    //increase users by one
    numUsers++;
    return true;
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
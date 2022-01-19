/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: Lab 11C

Write a program social3.cpp, which is an improved
version of the previous program.
The class Network should be changed to keep the
friendship (following) relation between the users.
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
  //Part C:
  bool following[MAX_USERS][MAX_USERS];  // friendship matrix:

public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
//Part C:
    // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
    // return true if success (if both usernames exist), otherwise return false
    bool follow(string usrn1, string usrn2);

    // Print Dot file (graphical representation of the network)
    void printDot();
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
/*int main() {
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
*/
//Part C: Main function 
int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}

//Part C: setting elements to fail 
Network::Network(){
    //part B:
    numUsers = 0;
    //part c:
    for(int i=0;i<MAX_USERS;i++){
        for (int j=0;j<MAX_USERS;j++){
            following[i][j]=false;
        }
    }
}

bool Network::follow(string usrn1,string usrn2){
    //check if 1st username usrn exist or not
    int i=findID(usrn1);
    if(i==-1){  //if it doesnt exist
        return false;
    }
    else{   //if it exist
        for(int j=0;j<numUsers;j++){
            if(profiles[j].getUsername()==usrn2){
                following[i][j]=true;
                return true;
            }
        }
    }
    return false;
}
//Part C:
void Network::printDot(){
    cout<<"digraph {\n";

    for(int i=0;i<numUsers;i++){
        cout<<"\t\"@"<<profiles[i].getUsername()<<"\"\n";
    }
    for(int i=0;i<numUsers;i++){
        for(int j=0;j<numUsers;j++){
            if(following[i][j]){
                cout<<"\t\"@"<<profiles[i].getUsername()<<"\"->\"@"<<profiles[j].getUsername()<<"\"\n";
            }
        }
    }
    cout<<"}\n";
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
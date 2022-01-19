/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab 3A

Write a program that asks the user to input a string representing
the date.Print out the East basin storage on that day.
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;
int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }//skip the first line of the file//
    
    string junk;        
    getline(fin, junk);  
    
    string date;
    double eastSt, eastEl, westSt, westEl;
    
    string userdate;
    cout << "Please enter a date: "; //display for output
    
    cin>>userdate;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:

        if (userdate == date){
                cout << "East basin storage: "<<eastSt<<" billion gallons."<<endl;
                break;
        }
    }
    fin.close();
    return 0;
}
/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab 3C

Write a program that asks the user to input two dates.
It should print East or West or Equal.
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;

int main(){
    //read the datafile//
    
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    //skip the first line of the file//
    
    string apple;        
    getline(fin, apple);  
    
    string date, earlier, later;
    double eastSt, eastEl, westSt, westEl;
    cout << "Pleas enter a starting date: ";
    cin >> earlier;

    cout << "Please enter an ending date: ";
    cin >> later;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:

        if (date >= earlier and date <= later){
            if (westEl > eastEl){
                cout << date << " West" << endl;
            }
            else if (westEl < eastEl) {
                cout << date << " East" << endl;

            }
            else{
                cout << date << " Equal" << endl;
            }
        }

        
    }
    fin.close();
    return 0;
    
}
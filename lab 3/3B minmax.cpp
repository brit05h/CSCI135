/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen 
Assignment: Lab 3B

Write a program that finds the minimum and
maximum storage in East basin in 2018.
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
    }
    //skip the first line of the file//
    
    string junk;        
    getline(fin, junk);  
    
    string date;
    double eastSt, eastEl, westSt, westEl;
    
    double max=INT_MIN;
    double min=INT_MAX;
    
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:

        if (eastSt<min){
            min=eastSt;
        }
        if (eastSt>max){
            max=eastSt;
        }
    }
    fin.close();
    
    cout<<"Minimum storage in East Basin: "<<min<< " billion gallons"<<endl;
    cout<<"Maximum storage in East Basin: "<<max<< " billion gallons"<<endl;
    return 0;
}
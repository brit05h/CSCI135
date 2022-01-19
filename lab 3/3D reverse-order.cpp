/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nyugen
Assignment: Lab 3D

Write a program that asks for two input dates.The program should
report the West basin elevation for all days in the interval.
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
    
    string date,earlier,later,dates[400];
    double eastSt, eastEl, westSt, westEl,elevations[400];
    int index=0;
    cout<<"Please enter a starting date: ";
    cin>>earlier;
    
    cout<<"Please enter an ending date: ";
    cin>>later;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
        //ignorring the remaining columns 
        // for example, to print the date and East basin storage:

        if (date>=earlier && date<=later){
            dates[index]=date;
            elevations[index]=westEl;
            index++;
        }
    }
    for(int i=index-1;i>=0;i--){
        cout<<dates[i] << " " << elevations[i]<<endl;
    }
    fin.close();
    return 0;
}
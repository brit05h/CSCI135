
#include "Board.hpp"
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;
/*
Board::Board() {
    max = 0;
    target = 32;
    numCols = 3;
    numRows = 3;
    allocateMemory();
}

Board::Board(int m) {
    max = 0;
    target = 32;
    numRows = m >= 1 ? m : 3;
    numCols = m >= 1 ? m : 3;
    allocateMemory();
}

Board::Board(int m, int n) {
    max = 0;
    target = 32;
    numRows = m >= 1 and n >= 1 ? m : 3;
    numCols = m >= 1 and n >= 1 ? n : 3;
    allocateMemory();
}

void Board::allocateMemory() {
    panel = new int* [numRows];
    for (int i = 0; i < numRows; ++i)
        panel[i] = new int[numCols];

    for (int i = 0; i < numRows; ++i)
        for (int j = 0; j < numCols; ++j)
            panel[i][j] = 0;
}
*/

Board::~Board() {
    for(int i = 0; i < numRows; i++){
        delete[] panel[i];
        panel[i]=nullptr;
    }
    delete[] panel;
    panel = nullptr;
}

void Board::print() const{
    for(int i = 0; i <= 2*numRows; i++){
        for(int j = 0;j<=numCols;j++){
            if(j == numCols && i%2==0){
                cout<<"+";
            }
        else if(i%2==0){
            cout<<"+----";
        }
        else{
            cout<<"|";
            if(panel[i/2][j]!=0){
                cout<<setw(4)<<panel[i/2][j];
            }
            else{
                cout<<setw(5);
            }
        }
        }
        cout<<setw(0);
        cout<<endl;
    }
}

bool Board::noAdjacentSameValue() const{
    for(int i=0; i<numRows-1;i++){
        for(int j=0;j<numCols-1;j++){
            if(panel[i][j]==panel[i][j+1])
                    return false;

    for(int j=0; j<numCols-1;j++){
        for(int i=0;i<numRows-1;i++){
            if(panel[i][j]==panel[i+1][j])
                    return false;
    
    return true;
}

void Board::selectRandomCell(int&row, int&col){
    //srand(time(NULL));
    int countZero=0;
    //int *emptyLocations[countZero];
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols;j++){
            if(panel[i][j]==0){
                countZero++;
            }
        }
    }


    if(countZero==0){
    if(noAdjcaentSameValue()==true && max<target){
        cout<<"Game over.Try again."<<endl;
        exit(0);
    }
    else return;
    }
    else{
        int *emptyLocations=new int[countZero];
        int index=0;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<numCols;j++){
                if(pane;[i][j]==0){
                    emptyLocations[index]=numCols*i+j;
                    index++
                }
            }
        }
    int random=rand()%countZero;
    int element = emptyLocations[random];
    int tempRow=element/numCols;
    int tempCol=element%numCols;
    panel[tempRow][tempCol]=1;

    delete[] emptyLocations;
    emptyLocations=nullptr;

    print();
    /*countZero=0;
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numRows;j++){
            if(panel[i][j]==0){
                countZero++;
            }
        }
    }*/

    if(countZero==1 && noAdjacentSameValue()==true&&max<target){
        cout<<"Game over.Try again."<<endl;
        exit;

    }
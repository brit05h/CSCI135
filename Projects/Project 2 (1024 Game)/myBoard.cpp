#include "Board.hpp"
#include <iostream>
using namespace std;


//Board(); //construct a 3 x 3 panel
Board::Board(){
   max = 0;      //set max to 0
   target = 32;  //set target to 32
   numCols = 3;  //numCols = 3
   numRows = 3;  //numRows = 3
   allocateMemory();   //uses the function defined below

}

//Board(int m); //construct a m x m panel
Board::Board(int m){
   max = 0;
   target = 32;
   if (m >= 1){
       numRows = m;
       numCols = m;
   }
   else {
       numRows = 3;
       numCols = 3;
   }
   allocateMemory();
}

//Board(int m, int n); //construct a m x n panel
Board::Board(int m, int n){
   max = 0;
   target = 32;
   if (m >= 1 && n >= 1){
       numRows = m;
       numCols = n;
   }
   else {
       numRows = 3;
       numCols = 3;
   }
   allocateMemory();
}

void Board::allocateMemory(){
    panel = new int* [numRows]; //int **panel;
    for (int i = 0; i < numRows; i++)
        panel[i] = new int[numCols];

    for (int i = 0; i < numRows; i++)
        for (int j = 0; j < numCols; j++)
            panel[i][j] = 0;
}

//~Board(); //destructor,
Board::~Board(){
    for(int i = 0; i < numRows; i++){
        delete[] panel[i];
    }
    delete[] panel; //the array itself
    panel = nullptr;
}

//void print() const;
void Board::print() const {
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
        cout << "+----";
    }
    cout << "+" << '\n';

    for (int j = 0; j < numCols; j++){
      if (panel[i][j] > 0 && panel[i][j] < 1024)
        cout << "|" << setw(4) << panel[i][j];
      else cout << "|    ";
    }
    cout << "|" << '\n';
  }
  for (int j = 0; j < numCols; j++){
    cout << "+----";
  }
    cout << "+" << '\n';
}

bool Board::noAdjacentSameValue() const {
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0) return false;

      //Check if the cells above and below are equal
      if (i > 0 && i < numRows-1){
        if (panel[i-1][j] == panel[i][j] || panel[i+1][j] == panel[i][j]){
          return false;
        }
      }

      //Check if the cells to the left and right are equal
      if (j > 0 && j < numCols -1){
        if (panel[i][j-1] == panel[i][j] || panel[i][j+1] == panel[i][j]){
          return false;
        }
      }
    }
  }
  return true;
}

void Board::selectRandomCell(int& row, int& col){
  srand(time(NULL));
  int zeros = 0;

  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0) zeros++;
    }
  }

  //If there are no more empty cells and no adjacent cells have the same value, end the game
  if (zeros == 0 && noAdjacentSameValue()){
    cout << "Game over. Try again." << '\n';
    exit(0);
  }

  //Creates a vector storing all the empty empty cells
  vector <int> empty_cells;
  for (int i = 0; i < numRows; i++){
    for (int j = 0; j < numCols; j++){
      if (panel[i][j] == 0){
        empty_cells.push_back(numCols * i + j);
      }
    }
  }

  //Randomly pick an empty cell and sets its value to 1
  int random = rand() % empty_cells.size();
  row = empty_cells[random] / numCols;
  col = empty_cells[random] % numCols;

  panel[row][col] = 1;
  print();

  //Checks if the game is over after setting an empty cell to 1
  if (noAdjacentSameValue()){
    cout << "Game over. Try again." << '\n';
    exit(0);
  }
}
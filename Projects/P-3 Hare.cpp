#include "Hare.h"
#include <cstdlib>

Hare::Hare() {
  patternLength = 10;
  pattern = new int [patternLength];
  int defaultPattern[]={0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
  for (int i = 0; i < patternLength; i++){
    pattern[i] = defaultPattern[i];
  }
position = 0;

}

Hare::Hare(int *pattern, int patternLength, int position)
{
  if (patternLength > 0){
    this->patternLength = patternLength;
    this->pattern = new int[this->patternLength];
    for (int i = 0; i < this->patternLength; i++){
      this-> pattern[i] = pattern[i];
    }


  }else{
    this->patternLength = 10;
    this->pattern = new int[this->patternLength];
    int defaultPattern [] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    for (int i = 0; i < this->patternLength; i++){
      this->pattern[i] = defaultPattern[i];
    }


  }

this->position = position;

}

Hare::~Hare(){
  delete[] pattern;
  pattern = 0;
}

void Hare::move(){
 int index = rand() % patternLength;
 int stepsToMove = pattern[index];
 position += stepsToMove;
}

void Hare::setPosition(int newPosition)
{
  position = newPosition;
}

int Hare::getPosition() const{
  return position;
}
 
int Hare::getPatternLength() const{
  return patternLength; 
}

int* Hare::getPattern() const{
  return pattern; 
}

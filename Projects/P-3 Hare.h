//google "pragma once" to see what directive means.
#pragma once

//google "include guard" or "header guard" to see
//what the following ifndef/define/endif means.
//motivation: avoid to include a header file more than once
//in a project.
#ifndef HARE_H_ 
#define HARE_H_
class Hare {
    public: 
        Hare(); 
        ~Hare();
        Hare(int* Pattern, int PatternLength, int position);

        int getPosition() const;
        int* getPattern() const;
        int getPatternLength() const;
        void move();

        void setPosition(int newPosition);
        
    private:
        int *pattern;
        int patternLength;
        int position;
};
#endif
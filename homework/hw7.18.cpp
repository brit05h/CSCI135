/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: HW E7.18

Define a structure Triangle that contains three
Point members. Write a function that computes the
perimeter of a Triangle. Write a program that reads
the coordinates of the points, calls your function, and
displays the result.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Triangle
{
    Point first;
    Point second;
    Point third;
};

double perimeter(Triangle a)
{
    double ab= distance(a.first,a.second);
    double bc= distance(a.second,a.third);
    double ca= distance(a.third,a.first);
    return ab+bc+ca;
}

int main()
{
    int first;
    int second;
    int third;
    Triangle triangle;
    cout << "Coordinate one: ";
    cin >> triangle.first.x >> triangle.first.y;
    cout << "Coordinate two: ";
    cin >> triangle.second.x >> triangle.second.y;
    cout << "Coordinate three: ";
    cin >> triangle.third.x >> triangle.third.y;
    double result = perimeter(triangle.first, triangle.second, triangle.third);
    cout << "The perimeter of the triangle is: " << result << endl;
    return 0;
}
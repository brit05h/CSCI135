/*
Author: Britney Huiracocha
Course: CSCI-135
Instructor: Minh Nguyen 
Assignment: HW E9.5

Implement a class Rectangle. Provide a constructor
to construct a rectangle with a given width and height, 
member functions get_perimeter and get_area that compute the 
perimeter and area, and a member function void resize(double factor) 
that resizes the rectangle by multiplying the width and height by the given factor.
*/

#include <iostream>
using namespace std;

class Rectangle {       
  public:           
	Rectangle(double width, double height);
	double get_perimeter();
	double get_area();
	void resize(double factor);
	
	private:
		double width;
		double height;
		double perimeter;
		double area;
};

Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
}	

double Rectangle::get_perimeter()
{
	perimeter = (2 * width) + (2 * height);
	return perimeter;
}

double Rectangle::get_area()
{
	area = height * width;
	return area;
}

void Rectangle::resize(double factor)
{
	height = height * factor;
	width = width * factor;
}

int main(){
    return 0;
}


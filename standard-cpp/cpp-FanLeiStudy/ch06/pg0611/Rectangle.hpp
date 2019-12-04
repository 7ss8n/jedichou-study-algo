// File: Rectangle.hpp
// Description: Use default constructor.

#include <iostream>

using std::cout;
using std::endl;

//////////////////////////////////////
// Rectangle class define
class Rectangle {
public:
	Rectangle();			// default constructor
	Rectangle(int, int);	// constructor with two parameters
	int area();				// get rectangle area
private:
	int length;				// rectangle's length
	int width;				// rectangle's width
};

//////////////////////////////////////
// Default constructor
Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

//////////////////////////////////////
// constructor with two parameters
Rectangle::Rectangle(int l , int w) {
	length = l;
	width = w;
}

//////////////////////////////////////
// get rectangle area
int Rectangle::area() {
	return length * width;
}

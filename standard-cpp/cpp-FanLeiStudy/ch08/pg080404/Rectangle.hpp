// File: Rectangle.hpp
// Description: a rectangle class

#include <iostream>

using namespace std;

////////////////////////////////////
// Rectangle Class
class Rectangle {
public:
	Rectangle();
	Rectangle(int, int);
	void setLength(int);
	void setWidth(int);
	int Area();
private:
	int length;
	int width;
};

////////////////////////////////////
// default constructor
Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

////////////////////////////////////
// constructor with two parameters
Rectangle::Rectangle(int l, int w) {
	length = l;
	width = w;
}

////////////////////////////////////
// setLength
void Rectangle::setLength(int l) {
	length = l;
}

////////////////////////////////////
// setWidth
void Rectangle::setWidth(int w) {
	width = w;
}

////////////////////////////////////
// Area
int Rectangle::Area() {
	return length * width;
}

// File: RectApp.cpp
// Description: How to use default constructor

#include <iostream>
#include "Rectangle.hpp"

int main() {
	// Define two rect instances.
	Rectangle rect_a = Rectangle();
	Rectangle rect_b = Rectangle(20, 30);

	// Output
	cout << "rect_a area: " << rect_a.area() << endl;
	cout << "rect_b area: " << rect_b.area() << endl;

	// Quit
	return 0;
}

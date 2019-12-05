#include <iostream>
#include "rectangle.hpp"

int main() {
	Rectangle rect1 = Rectangle(3, 4);
	cout << "rect1's area is: " << rect1.area() << endl;
	return (0);
}

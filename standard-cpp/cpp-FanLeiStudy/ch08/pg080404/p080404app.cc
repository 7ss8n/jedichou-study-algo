#include <iostream>
#include "Rectangle.hpp"

using namespace std;

////////////////////////////////////
// prototype
void NormalUseRectangle1();
void NormalUseRectangle2();
void PointerUseRectangle1();
void PointerUseRectangle2();

////////////////////////////////////
// program start here
int main() {
	NormalUseRectangle1();
	NormalUseRectangle2();
	PointerUseRectangle1();
	PointerUseRectangle2();
	return 0;
}

////////////////////////////////////
// normal use - first
void NormalUseRectangle1() {
	Rectangle instance = Rectangle();
	cout << "Normal use 1 - "
		 << "Rectangle's area: "
		 << instance.Area()
		 << endl;
}

////////////////////////////////////
// normal use - second
void NormalUseRectangle2() {
	Rectangle instance = Rectangle(20, 30);
	cout << "Normal use 2 - "
		 << "Rectangle's area: "
		 << instance.Area()
		 << endl;
}

////////////////////////////////////
// use pointer to generate - first
void PointerUseRectangle1() {
	Rectangle *rect = new Rectangle;
	cout << "Pointer use 1 - "
		 << "Rectangle's area: "
		 << rect->Area()
		 << endl;
	rect = 0;		// release memory
	delete rect;	// delete pointer
}

////////////////////////////////////
// use pointer to generate - second
void PointerUseRectangle2() {
	Rectangle *rect = new Rectangle(20, 30);

	// reset length and width
	rect->setLength(15);
	rect->setWidth(20);

	cout << "Pointer use 2 - "
		 << "Rectangle's area: "
		 << rect->Area()
		 << endl;
	rect = 0;
	delete rect;
}


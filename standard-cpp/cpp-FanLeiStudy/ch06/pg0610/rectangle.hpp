#include <iostream>
using namespace std;

/////////////////////////////////////
// Rectangle define
class Rectangle {
public:
	Rectangle(int, int);
	int area();
private:
	int length;
	int width;
};

/////////////////////////////////////
// Constructor
Rectangle::Rectangle(int l, int w) {
	length = l;
	width = w;
}

/////////////////////////////////////
// Get area
int Rectangle::area() {
	return length * width;
}

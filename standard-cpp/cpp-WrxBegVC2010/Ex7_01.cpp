// Ex7_01.cpp
// Exercising structures in the yard

#include <iostream>

using std::cout;
using std::endl;

// Definition of a struct to represent rectangles
struct RECTANGLE
{
	int Left;		// Top-left point
	int Top;		// coordinate pair

	int Right;		// Bottom-right point
	int Bottom;		// coordinate pair
};

// Prototype of function to calcuate the area of a rectangle
long Area(const RECTANGLE& aRect);

// Prototype of a function to move a rectangle
void MoveRect(RECTANGLE& aRect, int x, int y);

int main(void)
{
	RECTANGLE yard = {0, 0, 100, 120};
	RECTANGLE pool = {30,40,70,80};
	RECTANGLE hut1, hut2;

	hut1.Left = 70;
	hut1.Top = 10;
	hut1.Right = hut1.Left + 25;
	hut1.Bottom = 30;

	hut2 = hut1;
	MoveRect(hut2, 10, 90);

	cout << endl
		 << "Coodinates of hut2 are"
		 << hut2.Left  << "," << hut2.Top << " and "
		 << hut2.Right << "," << hut2.Bottom;

	cout << endl
		 << "The area of the yard is "
		 << Area(yard);

	cout << endl
		 << "The area of the pool is "
		 << Area(pool);

	return 0;
}

// Function to calculate the area of a rectangle
long Area(const RECTANGLE& aRect)
{
	return (aRect.Right - aRect.Left)*(aRect.Bottom - aRect.Top);
}

// Function to Move a Rectangle
void MoveRect(RECTANGLE& aRect, int x, int y)
{
	int length(aRect.Right-aRect.Left);
	int width(aRect.Bottom-aRect.Top);

	aRect.Left = x;
	aRect.Top = y;
	aRect.Right = x + length;
	aRect.Bottom = y + length;
	return;
}

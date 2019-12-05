// program0613.cpp
// This program demostrates two value-returning functions.
// The square function is called in a mathematical statement.

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;
double getRadius();
double getSquare(double);

int main()
{
	double radius;
	double area;

	// set the numeric output formatting.
	// cout << setprecision(2);

	// get the radius of the circle
	cout << "This program calculates the area of ";
	cout << "a circle.\n";
	radius = getRadius();

	// calculate the area of the circle
	area = PI * getSquare(radius);

	// display the area.
	cout << "The area is " << area << endl;

	return 0;
}

double getRadius()
{
	double rad;
	cout << "Enter the radius of the circle: ";
	cin >> rad;
	return rad;
}

double getSquare(double radius)
{
	return radius * radius;
}

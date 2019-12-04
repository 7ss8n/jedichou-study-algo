// Ex2_05.cpp
// Calculating how many rolls of wallpaper are required for a room

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int ex0205()
{
	// Variable define
	double height = 0.0, width = 0.0, length = 0.0;
	double perimeter = 0.0;

	// Define const 
	const double rollwidth  = 21.0;
	const double roollength = 12.0 * 33.0;

	int strips_per_rool = 0;
	int strips_reqd = 0;
	int nrools = 0;

	// Process input
	cout << endl
		 << "Enter the height of the room in inches: ";
	cin >> height;

	cout << endl
	     << "Now enter the length and width in inches: ";
	cin >> length >> width;

	// Calculate
	strips_per_rool = roollength / height;
	perimeter = 2.0 * (length + width);
	strips_reqd = perimeter / rollwidth;
	nrools = strips_reqd / strips_per_rool;

	// Output result
	cout << endl
		 << "For your room you need " << nrools << " rolls of wallpaper."
		 << endl;

	return 0;
}

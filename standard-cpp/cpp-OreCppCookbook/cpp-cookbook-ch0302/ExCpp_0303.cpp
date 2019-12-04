// Convert a number to string
// Student: Jedi Chou
// Date : 2014-8-29 13:48
// Complie command line:
//   1. CL ExCpp_0303.cpp /EHsc
//   2. g++ ExCpp_0303.cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	// Define. And stringstream::str() returns a string with the
	// contents.
	stringstream ss;	
	ss << "There are " << 9 << " apples in my cart.";

	// Assign a new value and output it.	
	cout << ss.str() << endl;
	ss.str("");
	ss << showbase << hex << 16;  // Show the base in hexadecimal
	cout << "ss = " << ss.str() << endl;

	// Assign a new value and output it.
	ss.str("");
	ss << 3.14;
	cout << "ss = " << ss.str() << endl;	

	return 0;
}

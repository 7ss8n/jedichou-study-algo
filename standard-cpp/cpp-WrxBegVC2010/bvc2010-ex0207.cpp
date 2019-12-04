// Begin Visual C++ 2010.pdf, page 75
// File: bvc2010-ex0207.cpp -> Ex2_07.cpp

#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	// Function scope starts here
	int count1 = 10;
	int count3 = 50;

	cout << "Value of outer count1 = " << count1 << endl;

	{
		// New scope starts here ...
		int count1 = 20;
		int count2 = 30;
		cout << "Value of inner count1 = " << count1 << endl;
		count1 += 3;
		count3 += count2;
	}
	
	cout << "Value of outer count1 = " << count1 << endl;
	cout << "Value of outer count3 = " << count3 << endl;

	// cout << count2 << endl;

	return 0;
}

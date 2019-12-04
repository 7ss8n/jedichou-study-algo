// File: bvc2010-ex0208.cpp
// Description: Demostrating variabl scope
// Begin Visual C++ 2010.pdf, page 78

#include <iostream>
using std::cout; using std::endl;

int count1 = 100;  // Global version of count1

int main(void) {
	// define variables
	int count1 = 10;
	int count3 = 50;

	cout << "Value of outer count1 = " << count1 << endl;
	cout << "Value of global count1 = " << ::count1 << endl;

	{
		// Inside scope
		int count1 = 20;
		int count2 = 30;
		cout << "Value of inner count1 = " << count1 << endl;
		cout << "Value of global count1 = " << ::count1 << endl;
		count1 += 3;  // This affects the inner count1
		count3 += count2;
	}

	cout << "Value of outer count1 = " << count1 << endl;
	cout << "Value of outer count3 = " << count3 << endl;

	return 0;
}

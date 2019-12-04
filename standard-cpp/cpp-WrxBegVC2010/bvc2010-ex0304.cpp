// File: bvc2010-ex0304.cpp
// Description:The conditional operator selecting output

#include <iostream>
using namespace std; 

int main(void) {
	// Define a variable
	int nCakes(1);

	cout << "We have " << nCakes << " cake" << ((nCakes>1) ? "s.":".");
	cout << endl;
	++nCakes;

	cout << "We have " << nCakes << " cake" << ((nCakes>1) ? "s.":".");
	cout << endl;
	return 0;
}

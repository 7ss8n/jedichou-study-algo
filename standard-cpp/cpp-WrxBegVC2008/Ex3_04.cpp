// From Wrox Begining Visual C++ 2008
// Ex3_04.cpp
// The conditional operator selecting output

#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	int nCakes = 1;
	cout << endl
		 << "We have " << nCakes << " cake" << ((nCakes > 1) ? "s." : ".")
		 << endl;

	++nCakes;
	cout << endl
		 << "We have " << nCakes << " cake" << ((nCakes > 1) ? "s." : ".")
		 << endl;

	return 0;
}
// File: bvc2010-ex0210.cpp
// Description: Using a using directive
#include <iostream>

namespace myStuff {
	int value = 0;
}

using std::cout; using std::endl; using std::cin;
using namespace myStuff;

int main(void) {
	cout << "Enter an integer: ";
	cin >> value;
	cout << "You enter : " << value << endl;
	return 0;
}

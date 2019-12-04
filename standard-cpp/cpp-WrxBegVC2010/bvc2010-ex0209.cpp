// File: bvc2010-ex0209.cpp
// Description: Declaring a namspace
// Begin Visual C++ 2010.pdf, page 81

#include <iostream>

namespace myStuff {
	int value = 0;
}

int main(void) {
	using std::cout; using std::endl; using std::cin;
	cout << "enter an integer: ";
	cin >> myStuff::value;
	cout << "You entered: " << myStuff::value << endl;

	return 0;
}

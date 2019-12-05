// Ex2_11.cpp
// Using a using directive
#include <iostream>

namespace myStuff {
	int value = 0;
}

using namespace myStuff; // Make all the names in myStuff available
using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "Enter an integer: ";
	cin >> value;
	cout << "You entered " << value << endl;
	return 0;
}

// Ex2_10.cpp
// Declaring a namespace
#include <iostream>

namespace myStuff {
	int value = 0;
}

int main() {
	std::cout << "enter an integer: ";
	std::cin >> myStuff::value;
	std::cout << "You entered " << myStuff::value
			  << std::endl;
	return 0;
}

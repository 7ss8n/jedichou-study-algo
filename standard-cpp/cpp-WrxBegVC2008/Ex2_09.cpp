// Ex2_09.cpp
// Demonstrating namespace names
#include <iostream>

int value = 0;
int ex0209()
{
	std::cout << "Enter an integer: ";
	std::cin >> value;
	std::cout << "You entered " << value
			  << std::endl;

	return 0;
}

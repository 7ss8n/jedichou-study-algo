// Listing 1-7. using boost::format

#include <iostream>
#include "boost/format.hpp"

using namespace std;

int main()
{
	std::cout << "Enter your fist name: " << std::endl;
	std::string firstName;
	std::cin >> firstName;

	std::cout << "Entern your surname: " << std::endl;
	std::string surname;
	std::cin >> surname;

	auto formattedName = str( boost::format("%1% %2%"s) % firstName % surname);
	std::cout << "You said your name is: " << formattedName << std::endl;

	return 0;
}

// File: fanlei-cpp0701.cc
// Description: A goto demonstrate.

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 1;
number: 
	i++;
	std::cout << "*";
	if (i < 28)
		goto number;
	
	cout << "\nProgram execute finished.\n";
	cout << "***************************\n";
	
	return 0;
}

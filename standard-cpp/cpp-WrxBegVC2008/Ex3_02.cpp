// Ex3_02.cpp
// Using the extended if

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	long number = 0;		// Store input here
	cout << endl
		 << "Enter an integer number less than 2 billion: ";
	cin >> number;

	if( number % 2L )
		cout << endl
			 << "Your number is odd." << endl;
	else
		cout << endl
			 << "You numer is even." << endl;

	return 0;
}

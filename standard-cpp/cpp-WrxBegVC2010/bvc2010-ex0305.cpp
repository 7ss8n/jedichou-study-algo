// File: bvc2010-ex0305.cpp
// Description: Using the switch statement

#include <iostream>
using namespace std;

int main(void) {

	// Define and accept user input
	int choice(0);
	cout << "You electronic recipe book is at your service." << endl
		 << "You can choose from the following delicious dishes: "
		 << endl
		 << endl << "1 Bioled eggs"
		 << endl << "2 Fried eggs"
		 << endl << "3 Scrambled eggs"
		 << endl << "4 Coddled eggs"
		 << endl << endl << "Enter your selection number: ";
	cin >> choice;

	// Process data
	switch( choice ) {
		case 1: cout << endl << "Boil some eggs." << endl;
				break;
		case 2: cout << endl << "Fry some eggs." << endl;
				break;
		case 3: cout << endl << "Scramble some eggs." << endl;
				break;
		case 4: cout << endl << "Coddle some eggs." << endl;
				break;
		default:
				cout << endl << "You enter a wrong number." <<endl;
	}

	// exit program
	return 0;
}

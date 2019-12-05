// From Wrox Begining Visual C++ 2008, Page 127
// Ex3_05.cpp
// Using the switch statement

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int choice = 0;

	cout << endl
		 << "You electronic recipe book is at your service." << endl
		 << "You can choose from the following delicious dishes: "
		 << endl
		 << endl << "1 Boiled eggs"
		 << endl << "2 Fried eggs"
		 << endl << "3 Scrambled eggs"
		 << endl << "4 Coddled eggs"
		 << endl << endl << "Enter your selection number: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cout << endl << "Boil some eggs." << endl;
			break;
		case 2:
			cout << endl << "Fry some eggs." << endl;
			break;
		case 3:
			cout << endl << "Scramble some eggs." << endl;
			break;
		case 4:
			cout << endl << "Boil some eggs." << endl;
			break;
		default:
			cout << endl << "You entered a wrong number, try raw eggs."
				 << endl;
	}

	return 0;
}

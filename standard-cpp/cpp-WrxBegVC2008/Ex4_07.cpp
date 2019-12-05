// From Wrox Begining Visual C++ 2008, Page 170
// Ex4_07.cpp
// Initializing pointers with strings
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	// Define variables
	char* pstr[] = {
		"Robert Redford",
		"Hopalong Cassidy",
		"Lassie",
		"Slim Karloff",
		"Oliver Hardy"
	};
	char* pstar = "You luck star is ";
	int dice = 0;
	
	// Process input
	cout << endl
		 << " Pick a lucky star!"
		 << " Enter a number between 1 and 6: ";
	cin >> dice;

	cout << endl;
	if ( dice >= 1 && dice <= 6)
		cout << pstar << pstr[dice-1];
	else
		cout << "Sorry, you haven't got a lucky star.";
	
	return 0;
}

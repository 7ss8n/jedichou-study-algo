// From Wrox Begining Visual C++ 2008, Page 162
// Ex4_04.cpp
// Storing strings in an array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	char stars[6][80] = 
	{
		"Robert Redford",
		"Hopalong Cassidy",
		"Lassie",
		"Slim Pickens",
		"Boris Karloff",
		"Oliver Hardy"
	};
	int dice = 0;

	cout << endl
		 << " Pick a lucky star!"
		 << " Enter a number between 1 and 6: ";
	cin >> dice;

	if ( dice >=1 && dice <=6)
		cout << endl
			 << "You lucky star is " << stars[dice-1];
	else
		cout << endl
			 << "Sorry, you haven't got a lucky star.";
	return 0;
}

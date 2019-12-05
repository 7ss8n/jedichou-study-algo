// C++ Recipes A Problem Solution Approach
// Author: Bruce Sutherland, Jedi Study
// Page 62
// Listing 3-2. Editing a string literal

#include <iostream>

using namespace std;

namespace
{
	const char* const STRING{ "This is a string" };
	char* EDIT_STRING{ "Attempt to Edit" };
}

int main()
{
	cout << STRING << endl;

	cout << EDIT_STRING << endl;
	EDIT_STRING[0] = 'a';
	cout << EDIT_STRING << endl;

	return 0;
}

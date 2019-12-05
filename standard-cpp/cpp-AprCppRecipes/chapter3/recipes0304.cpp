// C++ Recipes A Problem Solution Approach
// Author: Bruce Sutherland, Jedi Study
// Page 63
// Listing 3-4. Removing debug string literals from builds

#include <iostream>
#include <string>

using namespace std;

#define DEBUG_STRING_LITERALS !NDEBUG

namespace
{
#if DEBUG_STRING_LITERALS
	using StringLiteral = string;
#endif

	StringLiteral STRING{ "This is a String!"s };
}

int main()
{
	cout << STRING << endl;
	return 0;
}

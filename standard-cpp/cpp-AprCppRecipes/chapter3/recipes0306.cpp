// C++ Recipes A Problem Solution Approach
// Author: Bruce Sutherland, Jedi Study
// Page 64
// Listing 3-6. Separating debug and non-debug string literals

#include <iostream>
#include <string>

using namespace std;

#define DEBUG_STRING_LITERALS !NDEBUG

namespace
{
#if DEBUG_STRING_LITERALS
	using DebugStringLiteral = string;
#endif

#if DEBUG_STRING_LITERALS
	DebugStringLiteral STRING{ "This is a String!"s };
#endif
}

int main()
{
#if DEBUG_STRING_LITERALS
	cout << STRING << endl;
#endif

	return 0;
}

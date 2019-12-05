// C++ Recipes A Problem Solution Approach
// Author: Bruce Sutherland, Jedi Study
// Page 60
// Listing 3-1. A string literal

#include <iostream>
#include <string>

using namespace std;

namespace {
	const std::string STRING = "This is a string";
}

int main() {
	cout << STRING << endl;
	return 0;
}

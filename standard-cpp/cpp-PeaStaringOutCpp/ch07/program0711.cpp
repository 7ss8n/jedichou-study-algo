// program0711.cpp
// This program demostrates the range-based for loop.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string books[] = {
		"Java 8 in Action",
		"HTML5 and CSS3",
		"Crazy C",
		"Head first C#"
	};

	for each (string val in books)
		cout << val << endl;

	return 0;
}

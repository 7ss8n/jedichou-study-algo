// From Wrox Begining Visual C++ 2008, Page 171
// Ex4_08.cpp
// Flexible array management using sizeof
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	char* pstr[] = {
		"Robert Redford", "Hopalong Cassidy", "Lassie",
		"Slim Pickens", "Boris Karloff", "Oliver Hardy"
	};
	char* pstart = "You luck star is ";
	int count = (sizeof pstr)/(sizeof pstr[0]);
	int dice = 0;

	cout << endl
		 << " Pick a lucky star!"
		 << " Enter a number between 1 and " << count << ": ";
	cin >> dice;

	cout << endl;
	if( dice >=1 && dice <= count)
		cout << pstart << pstr[dice-1];
	else
		cout << "Sorry, you input is wrong.";
	cout << endl;
	return 0;
}

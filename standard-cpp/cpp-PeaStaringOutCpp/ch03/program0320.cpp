// Starting Out With CPP.pdf, page 120
// Description:
//   This program reads a single character into
//   a char variable.
#include <iostream>
using namespace std;

int main()
{
	char ch;
	
	cout << "Type a character and press Enter: ";
	cin >> ch;
	cout << "You entered " << ch << endl;
	return 0;
}

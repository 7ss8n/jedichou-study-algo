// Starting Out with CPP.pdf, page 118-119
// Description:
//   This program illustrates a problem that can occur if
//   cin is used to read character data into a string object.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, city;

	cout << "\nPlease enter you name: "; cin >> name;
	cout << "\nEnter the city you live in: "; cin >> city;
	cout << endl;
	cout << "Hello, " << name
		 << ". You live in " << city << endl;
	return 0;
}

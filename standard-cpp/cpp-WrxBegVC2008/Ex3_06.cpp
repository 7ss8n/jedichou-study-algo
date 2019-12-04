// From Wrox Begining Visual C++ 2008, Page 129
// File name: Ex3_06.cpp
// Multiple case actions

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	char letter = 0;
	cout << endl
		 << "Enter a small letter: ";
	cin >> letter;

	switch( letter*(letter >='a' && letter <= 'z'))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << endl << "You entered a vowel.";
			break;
		case 0:
			cout << endl << "That is not small letter.";
			break;
		defalut:
			cout << endl << "You entered a consonant.";
	}

	cout << endl;
	return 0;
}

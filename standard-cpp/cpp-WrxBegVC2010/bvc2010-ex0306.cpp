// File: bvc2010-ex0306.cpp
// Description: Multiple case actions
#include <iostream>
using namespace std;

int main(void) {
	char letter(0);
	cout << "Enter a small letter: ";
	cin >> letter;

	// Process data
	switch(letter*(letter >= 'a' && letter <= 'z'))
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
			cout << "You enter a vowel.";
			break;
		case 0:
			cout << "That is not a small letter.";
			break;
		default:
			cout << "You enter a consonant.";
			break;
	}
	cout << endl;

	return 0;
}

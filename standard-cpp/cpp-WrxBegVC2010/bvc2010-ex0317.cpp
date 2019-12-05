// File: bvc2010-ex0317.cpp
// Analyzing a string using a for each loop

#include <iostream>
using std::cout;
using namespace System;

int main(array<System::String ^> ^args) {

	// Define variables
	int vowels(0), consonants(0);
	String^ proverb(L"A nod is as good as a wink to blind horse.");

	// Calculate
	for each(wchar_t ch in proverb) {
		if ( Char::IsLetter(ch) ) {
			ch = Char::ToLower(ch);
			switch (ch) {
				case 'a': case 'e': case 'i': case 'o': case 'u':
					++vowels;
					break;
				default:
					++consonants;
					break;
			}
		}
	}

	// Output result
	cout << "The vowels number is " << vowels << "\n";
	cout << "The consonants number is " << consonants << "\n";
	
	// Quit program
	return 0;
}

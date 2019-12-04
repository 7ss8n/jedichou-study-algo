// File: bvc2010-ex0315.cpp
// Simple demo

using namespace System;

int main(array <System::String ^> ^args) {
	
	// Define variable and read it from console.
	wchar_t letter;
	Console::Write(L"Enter a letter: ");
	letter = Console::Read();

	// Process user input
	if ( letter >= 'A' )
		if ( letter <= 'Z') {
			Console::WriteLine(L"You entered a capital letter.");
			return 0;
		}

	// Process user input
	if ( letter >= 'a' )
		if ( letter <= 'z') {
			Console::WriteLine(L"You entered a small letter.");
			return 0;
		}

	// Quit program
	Console::WriteLine(L"You did not enter a letter");
	return 0;
}

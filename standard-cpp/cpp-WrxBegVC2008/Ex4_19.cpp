// From Wrox Begining Visual C++ 2008, Page 216
// Ex4_19.cpp
// Searching for punctuation

#include "stdafx.h"
using namespace System;

int main(array<String^> ^args)
{
	array<wchar_t> ^punctuation = {L'"', L'\'', L',', L':', L';', L'!', L'?'};
	String^ sentence = L"\"It's chilly in here\", the boy's mother said coldly.";

	// Create array of space characters same length as sentence
	array<wchar_t> ^indicators = gcnew array<wchar_t>(sentence->Length){L' '};

	
	int index = 0;	// Index of character found
	int count = 0;	// count of punctuation characters
	while( (index = sentence->IndexOfAny(punctuation, index)) >= 0 )
	{
		indicators[index] = L'^';	// Set marker
		++index;					// Increment to next character
		++count;					// Increase the cout
	}
	Console::WriteLine(L"There are {0} punctation character in string:", count);
	Console::WriteLine(L"\n{0}\n{1}", sentence, gcnew String(indicators));

	return 0;
}

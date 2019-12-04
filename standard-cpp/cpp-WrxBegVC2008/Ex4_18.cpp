// From Wrox Begining Visual C++ 2008, Page 210
// Ex4_18.cpp
// Creating a custom format string

#include "stdafx.h"
using namespace System;

int main(array<String ^> ^args)
{
	array<int>^ values = {2, 456, 23, -46, 34211, 456, 5609, 112098,
		234, -76504, 341, 6788, -909121, 99, 10};
	String^ formatString1 = L"{0,";
	String^ formatString2 = L"}";
	String^ number;

	// Find the length of the maximum length value string
	int maxLength = 0;
	for each( int value in values)
	{
		number = L"" + value;
		if( maxLength < number->Length)
			maxLength = number->Length;
	}

	// Create the format string to be used for output
	String^ format = formatString1 + (maxLength+1) + formatString2;

	// Output the values
	int numberPerLine = 3;
	for(int i = 0; i < values->Length; i++)
	{
		Console::Write(format, values[i]);
		if( (i+1) % numberPerLine == 0 )
			Console::WriteLine();
	}

	return 0;
}

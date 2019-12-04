// From Wrox Begining Visual C++ 2008, Page 201
// Ex4_15.cpp : main project file.
// Searching an array

#include "stdafx.h"
using namespace System;

int main(array<System::String ^>^ args)
{
	// Define
	array<String^>^ names = {
		"Jill", "Ted", "Mary", "Eve", "Bill",
		"Al", "Ned", "Zoe", "Dan", "Jean"
	};
	array<int>^ weights = {
		103, 168, 128, 115, 180,
		176, 209, 98, 190, 130
	};
	array<String^>^ toBeFound = {
		"Bill", "Eve", "Al", "Fred"
	};

	// Sort
	Array::Sort(names, weights);

	// Find
	int result = 0;	// Stores search result
	for each(String^ name in toBeFound)
	{
		result = Array::BinarySearch(names, name);
		if( result < 0)
			Console::WriteLine(L"{0} was not found.", name);
		else
			Console::WriteLine(L"{0} weights {1} 1bs.", name, weights[result]);
	}

	return 0;
}

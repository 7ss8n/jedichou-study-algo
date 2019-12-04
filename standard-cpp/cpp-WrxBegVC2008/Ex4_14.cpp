// From Wrox Begining Visual C++ 2008, Page 200
// Ex4_14.cpp : main project file.
// Sorting an array of keys (the names) and an array of objects
// (the weights)

#include "stdafx.h"
using namespace System;

int main(array<System::String ^> ^args)
{
	// Define
	array<String ^>^ names = { "Jill", "Ted", "Mary", "Eve", "Bill", "Al"};
	array<int>^ weights = { 103, 168, 128, 115, 180, 176};

	// Sort
	Array::Sort(names, weights);	// Sort the arrays
	
	// Output
	for each (String^ name in names)
		Console::Write("{0, 10}", name); Console::WriteLine();
	for each (int weight in weights)
		Console::Write("{0, 10}", weight); Console::WriteLine();

	return 0;
}

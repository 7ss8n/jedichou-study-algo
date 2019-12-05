// From Wrox Begining Visual C++ 2008, Page 219
// Ex4_20.cpp
// Creating and using interior pointers

#include "stdafx.h"
using namespace System;

int main(array<String^> ^args)
{
	// Acess array elements through a pointer
	array<double>^ data = {1.5, 3.5, 6.7, 4.2, 2.1};
	interior_ptr<double> pstart = &data[0];
	interior_ptr<double> pend   = &data[data->Length-1];

	double sum = 0.0;
	while( pstart <= pend)
		sum += *pstart++;

	Console::WriteLine("1. The sum is {0}", sum);

	// Justo to show we can - access strings through an interior pointer
	array<String ^> ^strings = {
		L"Land ahoy!",
		L"Splice the mainbrace!",
		L"Shiver me timbers!",
		L"Never throw into the wind!"
	};
	for(interior_ptr<String^> pstrings = &strings[0];
		pstrings - &strings[0] < strings->Length;
		++pstrings)
		Console::WriteLine("2. {0}", *pstrings);

	return 0;
}

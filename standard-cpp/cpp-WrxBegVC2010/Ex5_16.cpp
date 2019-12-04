// Ex5_16.cpp: main project file.
// Passing a variable number of arguments to a function

// #include "Stdafx.h"

using namespace System;

double sum(... array<double>^ args)
{
	double sum(0.0);
	for each(double arg in args)
		sum += arg;
	return sum;
}

int main(array<System::String^>^ args)
{
	Console::WriteLine(sum(2.0, 4.0));
	Console::WriteLine(sum(2.0, 5.0));
	return 0;
}

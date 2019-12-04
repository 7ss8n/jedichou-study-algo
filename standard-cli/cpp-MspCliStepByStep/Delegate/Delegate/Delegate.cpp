#include "stdafx.h"

using namespace System;

// define a delegate method
delegate double NumbericOp(double);

ref class Ops
{
public:
	static double Square(double d) {
		return d * d;
	}
};

int main(array<System::String ^> ^args)
{
	// Declare a delegate
	NumbericOp ^op = gcnew NumbericOp(&Ops::Square);

	// Call the function through the delegate
	double result = op->Invoke(3.0);

	Console::WriteLine("Result is {0}", result);

    return 0;
}

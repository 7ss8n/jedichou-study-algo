#include "stdafx.h"

using namespace System;

// Define a delegate
delegate double MathOp(double d);

ref class MyLib1 {
public:
	static double Process1(double d) { return 3.0 * d; }
};

ref class MyLib2 {
public:
	static double Process2(double d) { return d * d * d; }
};

int main(array<System::String ^> ^args)
{
	// create a delegate obejct
	MathOp ^del_Math1 = gcnew MathOp(&MyLib1::Process1);
	MathOp ^del_Math2 = gcnew MathOp(&MyLib2::Process2);
	MathOp ^del;
	del = del_Math1 + del_Math2;

	// Invoke delegate
	for each (MathOp ^m in del->GetInvocationList()) {
		double val = m(4);
		Console::WriteLine("The output is: [{0}]", val);
	}

	return 0;
}

// DelegateGetReturn.cpp: 主要專案檔。

#include "stdafx.h"

using namespace System;

// define a delegate
delegate double MathOp(double d);

// define a math library 
ref class JMath
{
public:
	static double Square(double d) {
		return d * d;
	}
};

int main(array<System::String ^> ^args)
{
	// Create a delegate object, and invoke the delegate
	MathOp ^p = gcnew MathOp(&JMath::Square);
	double result = p(3.3);

	Console::WriteLine(result);
    return 0;
}

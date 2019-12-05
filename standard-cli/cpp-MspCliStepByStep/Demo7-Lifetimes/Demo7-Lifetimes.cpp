// Demo7-Lifetimes.cpp : main project file.

#include "stdafx.h"
#include "MyClass.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	MyClass^ m1 = gcnew MyClass("m1");
	m1->DoSomething();
	delete(m1);

	MyClass m2("m2");
	m2.DoSomething();

	Console::WriteLine();
	Console::WriteLine("End of program");
	Console::WriteLine();
    return 0;
}

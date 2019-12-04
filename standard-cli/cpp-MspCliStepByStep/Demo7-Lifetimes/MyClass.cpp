#include "stdafx.h"
#include "MyClass.h"

#using <mscorlib.dll>
using namespace System;

MyClass::MyClass(String^ objectName)
{
	name = objectName;
	Console::WriteLine("Constructor called for {0}", name);
}

MyClass::~MyClass()
{
	// Free up managed resources: this will be done anyway by the runtime
	// Now call the finalizer to free unmanaged resources
	this->!MyClass();
}

MyClass::!MyClass()
{
	Console::WriteLine("Finalizer called for {0}", name);
}

void MyClass::DoSomething()
{
	Console::WriteLine("DoSomething called for {0}", name);
}
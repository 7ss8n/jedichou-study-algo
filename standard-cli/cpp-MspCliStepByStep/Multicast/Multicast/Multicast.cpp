#include "stdafx.h"

using namespace System;

// define delegate
delegate void NotifyDelegate(int);

// class Client1
ref class Client1
{
public:
	static void NotifyFunction1(int n) {
		Console::WriteLine("Client1: got value {0}", n);
	}
};

// class Client2
ref class Client2
{
public:
	static void NotifyFunction2(int n) {
		Console::WriteLine("Client2: got value {0}", n);
	}
};

int main(array<System::String ^> ^args)
{
	// delcare a delegate object
	NotifyDelegate ^del1 = gcnew NotifyDelegate(&Client1::NotifyFunction1);
	NotifyDelegate ^del2 = gcnew NotifyDelegate(&Client2::NotifyFunction2);

	// Create a third delegate from the first two
	NotifyDelegate ^del3;
	del3 += del1;
	del3 += del2;

	// Invoke the multicast delegate
	Console::WriteLine("Invoking del3");
	del3(5);

	// Create a second multicast delegate and invoke it
	NotifyDelegate ^del4;
	del4 = del3 + del3;

	// Invoke the del4 delegate
	Console::WriteLine("Invoke del4");
	del4(6);

	// Remove an item
	del3 -= del2;
	Console::WriteLine("Invoke del3 again");
	del3(7);

    return 0;
}

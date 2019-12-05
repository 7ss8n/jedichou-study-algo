// From Apres Pro Visual C++/CLI and .NET 3.5 Platform, Page 89
// Listing 2-11. Boolean Literals in Action

using namespace System;

// Boolean Literals in Action
void main()
{
	bool isTrue = true;
	bool isFalse = false;

	Console::WriteLine(isTrue);
	Console::WriteLine(isFalse);

	// This is kind of neat. Boolean literal are object, too!
	Console::WriteLine( true.ToString() );
	Console::WriteLine( false.ToString() );
}

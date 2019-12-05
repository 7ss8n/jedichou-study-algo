// File from Pro Visual C++ CLI and .NET 3.5 Platform, page 71
// Listing 2-4. Boolean Type in Action

using namespace System;

// Boolean Value Type in Action
void main()
{
	bool a = 18757;		// will give a warning but set to true
	bool b = 0;			// false
	bool c = true;		// obviously true
	bool d = false;		// obviously false

	Console::WriteLine( a );
	Console::WriteLine( b );
	Console::WriteLine( c );
	Console::WriteLine( d );
}

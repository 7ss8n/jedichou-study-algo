// From Pro Visual C++ CLI and the .NET 3.5 Platform, Page72
// Listing 2-5. Char Type in Action

using namespace System;

// Character Value Type in Action
void main()
{
	Char a = L'A';		// character literal 'A'
	Char b = L'\x0041';	// hex notation for hex 41 which happens to be 'A'

	Console::WriteLine( a );
	Console::WriteLine( b );
	// Even though I put hex 41 in b, the ASCII 'A'
	// is printed because b is a Char
}

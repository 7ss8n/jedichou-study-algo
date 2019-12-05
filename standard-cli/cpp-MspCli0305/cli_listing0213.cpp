// From Apress Pro Visual C++/CLI and the .NET 3.5 Platform, Page 92
// Listing 2-13. String Literals in Action

using namespace System;

// String Literals in Action
void main()
{
	String^ a = "Managed String";
	String^ b = L"Unicode String";

	Console::WriteLine( a );
	Console::WriteLine( b );
}

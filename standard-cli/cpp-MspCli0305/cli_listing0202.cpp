// From Pro Visual C++ CLI and the .Net 3.5 Platform, Page 68
// Listing 2-2. Floating-Point Types in Action

using namespace System;

// Floating-Point value types in action
void main()
{
	float w = 123.456f;
	float x = 7890e3f;
	double y = 3452425432525764765.76476476547654;
	double z = 1234679012345e-300;

	Console::WriteLine( w );
	Console::WriteLine( x );
	Console::WriteLine( y );
	Console::WriteLine( z );
}

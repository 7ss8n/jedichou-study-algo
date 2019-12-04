// From Pro Visual C++ CLI and the .Net 3.5 Platform, Page 66
// Listing 2-1, Integer Types in Action

using namespace System;
void main()
{
	char v = 'F';
	short w(123);
	int x = 456789;
	long y = 987654321l;
	Int64 z = 0xFEDCBA9876543210;

	Console::WriteLine(v);
	Console::WriteLine(w);
	Console::WriteLine(x);
	Console::WriteLine(y);
	Console::WriteLine(z);
	Console::WriteLine(z.ToString("x"));
}

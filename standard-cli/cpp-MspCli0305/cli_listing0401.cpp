// From Apress Visual C++/CLI and the .NET 3.5 Platform, Page 174
// Listing 4-1. Original #defined Code

using namespace System;
#define DISAPPEARS
#define ONE 1
#define TWO 2
#define POW2(x) (x)*(x)

void main()
{
	Console::WriteLine("The following symbol disappears ->" DISAPPEARS);
	Console::WriteLine("<-");

	int x = TWO;
	int y = POW2(x+ONE);

	Console::WriteLine(y);
}

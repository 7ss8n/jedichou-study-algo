// From Apress Visual C++/CLI and the .NET 3.5 Platform, Page 175
// Listing 4-2. Processed #defined Code

using namespace System;
#define DISAPPEARS
#define ONE 1
#define TWO 2
#define POW2(x) (x)*(x)

void main()
{
	Console::Write("The following symbol disappears ->" DISAPPEARS);
	Console::WriteLine("<-");

	int x = TWO;
	int y = (x + 1)*(x + 1);

	Console::WriteLine(y);
}

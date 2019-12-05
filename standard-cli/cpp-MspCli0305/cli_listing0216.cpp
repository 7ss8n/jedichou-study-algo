// From Apress Pro Visual C++/CLI the .NET platform, Page 114
// Listing 2-16. Parsing a Command Line Using the New Method

using namespace System;

// Passing parameters to main() new method

int main(array<System::String ^> ^args)
{
	Console::WriteLine(args->Length);

	for each (String^ s in args)
	{
		Console::WriteLine( s );
	}
	return 0;
}

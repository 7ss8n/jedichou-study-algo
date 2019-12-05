// From Apress Pro Visual C++/CLI and the .NET platform, Page 113
// Listing 2-15. Parsing a Command Line Using the Traditional Method

using namespace System;

// Passing parameters to main() traditional method
int main(int argc, char *argv[] )
{
	Console::WriteLine( argc.ToString() );
	for (int i=0; i<argc; i++)
	{
		Console::WriteLine( gcnew String(argv[i]));
	}
	return 0;
}

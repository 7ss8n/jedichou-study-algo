// From Apress Pro Visual C++/CLI and the .NET 3.5 Platform, Page 134
// Listing 3-4. Static Member Methods and Variables in Action

using namespace System;

ref class StaticTest
{
private:
	static int x = 42;
public:
	static int get_x()
	{
		return x;
	}
};

void main()
{
	Console::WriteLine( StaticTest::get_x() );
}

// From Pro Visual C++ the .Net 3.5 Platform
// Listing 4-10. Simple Exception Handling Example

using namespace System;

ref class X{};
ref class Y{};

void main()
{
	X ^x = gcnew X;

	try
	{
		Y ^y = (Y^)x;
		Console::WriteLine("No Excepiton");
	}
	catch( InvalidCastException ^e)
	{
		Console::WriteLine("Invalid Cast Exception");
		Console::WriteLine(e->StackTrace);
		Console::WriteLine(e->Message);
	}
}

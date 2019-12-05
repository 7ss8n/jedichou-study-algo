// File name: cli_listing0412.cpp
// Description: Rethrowing an Exception
// From: Pro Visual C++ CLI and the .NET 3.5 Platform, page 206
// Listing 4-12

using namespace System;

void main()
{
	try
	{
		try
		{
			throw gcnew ApplicationException("\t***Boom***");
			Console::WriteLine("Imbedded Try End");
		}
		catch(ApplicationException ^ie)
		{
			Console::WriteLine("Caught Exception ");
			Console::WriteLine(ie->Message);
			throw;
		}
		Console::WriteLine("Outer Try End");
	}
	catch(ApplicationException ^oe)
	{
		Console::WriteLine("Recaught Exception ");
		Console::WriteLine(oe->Message);
	}
}

// File name: cli_listing0411.cpp
// Description: Throwing an Exception
// From Pro Visual C++ CLI and the .Net 3.5 Platform.pdf, page 204
// Listing 4-11. ThrowDerived.exe

using namespace System;

ref class MyException : public ApplicationException
{
public:
	MyException(String ^err);
};

MyException::MyException(System::String ^err) : ApplicationException(err)
{
}

void main()
{
	for(int i=0; i<3; i++)
	{
		Console::WriteLine("Start Loop");
		try
		{
			if (i==0)
				Console::WriteLine("\tCounter equal to 0");
			else if(i==1)
				throw gcnew MyException("\t**Exception** Counter equal to 1");
			else
				Console::WriteLine("\tCounter greater than 1");
		}
		catch (MyException ^e)
		{
			Console::WriteLine(e->Message);
			// Note by catching this exception here, the program
			// will resume right after the closing bracket
		}
		Console::WriteLine("End Loop");
	}
}

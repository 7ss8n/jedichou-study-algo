// Pro Visual C++ CLI and the .Net 3.5 platform
// listing 4-14. CatchAll.exe: Catching All Exceptions
using namespace System;

ref class MyDerivedException : public ApplicationException
{
public:
	MyDerivedException(String ^err);
};

MyDerivedException::MyDerivedException(String ^err) : ApplicationException(err)
{
}

ref class MyException  // Not dervied from Exception class
{
};

void main()
{
	for(int i=0; i<4; i++)
	{
		Console::WriteLine("Start Loop");
		try
		{
			if(i==1)
				throw gcnew ApplicationException("\tBase Exception");
			else if(i==2)
				throw gcnew MyDerivedException("\tMy Derived Exception");
			else if(i==3)
				throw gcnew MyException();

			Console::WriteLine("\tNo Exception");
		}
		catch(ApplicationException ^e)
		{
			Console::WriteLine(e->Message);
		}
		catch(...)
		{
			Console::WriteLine("\tMy Exception");
		}
		Console::WriteLine("End Loop");
	}
}

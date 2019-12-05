// Pro Visual C++ CLI and the .Net 3.5 Platform
// Listing 4-15. Finally.exe: The finally block

using namespace System;

void main()
{
	for(int i=0; i<3; i++)
	{
		Console::WriteLine("Start Loop");
		try
		{
			if(i==0)
				Console::WriteLine("\tCounter = 0");
			else if(i==1)
				throw gcnew ApplicationException("\tException* Counter=1");
			else
				Console::WriteLine("\tCounter greater than 1");
		}
		catch(ApplicationException ^e) { Console::WriteLine(e->Message); }
		finally	{ Console::WriteLine("\tDone every time"); }

		Console::WriteLine("End Loop");
	}
}

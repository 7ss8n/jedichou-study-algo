// From Apress Pro Visual C++/CLI the .NET 3.5 Platform, Page 133
// Listing 3-3. Member Method in Action

using namespace System;

ref class MethodEx
{
public:
	void printPublic(int num)
	{
		for(int i = 0; i < num; i++)
		{
			Console::WriteLine( "Public" );
		}
		printProtected( num/2 );
	}
protected:
	void printProtected(int num)
	{
		for(int i = 0; i < num; i++)
		{
			Console::WriteLine( "Protected" );
		}
		printPrivate( num/2 );
	}
private:
	void printPrivate(int num)
	{
		for( int i = 0; i < num; i++)
		{
			Console::WriteLine( "Private" );
		}
	}
};

int main()
{
	MethodEx ex;
	ex.printPublic(4);
}

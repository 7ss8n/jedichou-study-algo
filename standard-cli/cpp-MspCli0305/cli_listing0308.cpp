// From Apress Pro Visual C++ and the .NET 3.5 Platform, Page 151
// Listing 3-8. Operator Overload for Mixed Data Types in Action

using namespace System;

ref class Number
{
public:
	Number(int x) : i(x) {}

	static bool operator >(Number^ n, int v)	// maps to operator >
	{
		return n->i > v;
	}

	static bool operator >(int v, Number^ n)
	{
		return v > n->i;
	}

	virtual String ^ ToString() override
	{
		return i.ToString();
	}
private:
	int i;
};

int main()
{
	Number^ n = gcnew Number(5);

	if( n > 6 )
		Console::WriteLine("{0} Greater than 6", n);
	else
		Console::WriteLine("{0} Less than or Equal 6", n);

	if( 6 > n )
		Console::WriteLine("6 Greater than {0}", n);
	else
		Console::WriteLine("6 Less than or Equal {0}", n);
}

// From Apress Pro Visual C++/CLI and .NET 3.5 Platform, Page 156
// Listing 3-10. Static Properties in Action

using namespace System;

ref class StaticProp
{
public:
	property static String^ Name
	{
		void set(String^ value)	{ name = value; }
		String^ get() { return name; }
	}
private:
	static String^ name;
};

int main()
{
	StaticProp::Name = "Static Property";
	Console::WriteLine(StaticProp::Name);
}

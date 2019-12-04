// Ref: Microsoft Visual C++ CLI Step by Step
// Ref: Implementing scalar properties
// Properties.cpp

using namespace System;

ref class Person
{
	String ^name;
	int age;
public:
	// Person class constructor
	Person()
	{
		Name = "";
		Age = 0;
	}

	// The name property
	property String ^Name
	{
		String ^get() { return name; }
		void set(String ^n) { name = n; }
	}

	// The age property
	property int Age
	{
		int get() { return age; }
		void set(int val) 
		{ 
			if (val < 0)
				throw gcnew ArgumentException("Negative ages aren't allowd");
			age = val;
		}
	}
};

int main()
{
	// Create a Person object
	Person ^p = gcnew Person();

	// Set the name and age using properties
	p->Name = "fred";
	p->Age = 77;

	// Access the properties
	Console::WriteLine("Age of {0} is {1}", p->Name, p->Age);
	return 0;
}

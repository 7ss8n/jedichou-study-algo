// Microsoft Visual C++ CLI step by step
// Ref: Read-only and write-only properties
// PropertiesOnly.cpp

using namespace System;

ref class Person
{
	int dd, mm, yyyy;

public:
	// Personal class constructor
	Person(String ^n, int d, int m, int y)
	{
		Name = n;
		dd = d; mm = m; yyyy = y;
	}

	// Auto implementation of the Name property
	property String ^Name;

	// The read-only Age property
	property int Age
	{
		int get() {
			DateTime now = DateTime::Now;
			return now.Year - yyyy;
		}
	}
};

int main(array<String ^>^ args)
{
	Person ^p = gcnew Person("Jedi", 3, 6, 1978);
	Console::WriteLine("Name is {0}, and age is {1}", p->Name, p->Age);
	return 0;
}

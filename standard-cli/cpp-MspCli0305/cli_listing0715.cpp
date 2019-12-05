// File: cli_listing0715.cpp
// Ref: Apress Pro Visual C++ CLI and the .Net 3.5 Platform
// Listing 7-15. Working with the STL/CLR deque

#include <cliext/deque>
#include <cliext/adapter>

using namespace System;
using namespace cliext;
using namespace System::Collections::Generic;

// insert ref class Pet here
ref class Pet
{
public:
	String^ Name;

	// default public constructor
	Pet() : Name(String::Empty) { }

	// Not needed but makes example easier
	Pet(String^ name) : Name(name) { }

	// public copy constructor
	Pet (const Pet% orig)
	{
		Name = orig.Name;
	}

	// public assignment operator
	Pet% operator=(const Pet% orig)
	{
		if (this != %orig)
			Name = orig.Name;
		return *this;
	}

	// public destructor.
	~Pet() { }

	// comparison operator
	bool operator<(const Pet^ rhs)
	{
		return (Name->CompareTo(rhs->Name) < 0);
	}

	// equality operator
	bool operator==(const Pet^ rhs)
	{
		return (Name->Equals(rhs->Name));
	}
};

int main(array<System::String^> ^args)
{
	deque<Pet^> pets;
	pets.push_back(gcnew Pet("King"));
	pets.push_back(gcnew Pet("Buster"));
	pets.push_back(gcnew Pet("Caesar"));
	pets.push_back(gcnew Pet("Daisy"));

	// ---------------------------------------------------------
	System::Console::WriteLine("for loop -- Using subscript");
	for (int i=0; i < pets.size(); i++)
		System::Console::Write("{0} ", pets[i]->Name);	

	// ---------------------------------------------------------
	printf("\n\nfor loop -- Using const_iterator with insert: ");
	pets.insert(pets.begin() + 1, gcnew Pet("Jack"));
	deque<Pet^>::const_iterator pet_i;
	for(pet_i = pets.begin(); pet_i != pets.end(); pet_i++)
		System::Console::Write("{0} ", pet_i->Name);

	// ---------------------------------------------------------
	printf("\n\nfor each loop -- From typecast to IList<> with Add():");
	IList<Pet^>^ genericIList = %pets;
	genericIList->Add(gcnew Pet("Queen"));
	for each(Pet^ pet in genericIList)
		printf("%s ", pet->Name);

	// ---------------------------------------------------------
	

	return 0;
}

	

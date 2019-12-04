// Ref: Apress Pro Visual C++ CLI and the .Net 3.5 Platform
// Listing 7-14. Working with the STL/CLR Vector
// Jedi Chou, 2016.3.11 09:44

#include <cliext/vector>
#include <cliext/adapter>

using namespace System;
using namespace cliext;
using namespace System::Collections::Generic;

// insert ref class Pet here!
// the code from Listing 7-13.
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

int main(array<System::String^>^ args)
{
	vector<Pet^> pets;
	pets.push_back(gcnew Pet("King"));
	pets.push_back(gcnew Pet("Buster"));
	pets.push_back(gcnew Pet("Caesar"));
	pets.push_back(gcnew Pet("Daisy"));

	// ---------------------------------------
	Console::WriteLine("for loop -- using subscript:");

	for (int i=0; i < pets.size(); i++)
		Console::Write("{0} ", pets[i]->Name);

	// ---------------------------------------
	Console::WriteLine("\n\nfor loop -- Uinsg const_iterator* with insert: ");
	pets.insert(pets.begin() + 1, gcnew Pet("Jack"));
	
	vector<Pet^>::const_iterator pet_i;
	for (pet_i = pets.begin(); pet_i != pets.end(); pet_i++)
		Console::Write("{0} ", pet_i->Name);

	// ---------------------------------------
	Console::WriteLine("\n\nfor each loop - From typecase to IList<> with Add():");
	IList<Pet^>^ genericIList = %pets;
	genericIList->Add(gcnew Pet("Queen"));

	for each (Pet^ pet in genericIList)
		Console::Write("{0} ", pet->Name);

	// ---------------------------------------
	Console::WriteLine("\n\nfor each loop - using build in IEnumerator<> interface:");
	for each (Pet^ pet in pets)
		Console::Write("{0} ", pet->Name);

	// ---------------------------------------
	Console::Write("\n\n");
	Console::WriteLine("for each loop - subset ICollection<> create by make_collection<>():");
	ICollection<Pet^>^ icPets = make_collection(pets.begin()+1, pets.end()-1);

	for each (Pet^ pet in icPets)
		Console::Write("{0}  ", pet->Name);

	// ---------------------------------------
	Console::Write("\n\n");
	Console::WriteLine("for loop -- Using reverse_iterator from ICollection with pop_back():");

	vector<Pet^>^ vPets = gcnew vector<Pet^>(icPets);
	vPets->pop_back();

	vector<Pet^>::reverse_iterator pet_ri;
	for(pet_ri = vPets->rbegin(); pet_ri != vPets->rend(); pet_ri++)
		Console::Write("{0} ", pet_ri->Name);

	// ---------------------------------------
	
	return 0;
}

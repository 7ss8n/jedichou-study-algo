// From Apress Visual C++/CLI and the .NET 3.5 Platform, Page 136
// Listing 3-5. Constructor in Action

using namespace System;

// ref Parent Class
ref class ParentClass
{
public:
	// Default constructor that initializes ParentVal to a default value
	ParentClass() : PVal(10) { }

	// A constructor that initializes ParentVal to a passed value
	ParentClass(int inVal) : PVal(inVal) { }
	// Copy Constructor
	ParentClass(const ParentClass %p) : PVal(p.PVal) {}

	int PVal;
};

// Child class that inherits from ParentClass
ref class ChildClass : public ParentClass
{
public:
	// Default constructor that initializes ChildVal to a default value
	ChildClass() : CVal(20) {};		// default constructor

	// A constructor that initialized CVal to a passed value
	ChildClass(int inVal) : CVal(20) {};

	// A constructor that initialized the parent class with a passed value
	// and initializes ChildVal to another passed value
	ChildClass(int inVal1, int inVal2) : ParentClass(inVal1), CVal(inVal2) { }

	// copy constructor
	ChildClass(const ChildClass %v) : ParentClass(v.PVal), CVal(v.CVal) { }

	int CVal;
};

int main()
{
	ParentClass p1(4);		// Constructor
	ParentClass p2 = p1;	// Copy Constructor

	p1.PVal = 2;			// Change original, new unchanged

	Console::WriteLine("p1.PVal=[{0}], p2.PVal=[{1}]", p1.PVal, p2.PVal);

	ChildClass ^c1 = gcnew ChildClass(5, 6);	// Constructor
	ChildClass c2 = *c1;						// Copy Constructor

	c1->CVal = 12;		// Change original, new unchanged.

	Console::WriteLine("c1=[{0}/{1}] c2=[{2}/{3}]",
		c1->PVal, c1->CVal, c2.PVal, c2.CVal);
}

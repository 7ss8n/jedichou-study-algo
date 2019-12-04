// cli_listing0713.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 7-13. Minimal STL/CLR Reference Type

ref class Pet
{
public:
	String^ name;
	
	// default public constructor.
	Pet() : Name(String::Empty) { }
	
	// Not needed but makes example easier.
	Pet(String^ name) : Name(name) { }
	
	// public copy constructor.
	Pet(const Pet% orig)
	{
		Name = orig.Name;
	}
	
	// public assignment operator.
	Pet% operator=(const Pet% orig)
	{
		if( this != %orig)
			Name = orig.Name;
		return *this;
	}
	
	// public destructor
	~Pet() { }
	
	// comparison operator.
	bool operator<(const Pet^ rhs)
	{
		return (Name->CompareTo(rhs->Name) < 0);
	}
	
	// equality operator.
	bool operator==(const Pet^ rhs)
	{
		return (Name->Equals(rhs->Name));
	}
};
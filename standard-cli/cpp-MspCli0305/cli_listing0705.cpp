// cli_listing0705.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform, Page 293
// Listing 7-5. Working with ListDictionary

#using <system.dll>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Specialized;

void main()
{
	ListDictionary ^ldict = gcnew ListDictionary;
	
	ldict->Add("A", "First");
	ldict->Add("B", "Second");
	ldict->Add("C", "Third");
	ldict["D"] = "Fourth";
	
	// Use replaced index value.
	try
	{
		ldict->Add("C", "Third Replaced");
	}
	catch(ArgumentException ^e)
	{
		Console::WriteLine("ldict->Add(\"c\",\"Third Replaced\");");
		Console::WriteLine("Throws exception: {0}", e->Message);
	}
	
	ldict["B"] = "Second Replaced";
	Console::WriteLine("\nEnumerate");
	IEnumerator ^keys = ldict->Keys->GetEnumerator();
	IEnumerator ^vals = ldict->Values->GetEnumerator();
	while ( keys->MoveNext() && vals->MoveNext() ) {
		Console::WriteLine("{0}\t\t{1}", keys->Current, vals->Current);
	}
	
}
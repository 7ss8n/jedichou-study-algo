// cli_listing0708.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 7-8. Working with NameValueCollection

#using <system.dll>

using namespace System;
using namespace System::Collections::Specialized;

void main()
{
	// Create a NameValueCollection instance.
	NameValueCollection^ nvCol = gcnew NameValueCollection();
	
	// Add or set operations.
	nvCol->Add(nullptr,  "void");
	nvCol->Set("Flower", "Rose");
	
	nvCol->Add("Animal", "Dog");
	nvCol->Add("Animal", "Cat");
	nvCol->Add("Animal", "Cow");
	
	nvCol->Add("Fruit", "Apple");
	nvCol->Add("Fruit", "Pear");
	nvCol->Add("Fruit", "Peach");
	
	// Output by key
	array<String^>^ keys = nvCol->AllKeys;
	Console::WriteLine("Key\t\tValue");
	for(int i=0; i<keys->Length; i++) {
		array<String^>^ vals = nvCol->GetValues(keys[i]);
		
		Console::WriteLine("{0}:\t\t{1}", keys[i], vals[0]);
		for(int j=1; j<vals->Length; j++) {
			Console::WriteLine("\t\t{0}, vals[j]");
		}
	}
	
	// Output current status
	Console::WriteLine("------ Index Lookups ------");
	Console::WriteLine("Key @[1]:\t{0}", nvCol->GetKey(1));
	Console::WriteLine("Values @[3]:\t{0}", nvCol[3]);
	
	// Remove or update, add some elements.
	// At last use normal method to display all elements.
	nvCol->Remove(nullptr);
	nvCol["Fruit"] = "Plum";
	nvCol->Set("Animal", "Deer");
	nvCol->Add("Animal", "Ape");
	
	keys = nvCol->AllKeys;
	Console::WriteLine("------ Updated ------");
	for(int i=0; i<keys->Length; i++)
		Console::WriteLine(
			"{0}:\t\t{1}", keys[i], nvCol->Get(keys[i])
		);
		
	Console::WriteLine();
}
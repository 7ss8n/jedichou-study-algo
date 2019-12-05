// cli_listing0703.cpp
// Pro Visual C++/CLI and .Net 3.5 Platform
// Listing 7-3. Working with Hashtables and SortedLists

using namespace System;
using namespace System::Collections;

void main()
{
	// Define variables
	Hashtable  ^hash = gcnew Hashtable();
	SortedList ^sort = gcnew SortedList();
	array<String^>^ keys   = gcnew array<String^>{"B","A","C","D"};
	array<String^>^ skeys  = gcnew array<String^>{"A","B","C","D"};
	array<String^>^ values = gcnew array<String^>{"moose","zebra","horse","frog"};;
	
	// Initial data for hash and sort
	for(int i=0; i<keys->Length; i++) {
		hash->Add(keys[i], values[i]);
		sort->Add(keys[i], values[i]);
	}
	
	// Output element by indexed property
	Console::WriteLine("Hashtable\tSortedList");
	Console::WriteLine("By indexed property");
	for(int i=0; i<hash->Count; i++) {
		Console::WriteLine("{0} {1}\t\t{2} {3}",
					   skeys[i], hash[skeys[i]],
					   skeys[i], sort[skeys[i]]
		);
	}
	
	// Output element by index
	Console::WriteLine("\nBy index");
	for(int i=0; i<sort->Count; i++) {
		Console::WriteLine("N/A\t\t{0} {1}", i, sort->GetByIndex(i));
	}
	
	// Output element by enumerator
	Console::WriteLine("\nBy enumerator");
	IDictionaryEnumerator ^enum1 = hash->GetEnumerator();
	IDictionaryEnumerator ^enum2 = hash->GetEnumerator();
	while( enum1->MoveNext() && enum2->MoveNext()) {
		Console::Write("{0} {1}\t\t", enum1->Key, enum1->Value);
		Console::WriteLine("{0} {1}", enum2->Key, enum2->Value);
	}
	
	// Output enumerate key
	Console::WriteLine("\nEnumerate Key");
	IEnumerator ^keys1 = hash->Keys->GetEnumerator();
	IEnumerator ^keys2 = sort->Keys->GetEnumerator();
	while( keys1->MoveNext() && keys2->MoveNext() ) {
		Console::Write("{0}\t\t", keys1->Current);
		Console::WriteLine("{0}", keys2->Current);
	}
	
	// Output enumerate value
	Console::WriteLine("\nEnumerate Value");
	IEnumerator ^vals1 = hash->Values->GetEnumerator();
	IEnumerator ^vals2 = sort->Values->GetEnumerator();
	while( vals1->MoveNext() && vals2->MoveNext() ) {
		Console::Write("{0}\t\t", vals1->Current);
		Console::WriteLine("{0}", vals2->Current);
	}
	
	// Check contains method
	Console::WriteLine("\nContains a Key 'A' and 'Z'");
	Console::WriteLine("{0}\t\t{1}", hash->Contains("A"), sort->Contains("A"));
	Console::WriteLine("{0}\t\t{1}", hash->ContainsKey("Z"), sort->ContainsKey("Z"));
	
	Console::WriteLine("\nCotains a Value 'frog' and 'cow'");
	Console::WriteLine("{0}\t\t{1}", hash->ContainsValue("frog"), sort->ContainsValue("frog"));
	Console::WriteLine("{0}\t\t{1}", hash->ContainsValue("cow"), sort->ContainsValue("cow"));
	
	// Check index
	Console::WriteLine("\n\t\t'B' key index: {0}",  sort->IndexOfKey("B"));
	Console::WriteLine("\t\t'frog' key index: {0}", sort->IndexOfKey("frog"));
}
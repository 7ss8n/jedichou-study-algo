// file name: HashSortList.cpp
// reference by: Pro Visual C++ and the .Net 3.5 Platform.pdf
// Listing 7-3. Working with Hashtables and SortedLists

using namespace System;
using namespace System::Collections;

void main()
{
	Hashtable^ hash = gcnew Hashtable();
	SortedList^ sort = gcnew SortedList();

	array<String^>^ keys   = gcnew array<String^> {"B", "A", "C", "D"};
	array<String^>^ skeys  = gcnew array<String^> {"A", "B", "C", "D"};
	array<String^>^ values = gcnew array<String^> {"moose", "zebra", "horse", "frog"};

	for (int i = 0; i < keys->Length; i++)
	{
		hash->Add(keys[i], values[i]);
		sort->Add(keys[i], values[i]);
	}

	Console::WriteLine("Hashtable\tSortedList");
	Console::WriteLine("By indexed property");
	for (int i = 0; i < hash->Count; i++)
	{
		Console::WriteLine(
			"{0} {1}\t\t{2} {3}",
			skeys[i], hash[skeys[i]],
			skeys[i], sort[skeys[i]]
		);
	}

	Console::WriteLine("\nBy index");
	// todo: do not complete!
}

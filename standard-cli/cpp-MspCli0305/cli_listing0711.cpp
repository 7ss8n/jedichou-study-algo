// cli_listing0711.cpp
// Pro Visual C++/CLI and .Net 3.5 Platform
// Listing 7_11. Working with Queue<T>s and Stack<T>s

#using <system.dll>

using namespace System;
using namespace System::Collections::Generic;

void main()
{
	// Define variables
	Queue<String^>^ que = gcnew Queue<String^>();
	Stack<String^>^ stk = gcnew Stack<String^>();
	array<String^>^ entry = gcnew array<String^> {
		"First", "Second", "Third", "Fourth"
	};
	
	// Add elements to que and stk, and insert value at same time
	Console::WriteLine("Queue\t\tStack");
	for(int i=0; i < entry->Length; i++) {
		que->Enqueue(entry[i]);
		stk->Push(entry[i]);
		Console::WriteLine("{0}\t\t{1}", entry[i], entry[i]);
	}
	
	// Drop element and display it.
	Console::WriteLine("\n** OFF **");
	while ( (que->Count > 0) && (stk->Count > 0) )
		Console::WriteLine("{0}\t\t{1}", que->Dequeue(), stk->Pop() );
	
	// clear que and stk.
	que->Clear();
	stk->Clear();
}
// cli_listing0704.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 7-4. Working with Queues and Stacks

using namespace System;
using namespace System::Collections;

void main()
{
	Queue ^que = gcnew Queue();
	Stack ^stk = gcnew Stack();
	
	array<String^>^ entry = gcnew array<String^> {
		"First", "Second", "Third", "Fourth"
	};
	
	Console::WriteLine("Queue\t\tStack");
	
	Console::WriteLine("** ON **");
	for(int i=0; i<entry->Length; i++) {
		que->Enqueue(entry[i]);
		stk->Push(entry[i]);
		Console::WriteLine("{0}\t\t{1}", entry[i], entry[i]);
	}
	
	Console::WriteLine("** OFF **");
	while( (que->Count > 0) && (stk->Count > 0))
		Console::WriteLine("{0}\t\t{1}", que->Dequeue(), stk->Pop());
	
	que->Clear();
	stk->Clear();
	
	Console::WriteLine("\n");
}
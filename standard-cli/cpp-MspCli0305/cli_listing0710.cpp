// cli_listing0710.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 7-10. Working with Linked Lists
#using <system.dll>

using namespace System;
using namespace System::Collections::Generic;

int main()
{
	array<String^>^ arrList = gcnew array<String^> {"Two", "Three", "Four"};
	LinkedList<String^>^ list =	gcnew LinkedList<String^>((IEnumerable<String^>^)arrList);
		
	list->AddLast("Six");
	list->AddFirst("Zero");
	list->AddAfter(list->First, "One");
	list->AddBefore(list->Last, "5");
	
	// write with error
	Console::WriteLine("Write with error");
	
	LinkedListNode<String^>^ current = list->Last;
	while ( current != nullptr ) {
		Console::WriteLine(current->Value);
		current = current->Previous;
	}
	
	// add, remove, remove first element
	Console::WriteLine("\nNumber of elements = {0}", list->Count);
	LinkedListNode<String^>^ node = list->Find("5");
	list->AddBefore(node, "Five");
	list->Remove(node);
	
	list->RemoveFirst();
	
	// write with corrections
	Console::WriteLine("\nWrite with corrections");
	for each(String^ str in list)
		Console::WriteLine(str);
		
	Console::WriteLine("\nNumber of elements = {0}\n", list->Count);
	
	// Notice:
	// list->Add(4);  // Compile time error as type is not a String^
}
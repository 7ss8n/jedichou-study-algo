// reference by: Pro Visual C++ and the .net 3.5 platform.pdf
// listing 7-1, working with arraylist, page: 250
using namespace System;
using namespace System::Collections;

ref class myReverserClass: public IComparer
{
public:
	virtual int Compare(Object^ x, Object^ y) = IComparer::Compare
	{
		return (String::Compare((String^)y, (String^)x));
	}
};

void main()
{
	ArrayList^ alist = gcnew ArrayList(4);
	alist->Add("One");
	alist->Add("-");
	alist[1] = "Three";
	alist->Insert(1, "Two");
	
	array<String^>^ morenums = gcnew array<String^>	 {"Four", "Five"};
	alist->AddRange(morenums);
	alist->Reverse();

	// output process result
	Console::WriteLine("*** The ArrayList ***");
	for (int i = 0; i < alist->Count; i++)
		Console::Write("{0} ", alist[i]);

	// output alist's capacity
	Console::WriteLine("\n\nCapacity is : {0}", alist->Capacity.ToString());

	// change alist's capacity and echo it to screen
	alist->Capacity = 10;
	Console::WriteLine("New capacity is : {0}", alist->Capacity.ToString());

	IComparer^ myComparer = gcnew myReverserClass;
	alist->Sort(myComparer);

	int index = alist->BinarySearch("Four", myComparer);
	Console::WriteLine("Four found at index: {0}", index.ToString());

	bool fnd = alist->Contains("One");
	Console::WriteLine("ArrayList contains a 'One': {0}", fnd.ToString());
}

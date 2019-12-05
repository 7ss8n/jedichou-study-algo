// cli_listing0707.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 7-7. Working with StringDictionary

#using <system.dll>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Specialized;

void main()
{
	StringDictionary ^strdict = gcnew StringDictionary();
	
	strdict->Add("Dog",  "Four leg, hydrant loving, barking, mammal");
	strdict->Add("Frog", "Green, jumping, croaking, amphibian");
	
	strdict["Crocodile"] = "Ugly, boot origin, snapping, reptile";
	
	ArrayList ^alist = gcnew ArrayList();
	alist->AddRange(strdict->Keys);
	alist->Sort();
	
	for(int i=0; i<alist->Count; i++) {
		Console::WriteLine(
			"{0,10}:\t{1}",
			alist[i],
			strdict[(String^)alist[i]]
		);
	}
}
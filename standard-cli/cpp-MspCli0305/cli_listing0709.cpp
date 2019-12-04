// cli_listing0709.cpp
// Pro Visual C++/CLI and the .Net 3.5 Platform
// Listing 7-9. Working with List<T>, Action<T>, and Predicate<T>

using namespace System;
using namespace System::Collections::Generic;

// ------ StringEx class ------
ref class StringEx
{
public:
	String^ Value;
	
	StringEx(String^ in);
	virtual String^ ToString() override;
	
	static bool With_e_Predicate(StringEx^ val);
	static void SurroundInStars(StringEx^ val);
};

StringEx::StringEx(String^ in) : Value(in) {}
String^ StringEx::ToString() {return Value;}

bool StringEx::With_e_Predicate(StringEx^ val) {
	return val->Value->ToUpper()->IndexOf("E") > 0;
}

void StringEx::SurroundInStars(StringEx^ val) {
	val->Value = String::Format("** {0} **", val->Value);
}

// ------ Main function ------
void main()
{
	// Create a list for StringEx object.
	List<StringEx^>^ alist = gcnew List<StringEx^>();
	
	// Add some element to list
	alist->Add(gcnew StringEx("One"));
	alist->Add(gcnew StringEx("-"));
	alist[1] = gcnew StringEx("Three");
	
	// Use insert method to add an element.
	alist->Insert(1, gcnew StringEx("Two"));
	
	// Create another list for StringEx
	List<StringEx^>^ morenums = gcnew List<StringEx^>();
	morenums->Add(gcnew StringEx("Four"));
	morenums->Add(gcnew StringEx("Five"));
	
	// Add a range to list
	alist->AddRange(morenums);
	
	// Notice: these code can not compile
	// alist[0] = "Six";
	// alist->Add["Six"];
	
	// Output elements
	Console::WriteLine("*** The List<StringEx^> ***");
	for(int i=0; i<alist->Count; i++)
		Console::WriteLine("{0} ", alist[i]);
	
	// Find all words in list that contain an 'e'
	List<StringEx^>^ With_e =
		alist->FindAll(gcnew Predicate<StringEx^>(StringEx::With_e_Predicate));
	Console::WriteLine("\n\n*** The List<StringEx^> containing an 'e' ***");
	for each(StringEx^ str in With_e)
		Console::WriteLine("{0} ", str);
		
	// Surroud all elements with starts
	alist->ForEach(gcnew Action<StringEx^>(StringEx::SurroundInStars));
	Console::WriteLine("\n\n*** The List<StringEx^> surrounded by star ***");
	for each(StringEx^ str in alist)
		Console::WriteLine("{0} ", str);
}
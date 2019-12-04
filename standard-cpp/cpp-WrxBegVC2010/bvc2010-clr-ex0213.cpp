// File bvc2010-clr-ex0213.cpp
// Visual C++ 2010 Program.pdf, page 93
// Description:
//   Defining and using a C++/CLI enumeration.

using namespace System;

// Define the enumeration at global scope
enum class Suit { Clubs, Diamonds, Hearts, Spadeds };

int main(array <System::String ^> ^args) {
	
	Suit suit = Suit::Clubs;
	int value = safe_cast <int> (suit);
	Console::WriteLine("Suit is {0} and the value is {1}", suit, value);

	suit = Suit::Diamonds;
	value = safe_cast <int> (suit);
	Console::WriteLine("Suit is {0} and the value is {1}", suit, value);

	suit = Suit::Hearts;
	value = safe_cast <int> (suit);
	Console::WriteLine("Suit is {0} and the value is {1}", suit, value);

	suit = Suit::Spadeds;
	value = safe_cast <int> (suit);
	Console::WriteLine("Suit is {0} and the value is {1}", suit, value);
	
	return 0;
}

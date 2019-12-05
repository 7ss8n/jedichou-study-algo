// File bvc2010-clr-ex0212.cpp
// Description:
//   Calculating the price of a carpet
//   A demostrate for C++ CLI program
// Visual C++ 2010 Programming, Page 90

using namespace System;

int main(array <System::String^> ^args) {
	// Define variables
	double carpetPriceSqYd = 27.95;
	double roomWidth = 13.5;
	double roomLength = 24.75;
	const int feetPetYard = 3;
	double roomWidthYds = roomWidth/feetPetYard;
	double roomLengthYds = roomLength/feetPetYard;
	double carpetPrice = roomWidthYds * roomLengthYds * carpetPriceSqYd;
	
	Console::WriteLine("Room size is {0:F2} yards by {1:F2} yards",	
		roomWidthYds, 
		roomLengthYds
	);

	Console::WriteLine("The area is {0:F2}", roomWidthYds * roomLengthYds);
	Console::WriteLine("The carpet price is {0:F2}", carpetPrice);

	return 0;
}

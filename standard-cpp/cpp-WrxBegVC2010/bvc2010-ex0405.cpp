// File: bvc2010-ex0405.cpp
// Exercising pointers

#include <iostream>
using std::cout;
using std::endl;
using std::hex;
using std::dec;

int main() {

	// Define variables
	// long* pnumber(nullptr);	// vc++ a null pointer
	long* pnumber;				// standard pointer delcaration
	long number1(55), number2(99);

	// Pointer operate and output
	pnumber = &number1;
	*pnumber += 11;
	cout << "number1 = " << number1
		 << " &number1 = " << hex << pnumber;

	// Pointer operate
	pnumber = &number2;
	number1 = *pnumber*10;

	// Pointer operate and output
	cout << endl
		 << "number1 = " << dec << number1
		 << " pnumber = " << hex << pnumber
		 << " *pnumber = " << dec << *pnumber;

	return 0;
}

#include "stdafx.h"
#include "Bank.h"
#include "Account.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Console::WriteLine("Bank Example");

	// Create a Bank object
	Bank ^theBank = gcnew Bank();
    
	// Create some accounts
	Account ^accountOne   = gcnew Account(123456, 100.0  , 0.0   );
	Account ^accountTwo   = gcnew Account(234567, 1000.0 , 100.0 );
	Account ^accountThree = gcnew Account(123456, 10000.0, 1000.0);

	// Add them to the Bank
	theBank->AddAccount(accountOne);
	theBank->AddAccount(accountTwo);
	theBank->AddAccount(accountThree);

	// Use the indexed property to access an account
	Account ^pa = theBank[234567];
	Console::WriteLine(
		"Account Number is {0}, and balance: [{1}]", 
		pa->AccountNumber, pa->Balance
	);

	return 0;
}

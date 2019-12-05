// Demo6-CreditOrganizer.cpp : main project file.

#include "stdafx.h"
#include "CreditCardAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	/*
	Console::Write("Card name is ");
	Console::WriteLine(CreditCardAccount::name);

	// call static function and output result
	int n = CreditCardAccount::GetNumberOfAccounts();
	Console::Write("Number of accounts initially: ");
	Console::WriteLine(n);
	Console::WriteLine("\nCreating first object");

	// 1st CreditCardAccount object
	CreditCardAccount^ account1;
	account1 = gcnew CreditCardAccount(12345, 2000);
	account1->MakePurchase(300);
	account1->PrintStatement();

	// 2nd CreditCardAccount object
	Console::WriteLine();
	Console::WriteLine("Creating second object");
	CreditCardAccount^ account2;
	account2 = gcnew CreditCardAccount(67890, 5000);
	account2->MakePurchase(750);
	account2->PrintStatement();

	// call static function again
	n = CreditCardAccount::GetNumberOfAccounts();
	Console::WriteLine("\nNumber of accounts now: {0}", n); */

	Console::WriteLine("Creating account object");
	CreditCardAccount ^account1;
	account1 = gcnew CreditCardAccount(12345, 2000);
	Console::WriteLine("\nMaking a purchase (300)");
	account1->MakePurchase(300);
	Console::WriteLine("\nMaking a purchase (700)");
	account1->MakePurchase(700);
	Console::WriteLine("\nMaking a purchase (500)");
	account1->MakePurchase(500);
	Console::WriteLine("\nRedeeming points");
	account1->RedeemLoyaltyPoints();

	Console::ReadLine();
    return 0;
}

#include "stdafx.h"
#include "Account.h"
using namespace System;

Account::Account()
{
	Console::WriteLine("Account: constructor");
}

Account::Account(long num, double bal, double lim)
{
	Console::WriteLine("Account: constructor");
	
	// Basic sanity check
	if (num < 0 || lim < 0)
		throw gcnew ArgumentException("Bad parameters to constructor");
	
	// Initialize values
	accNumber = num;
	balance = bal;
	limit = lim;
}
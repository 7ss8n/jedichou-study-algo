#include "stdafx.h"
#include "Bank.h"
#include "Account.h"

using namespace System;
using namespace System::Collections::Generic;

Bank::Bank()
{
	Console::WriteLine("Bank: constructor");
	accounts = gcnew List<Account^>();
}

bool Bank::AddAccount(Account ^acc)
{
	// check if the account is already in the list
	if (accounts->Contains(acc))
		return false;
	else
		accounts->Add(acc);
}

bool Bank::RemoveAccount(Account ^acc)
{
	// check if the account is already in the list
	if (accounts->Contains(acc))
	{
		accounts->Remove(acc);
		return true;
	}
	else
		return false;
}
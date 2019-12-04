#pragma once

using namespace System::Collections::Generic;
#include "Account.h"

ref class Bank
{
	List<Account^> ^accounts;

public:
	Bank();
	bool AddAccount(Account ^acc);
	bool RemoveAccount(Account ^acc);

	property Account ^default[long]
	{
		Account ^get(long num)
		{
			for each(Account ^acc in accounts)
				if (acc->AccountNumber == num)
					return acc;
			throw gcnew ArgumentOutOfRangeException("No such account");
		}
	}
};

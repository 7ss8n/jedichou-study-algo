#pragma once
using namespace System;

ref class Account
{
public:
	Account();
	Account::Account(long num, double bal, double lim);
	
	property long AccountNumber { long get() { return accNumber; } }
	property double Balance { double get() { return balance; } }
	property double OverdraftLimit
	{
		double get() { return limit; }
		void set(double value) {
			if (value <  0)
				throw gcnew ArgumentException("Limit can't be negative");
			limit = value;
		}
	}

private:
	long accNumber;
	double balance;
	double limit;
};

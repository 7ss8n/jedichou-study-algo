#include "stdafx.h"
#include "LoyaltyScheme.h"

using namespace System;

ref class CreditCardAccount
{
public:
	literal String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	void RedeemLoyaltyPoints();

private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;
	LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object
};
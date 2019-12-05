using namespace System;

#include "BankAccount.h"

BankAccount::BankAccount(String^ holder)
	: acountHolder(holder), balance(0) 
{
}
void BankAccount::Credit(double amount) { balance += amount; }
void BankAccount::Debit(double amount) { balance -= amount; }
double BankAccount::GetBalance() { return balance; }
#include "Savings_Account.h"
#include<iostream>


Savings_Account::Savings_Account()
{
}

Savings_Account::Savings_Account(std::string name, double balance, double intrest_rate)
	:Account(name,balance),int_rate(intrest_rate)
{
}

void Savings_Account::print(std::ostream& os) const
{
	os << "Name:" << name << " || balance:" << balance 
		<< " || Intrest rate:" << int_rate*100 << "%";
}

bool Savings_Account::deposit(double amount)
{
	amount += amount * int_rate;
	Account::deposit(amount);
	return true;
}

bool Savings_Account::withdraw(double amount)
{
	return Account::withdraw(amount);
}
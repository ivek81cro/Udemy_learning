#include "Savings_Account.h"
#include<iostream>


Savings_Account::Savings_Account()
{
}

Savings_Account::Savings_Account(std::string name, double balance, double intrest_rate)
	:Account(name,balance),int_rate(intrest_rate)
{
}

Savings_Account::~Savings_Account()
{
}

void Savings_Account::print(std::ostream& os) const
{
	os << "Savings account balance:" << balance << " Intrest rate:" << int_rate;
}

bool Savings_Account::deposit(double amount)
{
	amount += amount * int_rate/100;
	Account::deposit(amount);
	return true;
}
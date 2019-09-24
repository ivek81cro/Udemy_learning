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

bool Savings_Account::deposit(double ammount)
{
	ammount += ammount * int_rate/100;
	Account::deposit(ammount);
	return true;
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& sa)
{
	return os << "Savings account balance:" << sa.balance << " Intrest rate:" << sa.int_rate;
}
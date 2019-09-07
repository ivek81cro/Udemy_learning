#include "Savings_Account.h"
#include<iostream>


Savings_Account::Savings_Account():Savings_Account(0.0,0.0)
{
}

Savings_Account::Savings_Account(double balance, double intrest_rate)
	:Account(balance),int_rate(intrest_rate)
{
}

Savings_Account::~Savings_Account()
{
}

void Savings_Account::deposit(double ammount)
{
	ammount += ammount * int_rate/100;
	Account::deposit(ammount);
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& sa)
{
	return os << "Savings account balance:" << sa.balance << " Intrest rate:" << sa.int_rate;
}
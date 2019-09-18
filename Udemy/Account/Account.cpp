#include<iostream>
#include "Account.h"

Account::Account(std::string name, double balance ) 
	: balance{ balance }, name{ name }
{}

Account::~Account()
{}

bool Account::deposit(double ammount)
{
	if (ammount < 0)
	{
		return false;
	}
	else 
	{
		balance += ammount;
		return true;
	}
}

bool Account::withdraw(double ammount)
{
	if (ammount > balance)
	{
		return false;
	}
	else
	{
		balance -= ammount;
		return true;
	}
}

double Account::get_balance() const
{
	return balance;
}

std::ostream& operator<<(std::ostream& os, const Account& acc)
{
	return os << "Account name:" << acc.name<< " || balance:" << acc.balance;
}
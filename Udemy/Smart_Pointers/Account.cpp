#include<iostream>
#include "Account.h"

std::ostream& operator<<(std::ostream& os, const I_Printable& obj)
{
	obj.print(os);
	return os;
}

void Account::print(std::ostream& os) const
{
	os << name << ": " << balance;
}

Account::Account(std::string name, double balance ) 
	: balance{ balance }, name{ name }
{}

Account::~Account()
{}

bool Account::deposit(double amount)
{
	if (amount < 0)
	{
		return false;
	}
	else 
	{
		std::cout << "Deposit....." << amount << std::endl;
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount)
{
	if (amount > balance)
	{
		std::cout << "Withdraw....." << amount 
			<< "\nLimit exceeded" << std::endl;
		return false;
	}
	else
	{
		std::cout << "Withdraw....." << amount << std::endl;
		balance -= amount;
		return true;
	}
}
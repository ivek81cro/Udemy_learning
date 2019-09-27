#include "Checking_Account.h"
#include"Account.h"
#include<iostream>

Checking_Account::Checking_Account(std::string name, double balance)
	:Account{name, balance}
{
}

Checking_Account::~Checking_Account()
{
}


void Checking_Account::print(std::ostream& os) const
{
	os << "Checking account: " << name << " || Balance: " << balance;
}

bool Checking_Account::withdraw(double amount)
{
	std::cout <<"Withdraw fee:" << _fee << std::endl;
	amount += _fee;
	return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount)
{
	return Account::deposit(amount);
}
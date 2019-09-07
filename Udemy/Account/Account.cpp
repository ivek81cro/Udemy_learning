#include<iostream>
#include "Account.h"

Account::Account():Account(0.0)
{
}

Account::Account(double balance) : balance(balance)
{
}

Account::~Account()
{
}

void Account::deposit(double ammount)
{
	std::cout << "Deposit called with ammount of: " << ammount << std::endl;
	balance += ammount;
}

void Account::withdraw(double ammount)
{
	std::cout << "Withdraw called with ammount of: " << ammount << std::endl;
	if (ammount > balance)
		std::cout << "Insuficcient funds!" << std::endl;
	else
		balance -= ammount;
}

std::ostream& operator<<(std::ostream& os, const Account& acc)
{
	return os << "Accoutn balance:" << acc.balance;
}
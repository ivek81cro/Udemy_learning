#include<iostream>
#include "Account.h"



Account::Account():balance { 0.0 },name{ "An Account" }
{

}


Account::~Account()
{
}

void Account::deposit(double ammount)
{
	std::cout << "Deposit called with ammount of: " << ammount << std::endl;
}

void Account::withdraw(double ammount)
{
	std::cout << "Withdraw called with ammount of: " << ammount << std::endl;
}
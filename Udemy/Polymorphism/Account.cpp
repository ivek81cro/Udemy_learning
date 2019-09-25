#include<iostream>
#include "Account.h"

Account::Account(){}

Account::~Account()
{
	std::cout << "Account destructor called;" << std::endl;
}

void Account::withdraw(double ammount)
{
	std::cout << "Account withdraw called;" << std::endl;
}
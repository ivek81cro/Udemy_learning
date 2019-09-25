#include "Trust_Account.h"
#include<iostream>


Trust_Account::Trust_Account(){}

Trust_Account::~Trust_Account()
{
	std::cout << "Trust destructor called;" << std::endl;
}

void Trust_Account::withdraw(double amount)
{
	std::cout << "Trust withdraw called;" << std::endl;
}

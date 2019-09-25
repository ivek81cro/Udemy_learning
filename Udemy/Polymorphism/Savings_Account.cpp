#include "Savings_Account.h"
#include<iostream>


Savings_Account::Savings_Account(){}

Savings_Account::~Savings_Account()
{
	std::cout << "Savings destructor called;" << std::endl;
}

void Savings_Account::withdraw(double amount)
{
	std::cout << "Savings withdraw called;" << std::endl;
}
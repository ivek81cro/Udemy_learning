#include "Checking_Account.h"
#include"Account.h"
#include<iostream>

Checking_Account::Checking_Account(){}

Checking_Account::~Checking_Account()
{
	std::cout << "Checking destructor called;" << std::endl;
}

void Checking_Account::withdraw(double ammount)
{
	std::cout << "Checking withdraw called;" << std::endl;
}

#include "Savings_Account.h"
#include<iostream>


Savings_Account::Savings_Account():intrest_rate{3.0}
{

}


Savings_Account::~Savings_Account()
{
}

void Savings_Account::deposit(double ammount)
{
	std::cout << "Savings called with ammount of: " << ammount << std::endl;
}

void Savings_Account::withdraw(double ammount)
{
	std::cout << "Savings called with ammount of: " << ammount << std::endl;
}
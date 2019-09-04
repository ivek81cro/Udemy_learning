#include"Account.h"
#include"Savings_Account.h"
#include<iostream>

int main()
{
	std::cout << "\n=============Account======================" << std::endl;
	Account acc{};
	acc.deposit(2000.0);
	acc.withdraw(500.0);

	std::cout << std::endl;

	Account *p_acc{ nullptr };
	p_acc = new Account();
	p_acc->deposit(1000.0);
	p_acc->withdraw(500.0);
	delete p_acc;

	std::cout << "\n=============Savings_Account======================" << std::endl;
	Savings_Account sacc{};
	sacc.deposit(2000.0);
	sacc.withdraw(500.0);
	
	std::cout << std::endl;

	Savings_Account *p_sacc{ nullptr };
	p_sacc = new Savings_Account();
	p_sacc->deposit(3000.0);
	p_sacc->withdraw(700.0);
	delete p_sacc;
}
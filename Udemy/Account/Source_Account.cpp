#include"Savings_Account.h"
#include"Checking_Account.h"
#include<iostream>

int main()
{
	Account a1{ "Superman" };
	std::cout << a1 << std::endl;

	a1.deposit(500.0);
	std::cout << a1 << std::endl;

	a1.withdraw(1000.0);
	std::cout << a1 << std::endl;

	a1.withdraw(2000.0);
	std::cout << a1 << std::endl;

	std::cout << "==========SAVINGS==============================" << std::endl;

	Savings_Account s1{ 1000.0,5.0 };
	std::cout << s1 << std::endl;

	s1.deposit(1000.0);
	std::cout << s1 << std::endl;

	s1.withdraw(2000.0);
	std::cout << s1 << std::endl;

	s1.withdraw(1000.0);
	std::cout << s1 << std::endl;

	Checking_Account c1{"Superman",1000.0};
	c1.withdraw(900.0);
	std::cout << c1 << std::endl;
}
#include"Savings_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include<iostream>

int main()
{
	Checking_Account c1;
	std::cout << c1 << std::endl;

	Savings_Account s1{ "Superman",500,2 };
	std::cout << s1 << std::endl;
	s1.deposit(1000);
	std::cout << s1 << std::endl;
	s1.withdraw(352);
	std::cout << s1 << std::endl;

	Account *t1 = new Trust_Account("Luigi", 500,7);
	std::cout << *t1 << std::endl;
	delete t1;
}
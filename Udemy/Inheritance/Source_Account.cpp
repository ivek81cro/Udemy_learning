#include"Savings_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include<iostream>

int main()
{
	std::cout.precision(2);
	std::cout << std::fixed;

	Account a1{ "Superman" };
	std::cout << a1 << std::endl;

	a1.deposit(500.0);
	std::cout << a1 << std::endl;

	a1.withdraw(1000.0);
	std::cout << a1 << std::endl;

	a1.withdraw(500.0);
	std::cout << a1 << std::endl;

	std::cout << "==========SAVINGS==============================" << std::endl;

	Savings_Account s1{ "Mirko", 1000.0,5.0 };
	std::cout << s1 << std::endl;

	s1.deposit(1000.0);
	std::cout << s1 << std::endl;

	s1.withdraw(2000.0);
	std::cout << s1 << std::endl;

	s1.withdraw(1000.0);
	std::cout << s1 << std::endl;

	Account *s2 = new Savings_Account{ "Marko", 1000, 5 };
	s2->deposit(200);
	std::cout << *s2 << std::endl;
	s2->withdraw(1500);
	std::cout << *s2 << std::endl;

	delete s2;

	std::cout << "=================CHECKING=======================" << std::endl;

	Checking_Account c1{"Sper Mario",1000.0};
	c1.withdraw(900.0);
	std::cout << c1 << std::endl;

	std::cout << "=================TRUST=======================" << std::endl;

	Trust_Account tacc{ "Trust account",1000.0,0.05 };
	std::cout << tacc << std::endl;
	tacc.deposit(5000.0);
	std::cout << tacc << std::endl;
	tacc.withdraw(3000.0);
	std::cout << tacc << std::endl;
	tacc.withdraw(1000.0);
	std::cout << tacc << std::endl;
	tacc.withdraw(100.0);
	std::cout << tacc << std::endl;
	tacc.withdraw(100.0);
	std::cout << tacc << std::endl;
	tacc.withdraw(100.0);
	std::cout << tacc << std::endl;
}
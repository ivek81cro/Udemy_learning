#include"Savings_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include<iostream>

void do_withdraw(Account &ref, double amount)
{
	ref.withdraw(amount);
}

int main()
{
	Account *p1 = new Account();
	Account *p2 = new Checking_Account();
	Account *p3 = new Savings_Account();
	Account *p4 = new Trust_Account();

	p1->withdraw(100);
	p2->withdraw(100);
	p3->withdraw(100);
	p4->withdraw(100);

	//reference base class function
	do_withdraw(*p1, 100);
	do_withdraw(*p2, 100);
	do_withdraw(*p3, 100);
	do_withdraw(*p4, 100);

	std::cout << "\n=================Free mem=============" << std::endl;
	delete p1;
	delete p2;
	delete p3;
	delete p4;
}
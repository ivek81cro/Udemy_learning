#ifndef _SAVINGSACC_H_
#define _SAVINGSACC_H_
#include"Account.h"

class Savings_Account : public Account
{
public:
	double intrest_rate;
	void deposit(double ammount);
	void withdraw(double ammount);
	Savings_Account();
	~Savings_Account();
};

#endif
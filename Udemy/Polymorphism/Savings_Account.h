#ifndef _SAVINGSACC_H_
#define _SAVINGSACC_H_
#include"Account.h"

class Savings_Account : public Account
{

public:
	Savings_Account();
	virtual ~Savings_Account();

	virtual void withdraw(double amount);
};

#endif
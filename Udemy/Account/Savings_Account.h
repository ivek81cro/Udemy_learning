#ifndef _SAVINGSACC_H_
#define _SAVINGSACC_H_
#include"Account.h"

class Savings_Account : public Account
{
	friend std::ostream& operator<<(std::ostream& os, const Savings_Account& sa);
protected:
	double int_rate;
public:
	void deposit(double ammount);
	Savings_Account();
	Savings_Account(double balance, double intrest_rate);
	~Savings_Account();
};

#endif
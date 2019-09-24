#ifndef _SAVINGSACC_H_
#define _SAVINGSACC_H_
#include"Account.h"

class Savings_Account : public Account
{
	friend std::ostream& operator<<(std::ostream& os, const Savings_Account& sa);
protected:
	double int_rate;
public:
	bool deposit(double ammount);
	Savings_Account();
	Savings_Account(std::string name="Savings account", double balance=0.0, double intrest_rate=0.0);
	~Savings_Account();
};

#endif
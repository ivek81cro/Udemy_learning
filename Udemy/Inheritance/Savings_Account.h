#ifndef _SAVINGSACC_H_
#define _SAVINGSACC_H_
#include"Account.h"

class Savings_Account : public Account
{
protected:
	double int_rate;
public:
	virtual void print(std::ostream& os) const override;
	bool deposit(double amount);
	Savings_Account();
	Savings_Account(std::string name="Savings account", double balance=0.0, double intrest_rate=0.0);
	~Savings_Account();
};

#endif
#ifndef _SAVINGSACC_H_
#define _SAVINGSACC_H_
#include"Account.h"

class Savings_Account : public Account
{
protected:
	double int_rate;
public:
	Savings_Account(std::string name="Savings account", double balance=0.0, double intrest_rate=0.0);
	virtual ~Savings_Account()=default;

	virtual void print(std::ostream& os) const override;

	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
};

#endif
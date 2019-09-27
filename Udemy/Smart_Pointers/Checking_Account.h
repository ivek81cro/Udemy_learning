#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
private:
	static constexpr const char *_name = "Checking account";
	static constexpr double _fee = 1.5;

public:	
	Checking_Account(std::string name=_name, double balance=0.0);
	virtual ~Checking_Account();
	
	virtual void print(std::ostream& os) const override;

	virtual bool deposit(double ammount) override;
	virtual bool withdraw(double) override;
	
};

#endif // !_CHECKING_ACCOUNT_H_
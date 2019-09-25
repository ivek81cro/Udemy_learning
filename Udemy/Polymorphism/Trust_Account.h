#ifndef _TRUST_ACCOUNT_
#define _TRUST_ACCOUNT_
#include"Savings_Account.h"

class Trust_Account : public Savings_Account
{

public:
	Trust_Account();
	virtual ~Trust_Account();

	virtual void withdraw(double amount);
};

#endif // !_TRUST_ACCOUNT_
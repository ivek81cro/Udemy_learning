#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
	
public:
	Checking_Account();
	virtual ~Checking_Account();

	virtual void withdraw(double amount);
};

#endif // !_CHECKING_ACCOUNT_H_
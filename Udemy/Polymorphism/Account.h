#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>

class Account
{

public:
	Account();
	virtual ~Account();

	virtual void withdraw(double amount);
};

#endif


#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>

class Account
{
	friend std::ostream& operator<<(std::ostream& os, const Account& acc);
protected:
	double balance;
public:
	void deposit(double ammount);
	void withdraw(double ammount);
	Account(double balance);
	Account();
	~Account();
};

#endif


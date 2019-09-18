#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>

class Account
{
	friend std::ostream& operator<<(std::ostream& os, const Account& acc);
protected:
	std::string name;
	double balance;
public:
	bool deposit(double ammount);
	bool withdraw(double ammount);
	Account(std::string name = "Unnamed account", double balance = 0.0);
	double get_balance() const;
	~Account();
};

#endif


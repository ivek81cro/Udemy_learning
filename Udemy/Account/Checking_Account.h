#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
	friend std::ostream &operator<<(std::ostream& os, const Checking_Account &ca);
private:
	static constexpr const char *_name = "Checking account";
	static constexpr double fee = 1.5;
public:
	Checking_Account(std::string name=_name, double balance=0.0);
	bool withdraw(double);
	~Checking_Account();
};

#endif // !_CHECKING_ACCOUNT_H_
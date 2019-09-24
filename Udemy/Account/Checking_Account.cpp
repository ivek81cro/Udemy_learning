#include "Checking_Account.h"
#include"Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
	:Account{name, balance}
{
}

Checking_Account::~Checking_Account()
{
}

bool Checking_Account::withdraw(double ammount)
{
	ammount += _fee;
	return Account::withdraw(ammount);
}

std::ostream &operator<<(std::ostream& os, const Checking_Account &ca)
{
	os << "Checking account: " << ca.name << ": " << ca.balance;
	return os;
}
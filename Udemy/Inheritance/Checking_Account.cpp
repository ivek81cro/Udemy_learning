#include "Checking_Account.h"
#include"Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
	:Account{name, balance}
{
}

Checking_Account::~Checking_Account()
{
}


void Checking_Account::print(std::ostream& os) const
{
	os << "Checking account: " << name << ": " << balance;
}

bool Checking_Account::withdraw(double amount)
{
	amount += _fee;
	return Account::withdraw(amount);
}
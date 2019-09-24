#include "Trust_Account.h"
#include<iostream>


Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	:Savings_Account(name,balance, k_int_rate),num_withdrawals{0}
{
}

Trust_Account::~Trust_Account()
{
}

bool Trust_Account::deposit(double ammount)
{
	if (ammount >= k_bonus_limit)
		ammount += 50.0;

	return Savings_Account::deposit(ammount);
}

bool Trust_Account::withdraw(double ammount)
{
	if (num_withdrawals >= k_max_withdraw || ammount >= balance * k_max_withdraw_perc)
	{
		std::cout << "Withdraw......" << ammount
			<< "\nLimit exceeded" << std::endl;
		return false;
	}
	else 
	{
		++num_withdrawals;
		return Account::withdraw(ammount);
	}
}

std::ostream& operator<<(std::ostream& os, const Trust_Account& acc)
{
	os << acc.name << ": " << acc.balance << ": " << acc.int_rate << ": "
		<< acc.k_max_withdraw_perc*100<<"% "<<acc.num_withdrawals<<" withdrawals";
	return os;
}

#include "Trust_Account.h"
#include<iostream>


Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	:Savings_Account(name,balance, int_rate),num_withdrawals{0}
{
}

void Trust_Account::print(std::ostream& os) const
{
	os << name << ": " << balance << ": " << int_rate*100 << "% : "
		<< k_max_withdraw_perc * 100 << "% " << num_withdrawals << " withdrawals";
}

bool Trust_Account::deposit(double amount)
{
	if (amount >= k_bonus_limit)
		amount += 50.0;

	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
	if (num_withdrawals >= k_max_withdraw || amount >= balance * k_max_withdraw_perc)
	{
		std::cout << "Withdraw......" << amount
			<< "\nLimit exceeded" << std::endl;
		return false;
	}
	else 
	{
		++num_withdrawals;
		return Account::withdraw(amount);
	}
}

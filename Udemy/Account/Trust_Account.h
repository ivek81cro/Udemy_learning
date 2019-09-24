#ifndef _TRUST_ACCOUNT_
#define _TRUST_ACCOUNT_
#include"Savings_Account.h"

class Trust_Account : public Savings_Account
{
	friend std::ostream& operator<<(std::ostream& os, const Trust_Account& acc);
private:
	static constexpr const char *k_name = "Trust account";
	static constexpr double k_int_rate = 0.05;
	static constexpr int k_max_withdraw = 3;
	static constexpr double k_bonus = 50.0;
	static constexpr double k_bonus_limit = 5000.0;
	static constexpr double k_max_withdraw_perc = 0.2;
protected:
	int num_withdrawals;
public:
	Trust_Account(std::string name=k_name, double balance=0.0, double int_rate=k_int_rate);
	~Trust_Account();

	bool deposit(double ammount);

	bool withdraw(double ammount);
};

#endif // !_TRUST_ACCOUNT_
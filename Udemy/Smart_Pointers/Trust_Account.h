#ifndef _TRUST_ACCOUNT_
#define _TRUST_ACCOUNT_
#include"Savings_Account.h"

class Trust_Account : public Savings_Account
{
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
	virtual ~Trust_Account()=default;

	virtual void print(std::ostream& os) const override;

	virtual bool deposit(double amount) override;
	virtual bool withdraw(double amount) override;
};

#endif // !_TRUST_ACCOUNT_
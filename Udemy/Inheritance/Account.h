#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>

class I_Printable {
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
	virtual void print(std::ostream& os) const = 0;
};

class Account : public I_Printable
{
protected:
	std::string name;
	double balance;
public:
	virtual void print(std::ostream& os) const override;
	virtual bool deposit(double amount);
	virtual bool withdraw(double amount);
	Account(std::string name = "Unnamed account", double balance = 0.0);
	double get_balance() const;
	virtual ~Account();
};

#endif


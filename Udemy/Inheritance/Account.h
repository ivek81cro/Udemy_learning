#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>

class I_Printable {
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
	virtual void print(std::ostream& os) const = 0;
	virtual ~I_Printable() = default;
};

class Account : public I_Printable
{
protected:
	std::string name;
	double balance;

public:	
	Account(std::string name = "Unnamed account", double balance = 0.0);	
	virtual ~Account();

	virtual void print(std::ostream& os) const override;

	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
};

#endif


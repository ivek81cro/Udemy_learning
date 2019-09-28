#include"Savings_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include<iostream>
#include<vector>
#include<memory>
#include<iomanip>

int main()
{
	std::cout << std::setprecision(2);
	std::cout << std::fixed;
	//UNIQUE POINTERS

	std::unique_ptr<Account> ptr1 = std::make_unique<Trust_Account>("Thor");
	ptr1->deposit(200);
	std::cout << *ptr1 << std::endl;
	auto ptr2 = std::make_unique<Savings_Account>("Bamby", 3800, 0.03);

	std::vector<std::unique_ptr<Account>> vAcc;
	vAcc.push_back(std::move(ptr1));//can't be copied, CAN be moved
	vAcc.push_back(std::move(ptr2));
	vAcc.push_back(std::make_unique<Checking_Account>("Mario", 1000));
	vAcc.push_back(std::make_unique<Savings_Account>("Luigi", 5000, 0.02));
	vAcc.push_back(std::make_unique<Trust_Account>("Dino"));

	for (const auto &acc : vAcc)
		std::cout << *acc << std::endl;

	for (const auto &acc : vAcc)
		acc->deposit(5000);

	for (const auto &acc : vAcc)
		acc->withdraw(100);

	for (const auto &acc : vAcc)
		acc->withdraw(3000);

	for (const auto &acc : vAcc)
		std::cout << *acc << std::endl;

	//SHARED POINTERS

	/*std::vector<std::shared_ptr<Account>> vSacc;
	
	std::shared_ptr<Savings_Account> ptr1 = std::make_shared<Savings_Account>("Batman", 2000, 0.03);
	std::shared_ptr<Checking_Account> ptr2 = std::make_shared<Checking_Account>("Robin", 2000);

	vSacc.push_back(ptr1);
	vSacc.push_back(ptr2);

	for (const auto &acc : vSacc)
	{
		std::cout << *acc << std::endl;
		std::cout << "acc usage count: " << acc.use_count() << std::endl;
	}
	//smart pointer auto deletes
	{
		std::shared_ptr<Savings_Account> p3;
		p3 = ptr1;
		std::cout << "ptr1 usage count: " << ptr1.use_count() << std::endl;
	}

	std::cout << "ptr1 usage count: " << ptr1.use_count() << std::endl;*/
}
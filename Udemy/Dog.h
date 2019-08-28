#ifndef _DOG_H_
#define _DOG_H_
#include<string>
#include<iostream>

class Dog
{
	std::string name;
	int age;

public:
	Dog(std::string n="None", int a=0):name(n),age(a)
	{
		std::cout << "Constr called" << std::endl;
	}

	Dog(const Dog &source) :name(source.name), age(source.age) 
	{
		std::cout << "Copy called" << std::endl;
	}

	~Dog() 
	{
		std::cout << "Destr called" << std::endl;
	}

	std::string getName() { return name; }
	int getAge() { return age; }
};

#endif // !_DOG_H_


#include<iostream>
#include<cstring>
#include"MyString.h"

MyString::MyString():str{nullptr}
{
	str = new char[1];
	*str = '\0';
}

MyString::MyString(const char *s):str{nullptr}
{
	if (s == nullptr)
	{
		str = new char[1];
		str = '\0';
	}
	else
	{
		str = new char[std::strlen(s) + 1];
		std::strcpy(str,s);
	}
}

//copy constr
MyString::MyString(const MyString &src):str{nullptr}
{
	str = new char[std::strlen(src.str) + 1];
	std::strcpy(str, src.str);
}

//destr
MyString::~MyString()
{
	delete[] str;
}

//copy
MyString &MyString::operator=(const MyString &rhs)
{
	std::cout << "Copy assigment" << std::endl;
	if (this == &rhs)
		return *this;

	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(str, rhs.str);
	return *this;
}


//display
void MyString::display()const
{
	std::cout << str << ":" << get_length() << std::endl;
}

//getters
int MyString::get_length()const
{
	return strlen(str);
}

const char *MyString::get_str()const
{
	return str;
}
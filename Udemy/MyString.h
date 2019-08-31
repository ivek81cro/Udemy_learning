#ifndef _MYSTR_H_
#define _MYSTR_H_
#include<iostream>

class MyString
{	
private:
	char *str;
public:
	MyString();
	MyString(const char *s);
	MyString(const MyString &src);
	MyString(MyString &&source);//move constructor
	~MyString();

	MyString &operator=(const MyString &rhs);//copy assigment
	MyString &operator=(MyString &&rhs);//Move assignment
	
	friend std::ostream& operator<<(std::ostream& os, const MyString &rhs);
	friend std::istream& operator>>(std::istream& is, MyString &rhs);


	void display()const;

	int get_length()const;
	const char *get_str()const;
};

#endif // !_MYSTR_H_


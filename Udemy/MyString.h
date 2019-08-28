#ifndef _MYSTR_H_
#define _MYSTR_H_

class MyString
{
private:
	char *str;
public:
	MyString();
	MyString(const char *s);
	MyString(const MyString &src);
	~MyString();

	MyString &operator=(const MyString &rhs);

	void display()const;

	int get_length()const;
	const char *get_str()const;
};

#endif // !_MYSTR_H_


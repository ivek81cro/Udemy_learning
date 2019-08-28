#include"MyString.h"
#include<vector>
#include<iostream>

int main()
{
	MyString a{ "Hello" };
	MyString b;
	b = a;

	b = "This is a test";

	MyString empty;
	MyString larry{ "Larry" };
	MyString stooge{ larry };
	MyString stooges;

	empty = stooge;

	empty.display();
	larry.display();
	stooge.display();
	empty.display();

	stooges = "Larry, Moe and Curly";
	stooges.display();

	std::vector<MyString> stooges_vec;
	stooges_vec.push_back("Larry");
	stooges_vec.push_back("Moe");
	stooges_vec.push_back("Curly");

	std::cout << "===LOOP1=======================" << std::endl;

	for (const MyString &s : stooges_vec)
		s.display();

	std::cout << "===LOOP2=======================" << std::endl;

	for (MyString &s : stooges_vec)
		s = "Changed";

	std::cout << "===LOOP3=======================" << std::endl;

	for (MyString &s : stooges_vec)
		s.display();

}
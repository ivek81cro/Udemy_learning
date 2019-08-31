#include"MyString.h"
#include<vector>
#include<iostream>

int main()
{
	MyString larry{ "Larry" };
	MyString moe{ "Moe" };
	MyString curly;

	std::cout << "Enter first stooge name" << std::endl;
	std::cin >> curly;

	std::cout << larry << ',' << moe << ',' << curly << std::endl;
}
#include "Money.h"

Money::Money(int dollars, int cents) : dollars{ dollars }, cents{ cents } {}

Money::Money(int total) : dollars{ total / 100 }, cents{ total % 100 }  {}

Money operator+(const Money &lhs, const Money &rhs)
{
	int total = (lhs.dollars + rhs.dollars) * 100;
	total += lhs.cents + rhs.cents;
	return Money{ total };	
}

std::ostream& operator<<(std::ostream& os, const Money &m)
{
	return os << m.dollars << ' ' << m.cents;
}

int main()
{
	Money m{ 2000 };
	Money n{ 3765 };

	std::cout << m + n << std::endl;
}


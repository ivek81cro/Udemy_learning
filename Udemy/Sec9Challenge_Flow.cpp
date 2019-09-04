#include<iostream>
#include<vector>

int main()
{
	std::vector<int> list;

	std::cout << "\nP-Print numbers" << 
		"\nA-Add numbers" <<
		"\nM-Display mean of the numbers" << 
		"\nS-Display smallest number" <<
		"\nL-Display largest number" << 
		"\nQ-Quit" << std::endl;

	

	do
	{
		char s;
		std::cin >> s;

		if (s == 'P' || s == 'p')
		{
			if (list.size() == 0)
				std::cout << "List is empty" << std::endl;
			else
			{
				std::cout << '[';
				for (auto num : list)
					std::cout << num << ' ';
				std::cout << ']' << std::endl;
			}
		}
		else if (s == 'A' || s == 'a')
		{
			int n;
			std::cout << "Enter number: ";
			std::cin >> n;
			list.push_back(n);
		}
		else if (s == 'M' || s == 'm')
		{
			if (list.size() == 0)
				std::cout << "List is empty" << std::endl;
			else
			{
				int sum = 0;
				for (auto num : list)
					sum += num;
				std::cout << "Mean of numbers is: " << sum << std::endl;
			}
		}
		else if (s == 'S' || s == 's')
		{
			if (list.size() == 0)
				std::cout << "List is empty" << std::endl;
			else
			{
				int small = list.at(0);
				for (auto num : list)
					if (num < small)
						small = num;
				std::cout << "Smallest number is: " << small << std::endl;
			}
		}
		else if (s == 'L' || s == 'l')
		{
			if (list.size() == 0)
				std::cout << "List is empty" << std::endl;
			else
			{
				int large = list.at(0);
				for (auto num : list)
					if (num > large)
						large = num;
				std::cout << "Largest number is: " << large << std::endl;
			}
		}
		else
		{
			std::cout << "Unknown selection" << std::endl;
		}
	} while (s != 'Q' && s != 'q');
	
}
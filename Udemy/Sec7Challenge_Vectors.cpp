#include<iostream>
#include<vector>

int main()
{
	std::vector<int> vec1, vec2;

	vec1.push_back(10);
	vec1.push_back(20);

	std::cout << vec1.at(0) << ',' << vec1.at(1) << "->size:" << vec1.size() << std::endl;

	vec2.push_back(100);
	vec2.push_back(200);

	std::cout << vec2.at(0) << ',' << vec2.at(1) << "->size:" << vec2.size() << std::endl;

	std::vector<std::vector<int>> vector_2d;

	vector_2d.push_back(vec1);
	vector_2d.push_back(vec2);

	std::cout << vector_2d.at(0).at(0) << ',' << vector_2d.at(0).at(1) <<
		',' << vector_2d.at(1).at(0) << ',' << vector_2d.at(1).at(1) << 
		"->size:" << vector_2d.size() << std::endl;

	vec1.at(0) = 1000;

	std::cout << vector_2d.at(0).at(0) << ',' << vector_2d.at(0).at(1) <<
		',' << vector_2d.at(1).at(0) << ',' << vector_2d.at(1).at(1) <<
		"->size:" << vector_2d.size() << std::endl;

	std::cout << vec1.at(0) << ',' << vec1.at(1) << "->size:" << vec1.size() << std::endl;

	int amm;
	int fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;
	std::cout << "Enter ammount in cents:";
	std::cin >> amm;
	
	while (amm)
	{
		if (amm / 50)
		{
			++fifty; amm -= 50;
		}
		else if (amm / 20) 
		{
			++twenty; amm -= 20;
		}
		else if (amm / 10)
		{
			++ten; amm -= 10;
		}
		else if (amm / 5)
		{
			++five; amm -= 5;
		}
		else if (amm / 2)
		{
			++two; amm -= 2;
		}
		else
		{
			++one; amm -= 1;
		}
	}

	std::cout << "50:" << fifty << "\n20:" << twenty << "\n10:" << ten << "\n5:" << five
		<< "\n2:" << two << "\n1:" << one << std::endl;
}
#include<iostream>
#include"Dog.h"

void print_dog(Dog d)
{
	std::cout << d.getName() << ' ' << d.getAge() << std::endl;
}

int main()
{
	Dog d{ "Fifi", 5 };
	Dog d1{ "Pluto",7 };
	Dog *d2 = new Dog{ "Astor",7 };

	print_dog(d);
	print_dog(d1);
	print_dog(*d2);

	delete d2;
}
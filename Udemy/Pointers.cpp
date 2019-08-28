#include<iostream>

int *cretae_array(size_t size, size_t init)
{
	int *arr{ nullptr };
	arr = new int[size];
	for (int i{ 0 }; i < size; ++i)
		arr[i] = init;

	return arr;
}

int main()
{
	int *ptr{ nullptr };
	ptr = new int;

	std::cout << "Value of ptr is: " << ptr << std::endl;
	std::cout << "Address of ptr is: " << &ptr << std::endl;
	std::cout << "Size of ptr is: " << sizeof(ptr) << std::endl;
	std::cout << "Value of ptr after nullptr is: " << ptr << std::endl;

	while (true)
	{
		int x = 5;
		std::cout << "Address of x is: " << &x << std::endl;
		ptr = &x;
		break;
	}

	std::cout << "Dereference of ptr is: " << *ptr << std::endl;
	std::cout << "Value of ptr is: " << ptr << std::endl;
	//delete ptr;

	int *arr = cretae_array(100, 0);
	for (size_t i{ 0 }; i < 100; ++i)
		std::cout << arr[i] << ' ';

	delete[]arr;

}
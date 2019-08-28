#include<iostream>
#include<vector>

class DataObj
{
	int *data;
public:
	DataObj(int n);
	DataObj(const DataObj &src);
	DataObj(DataObj &&src) noexcept;
	~DataObj();
	int getData() { return *data; }
	void setData(int n) { *data = n; }
};

DataObj::DataObj(int n)
{
	data = new int; //heap
	*data = n;
}

//delegating constructor-makes new pointer for copy of data-proper copy constr.
DataObj::DataObj(const DataObj &src):DataObj{*src.data}
{
	std::cout << "Copy const called" << std::endl;
}

//*******PRODUCES ERROR**********uncomment for test
//when copy is deleted it free's original pointer and causes mam.leak
//DataObj::DataObj(const DataObj &src) :data(src.data) {}

//****************MOVE CONSTR*************
DataObj::DataObj(DataObj &&src) noexcept :data{src.data}
{
	src.data = nullptr;
	std::cout << "Move constr" << std::endl;
}

DataObj::~DataObj()
{
	if (data != nullptr)
		std::cout << "Freeing data for: " << *data << std::endl;
	else
		std::cout << "Freeing data for nullptr" << std::endl;
	delete data;
	data = nullptr;
}

void print_data(DataObj d)
{
	std::cout << d.getData() << std::endl;
	//deletes copy const. and with wrong copy constr. produces mam.leak and error.
}

int main()
{
	DataObj d{ 5 };
	print_data(d);

	DataObj d1{ d };
	d1.setData(1000);
	print_data(d1);

	//Move constructor usage
	std::vector<DataObj> vec;

	vec.push_back(DataObj{ 10 });
	vec.push_back(DataObj{ 20 });
	vec.push_back(DataObj{ 30 });

}
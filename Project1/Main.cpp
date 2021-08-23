#include<iostream>

class base
{
private:
	int aa = 10, bb = 20;
public:
	void print()
	{
		std::cout << aa << std::endl << bb << std::endl;
	}
};

class derived :public base
{
public:
	void print()
	{
		std::cout << "Nothing's Here" << std::endl;
	}
};

int main()
{
	derived d1;

	d1.print();
	d1.base::print();
}
	

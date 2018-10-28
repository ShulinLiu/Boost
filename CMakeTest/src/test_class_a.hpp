#ifndef TEST_CLASS_A
#define TEST_CLASS_A

#include <iostream>

class A
{
private:
	double val;
public:

	A(const double& myval):val(myval)
	{
		std::cout << "Constructor of A " << std::endl;
	}

	~A()
	{
		std::cout << "Destructor of A with value: " << val<< std::endl;
	}

	double getvalue() const
	{return val;}
};

#endif
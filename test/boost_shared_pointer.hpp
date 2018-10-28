#include "test_class_a.hpp"
#include <iostream>
# include <boost/shared_ptr.hpp>

void testSharedPtra()
{
	A* ptr_myA = new A(1.0);
	delete ptr_myA;
}

void testSharedPtrb()
{
	A* ptr_myA = new A(1.0);
	throw "Error occured for class A.";
	delete ptr_myA;
}

void testSharedPtrc()
{
	boost::shared_ptr<A> bptr_myA(new A(1.0));
}

void testSharedPtrd()
{
	A* ptr_myA = new A(1.0);
	boost::shared_ptr<A> bptr_myA(ptr_myA);
	std::cout << bptr_myA->getvalue() << std::endl;
}

void testSharedPtre()
{
	boost::shared_ptr<A> bptr_myA(new A(1.0));
	throw "Error occured for class A.";
}

void testSharedPtrf()
{
	A* ptr_myA = new A(1.0);
	ptr_myA = new A(2.0);
	delete ptr_myA;
}

void testSharedPtrg()
{
	boost::shared_ptr<A> bptr_myA(new A(1.0));
	bptr_myA.reset(new A(2.0));
}
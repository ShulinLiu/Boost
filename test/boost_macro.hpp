#include <iostream>
#include <boost/current_function.hpp>
#include <boost/foreach.hpp>
#include <boost/static_assert.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <vector>

#define MY_NUM 1300

void testMacroa(){
	std::cout << " You have called: " << BOOST_CURRENT_FUNCTION << std::endl;
}

void testMacrob()
{
	BOOST_STATIC_ASSERT(MY_NUM != 1400);
}

void testMacroc()
{
	std::vector<double> myvec(10);

	BOOST_FOREACH(double& x, myvec) x = 10.0;
	BOOST_FOREACH(double x, myvec) std::cout << x << std::endl;
}

void testMacrod()
{
	BOOST_ERROR("Failure of this function ");
	double x = 0.0;
	BOOST_TEST(x!=0.0);
}
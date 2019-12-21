#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Testing of testing
#include <boost/test/included/unit_test.hpp> 

int subtract(int a, int b) {
	return a-b;
}

BOOST_AUTO_TEST_CASE(subtractTest)
{
	BOOST_CHECK(subtract(3,2) == 0);
}

// compile:		g++ -o test test.cpp
// run:			./test --log_level=test_suite


//#include <boost/test/test_tools.hpp> // lecture
//#include <boost/test/unit_test.hpp> // https://www.boost.org/doc/libs/1_66_0/libs/test/doc/html/boost_test/usage_variants.html
//#include <boost/test/included/unit_test.hpp> // Stack Overflow
/* [lecture 8]
 * BOOST_WARN / BOOST_CHECK / BOOST_REQUIRE     | slide 15
 * _BITWISE_EQUAL / _EQUAL / _SMALL / _CLOSE    | slide 16
 * _NO_THROW / _THROW / _EXCEPTION              | slide 17
 * _MESSAGE / BOOST_ERROR / BOOST_FAIL          | slide 18
 */
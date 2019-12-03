#ifndef COMMON_H
#define COMMON_H

#include <QDebug> // qDebug()<<"Hello!";

#include <boost/log/trivial.hpp>
/* [lecture 8, slide 31]
 * BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
 * BOOST_LOG_TRIVIAL(info) << "An informational severity message";
 * BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
 * BOOST_LOG_TRIVIAL(error) << "An error severity message";
 */

//#define BOOST_TEST_MODULE test module name
//#define BOOST_TEST_DYN_LINK
//#include <boost/test/test_tools.hpp> // lecture
//#include <boost/test/unit_test.hpp> // https://www.boost.org/doc/libs/1_66_0/libs/test/doc/html/boost_test/usage_variants.html
//#include <boost/test/included/unit_test.hpp> // Stack Overflow
/* [lecture 8]
 * BOOST_WARN / BOOST_CHECK / BOOST_REQUIRE     | slide 15
 * _BITWISE_EQUAL / _EQUAL / _SMALL / _CLOSE    | slide 16
 * _NO_THROW / _THROW / _EXCEPTION              | slide 17
 * _MESSAGE / BOOST_ERROR / BOOST_FAIL          | slide 18
 */

#endif // COMMON_H

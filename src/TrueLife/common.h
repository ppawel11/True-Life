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

#include <boost/test/test_tools.hpp>
/* [lecture 8]
 * BOOST_WARN / BOOST_CHECK / BOOST_REQUIRE     | slide 15
 * _BITWISE_EQUAL / _EQUAL / _SMALL / _CLOSE    | slide 16
 * _NO_THROW / _THROW / _EXCEPTION              | slide 17
 * _MESSAGE / BOOST_ERROR / BOOST_FAIL          | slide 18
 */

#endif // COMMON_H

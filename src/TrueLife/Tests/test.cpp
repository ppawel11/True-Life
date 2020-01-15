/****************************************************************
 *
 * compile (old):
 *      g++ -o test test.cpp
 * compile (new):
 *      qmake -o Makefile test.pro [only after change of .pro file]
 *      make
 * run:
 *      ./test --log_level=test_suite
 *
 * Boost documentary:
 * https://www.boost.org/doc/libs/1_72_0/libs/test/doc/html/index.html
 *
 * From lecture 8:
 * BOOST_WARN / BOOST_CHECK / BOOST_REQUIRE     | slide 15
 * _BITWISE_EQUAL / _EQUAL / _SMALL / _CLOSE    | slide 16
 * _NO_THROW / _THROW / _EXCEPTION              | slide 17
 * _MESSAGE / BOOST_ERROR / BOOST_FAIL          | slide 18
 *
*************************************************************** */

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Testing of testing
#include <boost/test/included/unit_test.hpp>

#include "../View/SimuElements.h"

int amountOfAnimals() {
    SimuElements* simu_elem = SimuElements::getInstance();
    simu_elem->addElement(ElementType::PREDATOR);
    simu_elem->addElement(ElementType::HERBIVORE);
    simu_elem->addElement(ElementType::PREDATOR);
    simu_elem->addElement(ElementType::WATER);
    std::map<int, SimuEllipse*> animals = simu_elem->getAnimals();
    return animals.size();
}

BOOST_AUTO_TEST_CASE(amount_of_animals_test)
{
    BOOST_REQUIRE(amountOfAnimals() == 3);
    BOOST_WARN_MESSAGE(false, "Wymuszony warning :)");
}

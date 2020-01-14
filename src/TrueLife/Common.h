/**
 * @file Common.h
 * @author Grzegorz Fijałkowski
 */
#ifndef COMMON_H
#define COMMON_H

/* *BOOST.LOG* [lecture 8, slide 31]
 * BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
 * BOOST_LOG_TRIVIAL(info) << "An informational severity message";
 * BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
 * BOOST_LOG_TRIVIAL(error) << "An error severity message";
 */
#include <boost/log/trivial.hpp>
#include <boost/shared_ptr.hpp>

#include <QDebug> // qDebug()<<"Hello!";
#include <QColor>

/**
 * @brief Types of elements in simulation
 */
enum ElementType {PREDATOR, HERBIVORE, WATER, FOOD};

/**
 * @brief Move states of animals
 */
enum MoveState {WALK, SLEEP, CHASE, ESCAPE};

/**
 * @brief Map size and minimal free space border around it
 */
namespace Map {
    static const int WIDTH = 1000;
    static const int HEIGHT = 500;

    /**
     * @brief free space between map and graphics field border
     */
    static const int BORDER = 10;
}

/**
 * @brief Animal size
 */
namespace Ani {
    static const int WIDTH = 15;
    static const int HEIGHT = 15;
}

/**
 * @brief Water size
 */
namespace Wat {
    static const int WIDTH = 50;
    static const int HEIGHT = 33;
}

/**
 * @brief Food size
 */
namespace Foo {
    static const int WIDTH = 10;
    static const int HEIGHT = 10;
}

/**
 * @brief Holds our colour schemes.
 */
namespace OurColors {
    /**
     * @brief cool blue color
     */
    static const QColor blue = QColor("#2F82FF");

    /**
     * @brief cool green color
     */
    static const QColor green = QColor("#01D263");

    /**
     * @brief cool orange color
     */
    static const QColor orange = QColor("#EDB727");

    /**
     * @brief cool red color
     */
    static const QColor red = QColor("#C94E4E");

    /**
     * @brief color of the background behind the symulation map
     */
    static const QColor back = QColor("#FFF3CA");

    /**
     * @brief color of the symulation map
     */
    static const QColor map = QColor("#DDD383");
}

#endif // COMMON_H

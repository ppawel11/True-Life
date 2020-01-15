#ifndef ANIMALMODEL_H
#define ANIMALMODEL_H

#include "../Common.h"

/**
 * @brief Model of Animal, reduces Animal only to params needed by View
 */
struct AnimalModel{
    AnimalModel(int id, double x, double y, ElementType type)
        : id(id), x(x), y(y), type(type) {}

    AnimalModel(int id, double x, double y)
        : id(id), x(x), y(y) {}

    AnimalModel(double x, double y, ElementType type)
        : x(x), y(y), type(type) {}

    int id;
    double x, y;
    ElementType type;
};

#endif // ANIMALMODEL_H

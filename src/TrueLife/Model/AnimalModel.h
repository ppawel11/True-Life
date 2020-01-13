#ifndef ANIMALMODEL_H
#define ANIMALMODEL_H

#include "Common.h"

/**
 * @brief Model of Animal, reduces Animal only to params needed by View
 */
struct AnimalModel{
    AnimalModel(int id, int x, int y, ElementType type)
        : id(id), x(x), y(y), type(type) {}

    AnimalModel(int id, int x, int y)
        : id(id), x(x), y(y) {}

    AnimalModel(int x, int y, ElementType type)
        : x(x), y(y), type(type) {}

    int id, x, y;
    ElementType type;
};

#endif // ANIMALMODEL_H

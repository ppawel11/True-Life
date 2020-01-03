#ifndef ANIMALMODEL_H
#define ANIMALMODEL_H

#include "Common.h"


struct AnimalModel{
    AnimalModel(int id, int x, int y, ElementType type): id(id), x(x), y(y), type(type) {}
    int id, x, y;
    ElementType type;
};

#endif // ANIMALMODEL_H

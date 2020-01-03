#ifndef PREDATOR_H
#define PREDATOR_H

#include "Animal.h"

class Predator: public Animal
{
public:
    Predator(int id, int x, int y): Animal(id, x, y) {}
    Predator(AnimalModel * am): Animal(am->id, am->x, am->y) {}
};

#endif // PREDATOR_H

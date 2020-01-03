#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "Animal.h"

class Herbivore: public Animal
{
public:
    Herbivore(int id, int x, int y): Animal(id, x, y) {}
    Herbivore(AnimalModel * am): Animal(am->id, am->x, am->y) {}
};

#endif // HERBIVORE_H

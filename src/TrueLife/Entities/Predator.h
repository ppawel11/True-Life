#ifndef PREDATOR_H
#define PREDATOR_H

#include "Animal.h"
#include "../Model/AnimalModel.h"

#include "Herbivore.h"


/**
 * @brief Predator, kind of animal which eats Herbivore
 */

class Predator: public Animal
{
public:
    Predator(int id, int x, int y): Animal(id, x, y) {}
    Predator(AnimalModel * am): Animal(am->id, am->x, am->y) {}

    void accept(Animal*);

    virtual void interact(Herbivore *);
    virtual void interact(Predator *);
};

#endif // PREDATOR_H

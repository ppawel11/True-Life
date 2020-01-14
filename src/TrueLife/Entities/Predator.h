#ifndef PREDATOR_H
#define PREDATOR_H

#include "Animal.h"
#include <QDebug>

/**
 * @brief Predator, kind of animal which eats Herbivore
 */

class Predator: public Animal
{
public:
    Predator(int id, double x, double y): Animal(id, x, y) {}
    Predator(AnimalModel * am): Animal(am->id, am->x, am->y) {}

    virtual AnimalModel* accept(Animal *);
    virtual AnimalModel* interact(Herbivore *);
    virtual AnimalModel* interact(Predator *);
};

#endif // PREDATOR_H

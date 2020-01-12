#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "Animal.h"
#include "../Model/AnimalModel.h"
#include "Food.h"
//#include "Use-cases/AnimalVisitator.h"

/**
 * @brief Herbivore, kind of animal which is eaten by Predator and eats randomly generated food
 */

class Herbivore: public Animal, public Food, public AnimalVisitator
{
public:
    Herbivore(int id, int x, int y): Animal(id, x, y), Food(2) {}
    Herbivore(AnimalModel * am): Animal(am->id, am->x, am->y), Food(2) {}

    virtual void beEaten();

    void accept(AnimalVisitator*);

    virtual void interact(Predator*);
    virtual void interact(Herbivore*);
};

#endif // HERBIVORE_H

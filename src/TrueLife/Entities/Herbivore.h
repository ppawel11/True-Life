/**
 * @author Paweł Lech
 */
#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "Animal.h"
#include "Food.h"

#define INIT_CALORIES 100

/**
 * @brief Herbivore, kind of animal which is eaten by Predator and eats randomly generated food
 */

class Herbivore: public Animal, public Food
{
public:
    Herbivore(int id, double x, double y): Animal(id, x, y), Food(INIT_CALORIES) {}
    Herbivore(AnimalModel * am): Animal(am->id, am->x, am->y), Food(INIT_CALORIES) {}

    virtual void beEaten();

    virtual AnimalModel* accept(Animal*);
    virtual AnimalModel* interact(Predator*);
    virtual AnimalModel* interact(Herbivore*);
};

#endif // HERBIVORE_H

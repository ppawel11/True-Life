#ifndef ANIMALVISITATOR_H
#define ANIMALVISITATOR_H

//#include "Entities/Herbivore.h"
//#include "Entities/Predator.h"

class Predator;
class Herbivore;

class AnimalVisitator
{
public:
    virtual void interact(Predator*) = 0;
    virtual void interact(Herbivore*) = 0;
};

#endif // ANIMALVISITATOR_H

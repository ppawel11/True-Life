#include "Predator.h"
#include "Herbivore.h"

AnimalModel* Predator::accept(Animal * av){
    return av->interact(this);
}

AnimalModel* Predator::interact(Herbivore * prey){
    energy += prey->getCalories();
    prey->beEaten();
    return nullptr;
}

AnimalModel* Predator::interact(Predator * pred){
    return cooperate(pred, PREDATOR);
}

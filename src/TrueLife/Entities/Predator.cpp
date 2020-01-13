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
    if(this->isReady() && pred->isReady()){
        this->unready();
        pred->unready();
        return new AnimalModel(this->getX(), this->getY(), PREDATOR);
    }
    return nullptr;
}

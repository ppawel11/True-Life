#include "Predator.h"
#include "Herbivore.h"

void Predator::interact(Herbivore * prey){
    energy += prey->getCalories();
    prey->beEaten();
}

void Predator::interact(Predator *){

}

void Predator::accept(AnimalVisitator * av){
    av->interact(this);
}

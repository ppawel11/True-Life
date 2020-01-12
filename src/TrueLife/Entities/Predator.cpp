#include "Predator.h"

void Predator::interact(Herbivore * prey){
    energy += prey->getCalories();
    prey->beEaten();
}

void Predator::interact(Predator *){

}

void Predator::accept(Animal * av){
    av->interact(this);
}

#include "Herbivore.h"
#include "Predator.h"

void Herbivore::beEaten(){
    die();
}

void Herbivore::accept(AnimalVisitator * av){
    av->interact(this);
}

void Herbivore::interact(Herbivore *){
}

void Herbivore::interact(Predator * pred){
    pred->interact(this);
}

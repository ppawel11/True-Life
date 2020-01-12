#include "Herbivore.h"

void Herbivore::beEaten(){
    die();
}

void Herbivore::accept(Animal * av){
    av->interact(this);
}

void Herbivore::interact(Herbivore *){
}

void Herbivore::interact(Predator * pred){
    pred->interact(this);
}

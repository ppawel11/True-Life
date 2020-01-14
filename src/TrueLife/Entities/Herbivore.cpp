/**
 * @author Paweł Lech
 */
#include "Herbivore.h"
#include "Predator.h"

void Herbivore::beEaten(){
    die();
}

AnimalModel* Herbivore::accept(Animal * av){
    return av->interact(this);
}

AnimalModel* Herbivore::interact(Herbivore * herb){
    return cooperate(herb, HERBIVORE);
}

AnimalModel* Herbivore::interact(Predator * pred){
    return pred->interact(this);
}

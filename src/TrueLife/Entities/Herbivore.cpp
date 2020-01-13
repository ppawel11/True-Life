#include "Herbivore.h"
#include "Predator.h"

void Herbivore::beEaten(){
    die();
}

AnimalModel* Herbivore::accept(Animal * av){
    return av->interact(this);
}

AnimalModel* Herbivore::interact(Herbivore * herb){
    if (this->isReady() && herb->isReady()){
        this->unready();
        herb->unready();
        return new AnimalModel(this->getX(), this->getY(), HERBIVORE);
    }
    return nullptr;
}

AnimalModel* Herbivore::interact(Predator * pred){
    return pred->interact(this);
}

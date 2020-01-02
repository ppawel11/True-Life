#include "environment.h"

Environment::Environment(Controller * contr, boost::shared_ptr<TimeWizard> wizard) : Observer(contr), TimeObserver(wizard) {
    contr->attach_env(this);
}

void Environment::addAnimal(Animal * animal){
    animals.push_back(animal);
}

void Environment::moveAnimals(){
    for(auto &animal : animals){
        animal->step();
    }
}

void Environment::showAnimals(){
    for(auto &animal : animals){
        animal->show();
    }
}

void Environment::update(boost::shared_ptr<InitDataModel> m){
    for(auto animal : m->animals)
        addAnimal(new Animal(animal));
}

void Environment::timeTick(){
    moveAnimals();
    showAnimals();
}

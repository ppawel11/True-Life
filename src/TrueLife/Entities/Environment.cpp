#include "Environment.h"

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

void Environment::update(boost::shared_ptr<EnvironmentDataModel> m){
    for(auto animal_model : m->animals)
        addAnimal(animal_factory.createAnimal(animal_model));
}

void Environment::timeTick(){
    moveAnimals();
    showAnimals();
}

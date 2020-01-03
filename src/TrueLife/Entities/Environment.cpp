#include "Environment.h"

Environment::Environment(Controller * contr) : Observer(contr) {
//    contr->attach_env(this);
}

Environment::Environment(const Environment &toCopy)
    : Observer(toCopy.controller)
{
//    toCopy.controller->attach_env(this);
    std::cout<<"Utworzono kopię enva"<<std::endl;
}

Environment::~Environment()
{
    std::cout<<"Usunięto enva"<<std::endl;
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

#include "Environment.h"

Environment::Environment(Controller * contr) : Observer(contr) {}

//Environment::Environment(const Environment &toCopy)
//    : Observer(toCopy.controller)
//{
//    std::cout<<"Kopia Environment utworzona"<<std::endl;
//}

Environment::~Environment()
{
    std::cout<<"Environment usunięty"<<std::endl;
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

void Environment::update(data_ptr m){
    for(auto animal_model : m->animals)
        addAnimal(animal_factory.createAnimal(animal_model));
}

void Environment::timeTick(){
    moveAnimals();
    showAnimals();
//    controller->notify_window();
}

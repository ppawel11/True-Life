#include "environment.h"

//Environment::Environment() {}

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

void Environment::update(InitDataModel * m){
    cout<<"notified"<<endl;
    for(auto animal : m->animals)
        addAnimal(animal);
}

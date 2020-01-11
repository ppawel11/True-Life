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

void Environment::moveAnimal(Animal* animal, int time_tick){
    if ((random() % 100) < animal->getMobility())
        animal->changeDirectionRandomly();
    if (time_tick % (MAX_VELOCITY - animal->getVelocity() + 1) == 0){
        animal->step();
        animal->reduceEnergy();
    }
}

void Environment::interactAnimals(std::vector<Animal*>::iterator animal_iterator){
    if(AnimalVisitator *p = dynamic_cast<AnimalVisitator*>((*animal_iterator))){
        auto it = animal_iterator;
        while(++it != animals.end())
            if (areClose((*animal_iterator), (*it)))
                (*it)->accept(p);
    }
}

void Environment::updateAnimals(int time_tick){
    for(auto animal_iterator = animals.begin(); animal_iterator != animals.end(); ++animal_iterator){

        if ((*animal_iterator)->isDead()){
            animals.erase(animal_iterator--);
            continue;
        }

        moveAnimal(*animal_iterator, time_tick);
        interactAnimals(animal_iterator);
    }
}

void Environment::showAnimals(){
    for(auto &animal : animals){
        animal->show();
    }
}

bool Environment::areClose(Animal* animal1, Animal* animal2){
    if((fabs(animal1->getX() - animal2->getX()) < 10.0) && (fabs(animal1->getY() - animal2->getY()) < 10.0))
        return true;
    return false;
}

data_ptr Environment::createDataModel()
{
    data_ptr model(new EnvironmentDataModel());
    for(auto an : animals){
        model->animals.push_back(
                    new AnimalModel(
                                an->getId(),
                                an->getX(),
                                an->getY()
                    ));
    }
    return model;
}

void Environment::update(data_ptr m){
    for(auto animal_model : m->animals)
        addAnimal(animal_factory.createAnimal(animal_model));
}

void Environment::timeTick(int time_tick){
    updateAnimals(time_tick);
    controller->notifySimu(createDataModel());
}

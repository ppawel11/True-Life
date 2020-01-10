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

void Environment::moveAnimals(int time_tick){
    for(auto &animal : animals){
        if (time_tick % (MAX_VELOCITY - animal->getVelocity() + 1) == 0)
            animal->step();
    }
}

void Environment::showAnimals(){
    for(auto &animal : animals){
        animal->show();
    }
}

boost::shared_ptr<EnvDataModel> Environment::createDataModel()
{
    boost::shared_ptr<EnvDataModel> model(new EnvDataModel());
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

void Environment::update(boost::shared_ptr<EnvDataModel> m){
    for(auto animal_model : m->animals)
        addAnimal(animal_factory.createAnimal(animal_model));
}

void Environment::timeTick(int time_tick){
    moveAnimals(time_tick);
    controller->notifySimu(createDataModel());
}

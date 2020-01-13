#include "Environment.h"

Environment::Environment(Controller * contr) : Observer(contr) {}

Environment::~Environment()
{
    std::cout<<"Environment usunięty"<<std::endl;
}

void Environment::addAnimal(Animal * animal){
    animals.push_back(animal);
}

void Environment::moveAnimal(Animal* animal, int time_tick){
    if (time_tick % (MAX_VELOCITY - animal->getVelocity() + 1) == 0){
        if ((random() % 100) < animal->getMobility())
            animal->changeDirectionRandomly();
        animal->step();
        animal->reduceEnergy();
    }
}

void Environment::interactAnimals(std::vector<Animal*>::iterator animal_iterator){
    auto it = animal_iterator;
    while(++it != animals.end())
        if (areClose((*animal_iterator), (*it))){
            AnimalModel* new_born = (*it)->accept((*animal_iterator));
            if (new_born != nullptr)
                new_borns.push_back(new_born);
        }

}

void Environment::updateAnimals(int time_tick){
    for(auto animal_iterator = animals.begin();
        animal_iterator != animals.end(); ++animal_iterator){

        if ((*animal_iterator)->isDead()){
            died.push_back((*animal_iterator)->getId());
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

boost::shared_ptr<EnvDataModel> Environment::createDataModel()
{
    boost::shared_ptr<EnvDataModel> model(new EnvDataModel());
    for(auto an : animals){
        model->alive.push_back(
            new AnimalModel(
                an->getId(),
                an->getX(),
                an->getY()
            ));
    }
    model->born = new_borns;
    model->dead_ids = died;
    died.clear();
    new_borns.clear();
    return model;
}

void Environment::update(boost::shared_ptr<EnvDataModel> data){
    for(auto animal_model : data->alive)
        addAnimal(animal_factory.createAnimal(animal_model));
    for(auto animal_model : data->born){
        addAnimal(animal_factory.createAnimal(animal_model));
    }
}

void Environment::timeTick(int time_tick){
    updateAnimals(time_tick);
    controller->notifySimu(createDataModel());
}

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include "Animal.h"
#include "Use-cases/Observer.h"
#include "Model/EnvironmentDataModel.h"
#include "Use-cases/TimeObserver.h"
#include <iostream>
#include "Use-cases/AnimalFactory.h"

using namespace std;

/**
 * @brief Environment brain, containing all animals and managing them
 */


class Environment: public Observer, public TimeObserver{
private:
    vector<Animal*> animals;
    AnimalFactory animal_factory;
public:
    Environment(Controller * contr, boost::shared_ptr<TimeWizard> wizard);
    void addAnimal(Animal*);
    void moveAnimals();
    void showAnimals(); /* only for debuging */
    virtual void update(boost::shared_ptr<EnvironmentDataModel>);
    virtual void timeTick();
};

#endif // ENVIRONMENT_H

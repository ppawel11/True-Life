#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include "animal.h"
#include "Use-cases/observer.h"
#include "Model/initdatamodel.h"
#include "Use-cases/timeobserver.h"
#include <iostream>

using namespace std;

/**
 * @brief Environment brain, containing all animals and managing them
 */


class Environment: public Observer, public TimeObserver{
private:
    vector<Animal*> animals;
public:
    Environment(Controller * contr, boost::shared_ptr<TimeWizard> wizard);
    void addAnimal(Animal*);
    void moveAnimals();
    void showAnimals(); /* only for debuging */
    virtual void update(boost::shared_ptr<InitDataModel>);
    virtual void timeTick();
};

#endif // ENVIRONMENT_H

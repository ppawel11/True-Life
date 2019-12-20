#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include "animal.h"
#include "Use-cases/observer.h"
#include "Model/initdatamodel.h"
#include <iostream>

using namespace std;

/**
 * @brief Environment brain, containing all animals and managing them
 */


class Environment: public Observer{
private:
    vector<Animal*> animals;
public:
    Environment(Controller * contr): Observer(contr) {}
    void addAnimal(Animal*);
    void moveAnimals();
    void showAnimals(); /* only for debuging */
    virtual void notify(InitDataModel*);
};

#endif // ENVIRONMENT_H

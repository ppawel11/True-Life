#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include <iostream>

#include "Animal.h"
#include "Model/EnvironmentDataModel.h"
#include "Use-cases/Observer.h"
#include "Use-cases/TimeObserver.h"
#include "Use-cases/AnimalFactory.h"

using namespace std;

/**
 * @brief Environment brain, containing all animals and managing them
 */


class Environment: public Observer, public TimeObserver {
private:
    vector<Animal*> animals;
    AnimalFactory animal_factory;
public:
    Environment(Controller * contr);

    /**
     * @brief Copy constructor
     * @param toCopy instance to copy
     *
     * Needed to make unique_ptr.
     */
    Environment(const Environment &toCopy);
    ~Environment();

    void addAnimal(Animal*);
    void moveAnimals();
    void showAnimals(); /* only for debuging */
    virtual void update(boost::shared_ptr<EnvironmentDataModel>);
    virtual void timeTick();
};

#endif // ENVIRONMENT_H

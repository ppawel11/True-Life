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

    /**
     * @brief adds pointer to next Animal to animals vector of Environment
     */
    void addAnimal(Animal*);
    /**
     * @brief Move all Animals using Animal::step() method
     */
    void moveAnimals();
    void showAnimals(); /* only for debuging */
    /**
     * @brief Gets initial data, used to create first set of Animals
     */
    virtual void update(boost::shared_ptr<EnvironmentDataModel>);
    /**
     * @brief Run by TimeWizard, runs moveAnimals method periodically
     */
    virtual void timeTick();
};

#endif // ENVIRONMENT_H

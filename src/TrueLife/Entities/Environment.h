#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <vector>
#include <iostream>
#include <boost/shared_ptr.hpp>
#include <cmath>

#include "Animal.h"
#include "Model/EnvDataModel.h"
#include "Use-cases/Observer.h"
#include "Use-cases/TimeObserver.h"
#include "Use-cases/AnimalFactory.h"

/**
 * @brief Environment brain, containing all animals and managing them
 */
class Environment: public Observer, public TimeObserver {
private:
    std::vector<Animal*> animals;
    AnimalFactory animal_factory;

public:
    Environment(Controller * contr);

//    /**
//     * @brief Copy constructor
//     * @param toCopy instance to copy
//     *
//     * Needed to make unique_ptr.
//     */
//    Environment(const Environment &toCopy);

    ~Environment();

    /**
     * @brief adds pointer to next Animal to animals vector of Environment
     */
    void addAnimal(Animal*);

    /**
     * @brief Move all Animals using Animal::step() method
     */
    void moveAnimals(int time_tick);
    /**
     * @brief Checks if animal
     */
    Animal* detectColision(Animal*);

    void showAnimals(); /* only for debuging */

    boost::shared_ptr<EnvDataModel> createDataModel();

    void updateAnimals(int);

    void moveAnimal(Animal*, int);

    void interactAnimals(std::vector<Animal*>::iterator);

    /**
     * @brief Gets initial data, used to create first set of Animals
     */
    virtual void update(boost::shared_ptr<EnvDataModel>);

    bool areClose(Animal*, Animal*);

    /**
     * @brief Run by TimeWizard, runs moveAnimals method periodically
     */
    virtual void timeTick(int tick_counter);
};

#endif // ENVIRONMENT_H

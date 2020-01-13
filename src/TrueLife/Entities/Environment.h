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
    /**
     * @brief Currently living animals
     */
    std::vector<Animal*> animals;
    /**
     * @brief Before they are added to animals vector they need to recive their unique ID inside View
     */
    std::vector<AnimalModel*> new_borns;
    /**
     * @brief IDs of Animals which need to be removed from the view because they died
     */
    std::vector<int> died;
    /**
     * @brief Animal factory is used to convert AnimalModel into Animal when reciving intial data from view
     * also to add new_borns Animals when they recived their ID value inside View
     */
    AnimalFactory animal_factory;

public:
    Environment(Controller * contr);

    ~Environment();
    /**
     * @brief adds pointer to next Animal to animals vector
     */
    void addAnimal(Animal*);
    /**
     * @brief Creates EnvDataModel which is send to View
     */
    boost::shared_ptr<EnvDataModel> createDataModel();
    /**
     * @brief Performs periodic function on every animal (reducing ready_cooldown, looking for mates etc)
     */
    void updateAnimals(int);
    /**
     * @brief Move an Animal using Animal::step() method, how often it moves specific animal depends on its velocity
     */
    void moveAnimal(Animal*, int);
    /**
     * @brief Make an animal interact with every other animal in the env
     */
    void interactAnimals(std::vector<Animal*>::iterator);
    /**
     * @brief Gets initial data, used to create first set of Animals and later to add new born Animals to the animals vector
     */
    virtual void update(boost::shared_ptr<EnvDataModel>);
    /**
     * @brief Run by TimeWizard, runs updateAnimals method periodically
     */
    virtual void timeTick(int tick_counter);

    void showAnimals(); /* only for debuging */
};

#endif // ENVIRONMENT_H

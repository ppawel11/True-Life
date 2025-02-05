#ifndef OBSERVER_H
#define OBSERVER_H

#include <Controller/Controller.h>

/**
 * @brief Observer class from which Environment and MainWindow derive
 * Enables communication between those two with Controller in between
 */

class Controller;
class SpecificAnimalModel;

class Observer
{
protected:
    Controller* controller;
public:
    Observer(Controller*);
    /**
     * @brief Gives information about Aniamls currently living in the simulation
     */
    virtual void update(boost::shared_ptr<EnvDataModel>) {}
    /**
     * @brief Gives information about specific Animal requested by Env
     */
    virtual SpecificAnimalModel* update(int id) {return nullptr;}
    /**
     * @brief Gives information about simulation statistics
     */
    virtual void update(StatisticsModel*) {}
};

#endif // OBSERVER_H

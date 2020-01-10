#ifndef OBSERVER_H
#define OBSERVER_H

#include <Controller/Controller.h>

class Controller;

/**
 * @brief Observer class from which Environment and MainWindow derive
 * Enables communication between those two with Controller in between
 */

class Observer
{
protected:
    Controller * controller;
public:
    Observer(Controller*);
    /**
     * @brief Gives information about Aniamls currently living in the simulation
     */
    virtual void update(boost::shared_ptr<EnvDataModel>) {}
    /**
     * @brief Gives information about simulation statistics
     */
    virtual void update(StatisticsModel*) {}
};

#endif // OBSERVER_H

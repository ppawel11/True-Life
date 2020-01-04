#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include "Common.h"
#include "Model/EnvironmentDataModel.h"
#include "Model/StatisticsModel.h"
#include "Model/AnimalModel.h"
#include <Use-cases/Observer.h>

class Observer;

typedef boost::shared_ptr<Observer> obs_ptr;

/**
 * @brief Controls flow of data between View and Environment
 */
class Controller
{
private:
    obs_ptr env_observer;
    obs_ptr window_observer;
public:
    Controller();

    void attach_env(obs_ptr);
    void attach_simu(obs_ptr);

    void notify_env(boost::shared_ptr<EnvironmentDataModel>);
    void notify_window(StatisticsModel*);

    void initSim(); //testing
};

#endif // CONTROLLER_H

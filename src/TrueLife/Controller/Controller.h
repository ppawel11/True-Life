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
typedef boost::shared_ptr<EnvironmentDataModel> data_ptr;

/**
 * @brief Controls flow of data between View and Environment
 */
class Controller
{
private:
    obs_ptr env_observer;
    obs_ptr simu_observer;

public:
    Controller();

    void attachEnv(obs_ptr);
    void attachSimu(obs_ptr);

    void notifyEnv(data_ptr data);
    void notifySimu(data_ptr data);
};

#endif // CONTROLLER_H

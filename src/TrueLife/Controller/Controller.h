#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include "Common.h"
#include "Model/EnvDataModel.h"
#include "Model/StatisticsModel.h"
#include "Model/AnimalModel.h"
#include <Use-cases/Observer.h>

class Observer;

/**
 * @brief Controls flow of data between View and Environment
 */
class Controller
{
private:
    boost::shared_ptr<Observer> env_observer;
    boost::shared_ptr<Observer> simu_observer;

public:
    Controller();

    void attachEnv(boost::shared_ptr<Observer>);
    void attachSimu(boost::shared_ptr<Observer>);

    void notifyEnv(boost::shared_ptr<EnvDataModel> data);
    void notifyEnv(std::vector<int> born_ids);
    void notifySimu(boost::shared_ptr<EnvDataModel> data);
};

#endif // CONTROLLER_H

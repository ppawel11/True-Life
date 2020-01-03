#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model/EnvironmentDataModel.h"
#include "Model/StatisticsModel.h"
#include "Model/AnimalModel.h"

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <vector>
#include <Use-cases/Observer.h>
#include "Common.h"
/**
 * @brief Controls flow of data between View and Use-cases
 */
using namespace std;


class Observer;

class Controller
{
private:
    Observer* env_observer;
    Observer* window_observer;
public:
    Controller();

    void attach_env(Observer*);
    void attach_window(Observer*);

    void notify_env(boost::shared_ptr<EnvironmentDataModel>);
    void notify_window(StatisticsModel*);

    void initSim(); //testing
};

#endif // CONTROLLER_H

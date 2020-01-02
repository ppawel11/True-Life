#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model/initdatamodel.h"
#include "Model/statisticsmodel.h"
#include "Model/animalmodel.h"

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <vector>
#include <Use-cases/observer.h>
#include "common.h"
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

    void notify_env(boost::shared_ptr<InitDataModel>);
    void notify_window(StatisticsModel*);

    void initSim(); //testing
};

#endif // CONTROLLER_H

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Model/initdatamodel.h"
#include "Model/statisticsmodel.h"

#include <vector>
#include <Use-cases/observer.h>

/**
 * @brief Controls flow of data between View and Use-cases
 */
using namespace std;


class Observer;

class Controller
{
private:
    vector<Observer*> observers;
public:
    Controller();
    void attach(Observer*);
    void notify(InitDataModel*);
    void notify(StatisticsModel*);
    void initSim(); //testing
};

#endif // CONTROLLER_H

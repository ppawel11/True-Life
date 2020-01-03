#ifndef OBSERVER_H
#define OBSERVER_H

#include <Controller/Controller.h>
#include "Model/EnvironmentDataModel.h"
#include "Model/StatisticsModel.h"

class Controller;

class Observer
{
protected:
    Controller * controller;
public:
    Observer(Controller*);
    virtual void update(boost::shared_ptr<EnvironmentDataModel>) {}
    virtual void update(StatisticsModel*) {}
};

#endif // OBSERVER_H

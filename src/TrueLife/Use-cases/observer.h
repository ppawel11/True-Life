#ifndef OBSERVER_H
#define OBSERVER_H

#include <Controller/controller.h>

class Controller;

class Observer
{
protected:
    Controller * controller;
public:
    Observer(Controller*);
    virtual void update(InitDataModel*) {}
    virtual void update(StatisticsModel*) {}
};

#endif // OBSERVER_H

#ifndef OBSERVER_H
#define OBSERVER_H

#include <Controller/controller.h>
#include <boost/shared_ptr.hpp>

class Controller;

class Observer
{
protected:
    Controller * controller;
public:
    Observer(Controller*);
    virtual void update(boost::shared_ptr<InitDataModel>) {}
    virtual void update(StatisticsModel*) {}
};

#endif // OBSERVER_H

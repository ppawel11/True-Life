#ifndef TIMEOBSERVER_H
#define TIMEOBSERVER_H

#include "Entities/TimeWizard.h"
#include <boost/shared_ptr.hpp>

class TimeWizard;

class TimeObserver
{
public:
    TimeObserver(boost::shared_ptr<TimeWizard> wizard);
    virtual void timeTick() = 0;
};

#endif // TIMEOBSERVER_H

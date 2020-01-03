#ifndef TIMEOBSERVER_H
#define TIMEOBSERVER_H

class TimeWizard;

class TimeObserver
{
public:
    virtual void timeTick() = 0;
};

#endif // TIMEOBSERVER_H

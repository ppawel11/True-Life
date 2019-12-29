#ifndef TIMEOBSERVER_H
#define TIMEOBSERVER_H

class TimeObserver
{
public:
    TimeObserver();
    virtual void timeTick() = 0;
};

#endif // TIMEOBSERVER_H

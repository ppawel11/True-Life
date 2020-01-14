/**
 * @author Grzegorz Fijałkowski
 */
#ifndef TIMEOBSERVER_H
#define TIMEOBSERVER_H

class TimeWizard;

/**
 * @brief Class to inherit by classes that need time ticks
 */
class TimeObserver
{
public:
    virtual void timeTick(int tick_counter) = 0;
};

#endif // TIMEOBSERVER_H

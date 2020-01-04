#include "TimeWizard.h"

TimeWizard::TimeWizard(QObject *parent, int period) : QObject(parent)
{
    this->period = period;
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(interrupt()));
}

void TimeWizard::startTimer()
{
    qDebug()<<period;
    timer->start(period);
}

void TimeWizard::stopTimer()
{
    timer->stop();
}

void TimeWizard::setPeriod(int new_period, bool restart_timer)
{
    period = new_period;
    tick_counter = 0;

    if(restart_timer) {
        stopTimer();
        startTimer();
    }
}

void TimeWizard::resetPeriod(bool restartTimer)
{
    setPeriod(DEFAULT_PERIOD, restartTimer);
}

bool TimeWizard::isRunning()
{
    return timer->isActive();
}

void TimeWizard::addObserver(t_obs_ptr observer)
{
    observers.push_back(observer);
}

void TimeWizard::interrupt()
{
    qDebug()<< "tick! " << ++tick_counter;
    for(auto obs : observers) {
        obs->timeTick();
    }
}

#include "timewizard.h"

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

    if(restart_timer) {
        stopTimer();
        startTimer();
    }
}

void TimeWizard::resetPeriod(bool restartTimer)
{
    setPeriod(DEFAULT_PERIOD, restartTimer);
}

void TimeWizard::interrupt()
{
    qDebug()<< "Minął czas!";
}

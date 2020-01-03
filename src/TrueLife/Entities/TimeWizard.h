#ifndef TIMEWIZARD_H
#define TIMEWIZARD_H

#include <vector>

#include <QObject>
#include <QTimer>

#include "Use-cases/TimeObserver.h"
#include "Common.h"
#include "Use-cases/TimeObserver.h"

/**
 * @brief Handles time measurement and makes movement possible
 *
 * Contains Environment (brain of the symulation) and calls it in timer interrupt
 * that is every period.
 */
class TimeObserver;

class TimeWizard : public QObject
{
    Q_OBJECT

private:
    /**
     * @brief Default period of the timer in milliseconds
     */
    static const int DEFAULT_PERIOD = 200;

public:
    /**
     * @brief TimeWizard
     * @param parent parent object
     * @param period period
     */
    explicit TimeWizard(QObject *parent = nullptr, int period = DEFAULT_PERIOD);

    void startTimer();
    void stopTimer();
    void setPeriod(int new_period, bool restart_timer = false);
    void resetPeriod(bool restart_timer = false);
    bool isRunning();

    void addObserver(TimeObserver *observer);

public slots:
    /**
     * @brief Timer's interrupt funcion
     */
    void interrupt();

private:
    /**
     * @brief Timer calling interrupts after each period
     */
    QTimer *timer;

    /**
     * @brief Current period of the timer in milliseconds
     *
     * It is period between interrupts
     */
    int period;

    std::vector<TimeObserver*> observers;
};

#endif // TIMEWIZARD_H

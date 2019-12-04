#ifndef TIMEWIZARD_H
#define TIMEWIZARD_H

#include <QObject>
#include <QTimer>

#include "common.h"

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
};

#endif // TIMEWIZARD_H

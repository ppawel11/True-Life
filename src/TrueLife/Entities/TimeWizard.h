/**
 * @author Grzegorz Fijałkowski
 */
#ifndef TIMEWIZARD_H
#define TIMEWIZARD_H

#include <vector>
#include <boost/shared_ptr.hpp>

#include <QObject>
#include <QTimer>

#include "Common.h"
#include "Use-cases/TimeObserver.h"

/**
 * @brief Handles time measurement and makes movement possible
 *
 * Contains Environment (brain of the symulation) and calls it in timer interrupt
 * that is every period.
 */
class TimeWizard : public QObject
{
    Q_OBJECT

private:
    /**
     * @brief Default period of the timer in milliseconds
     *
     * Equivalent of real-time one tick
     */
    static const int DEFAULT_PERIOD = 20;

public:
    /**
     * @brief TimeWizard
     * @param parent parent object
     * @param period period
     */
    explicit TimeWizard(
            int period = DEFAULT_PERIOD, QObject *parent = nullptr);
    ~TimeWizard();

    void startTimer();
    void stopTimer();
    void setPeriod(int new_period, bool restart_timer = true);
    int getPeriod();
    std::pair<double, double> getSimulationTime();
    void resetPeriod(bool restart_timer = true);
    bool isRunning();

    void addObserver(boost::shared_ptr<TimeObserver> observer);

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

    /**
     * @brief Counter of ticks during simulation.
     */
    int tick_counter;

    int tick_counter_full;

    /**
     * @brief Stores real time of the simulation in milliseconds
     */
    double duration_ms;

    /**
     * @brief list of observers of the timer
     */
    std::vector<boost::shared_ptr<TimeObserver>> observers;
};

#endif // TIMEWIZARD_H

#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QActionEvent>

#include "Common.h"
#include "SimuElements.h"
#include "Use-cases/Observer.h"
#include "Entities/TimeWizard.h"

namespace Ui {
class SimuWidget;
}

/**
 * @brief Central widget of main window to show current simulation environment
 */
class SimuWidget : public QWidget, public Observer
{
    Q_OBJECT

public:
    explicit SimuWidget(
            Controller *contr,
            boost::shared_ptr<TimeWizard> time_wizard,
            QWidget *parent = 0);
    ~SimuWidget();

    void startSimulation();
    void setUpMap();
    StatisticsModel * getStats();
    QAction * getStatsAction();

    virtual void update(boost::shared_ptr<EnvDataModel> data);

private slots:
    void on_playPauseButton_clicked();

    void on_timeSlider_sliderReleased();

    void on_statsButton_clicked();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    QAction *stats_action;

    SimuElements *simu_emelents;

    boost::shared_ptr<TimeWizard> time_wizard;
};

#endif // SIMUWIDGET_H

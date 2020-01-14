#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QActionEvent>

#include "Common.h"
#include "SimuElements.h"
#include "Abstracts/Observer.h"
#include "Entities/TimeWizard.h"
#include "Model/SpecificAnimalModel.h"

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

    void listenToAction(QAction * action);
    void showAnimalStats(int id);

    virtual void update(boost::shared_ptr<EnvDataModel> data);

public slots:
    void on_playPauseButton_clicked();

private slots:
    void on_timeSlider_sliderReleased();

    void on_statsButton_clicked();

    void heardAnimal();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    QAction *stats_action;

    SimuElements *simu_emelents;

    boost::shared_ptr<TimeWizard> time_wizard;
};

#endif // SIMUWIDGET_H

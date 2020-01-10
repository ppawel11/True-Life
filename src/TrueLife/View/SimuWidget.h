#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <QWidget>
#include <QGraphicsScene>

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

    virtual void update(boost::shared_ptr<EnvDataModel> data);

private slots:
    void on_playPauseButton_clicked();

    void on_timeSlider_sliderReleased();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    SimuElements *simu_emelents;

    boost::shared_ptr<TimeWizard> time_wizard;
};

#endif // SIMUWIDGET_H

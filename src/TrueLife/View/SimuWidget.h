#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include <QWidget>
#include <QGraphicsScene>

#include "Common.h"
#include "SimuElements.h"
#include "Use-cases/Observer.h"
#include "Entities/TimeWizard.h"
#include "Model/EnvironmentDataModel.h"

namespace Ui {
class SimuWidget;
}

typedef boost::shared_ptr<TimeWizard> time_ptr;
typedef boost::shared_ptr<EnvironmentDataModel> data_ptr;

/**
 * @brief Central widget of main window to show current simulation environment
 */
class SimuWidget : public QWidget, public Observer
{
    Q_OBJECT

public:
    explicit SimuWidget(
            Controller *contr, time_ptr time_wizard, QWidget *parent = 0);
    SimuWidget(const SimuWidget &toCopy);
    ~SimuWidget();

    void initWidget();
    void setUpMap();
    void startSimulation();
    data_ptr createDataModel();

    virtual void update(data_ptr);
    virtual void update(StatisticsModel*);

private slots:
    void on_playPauseButton_clicked();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    SimuElements *simuEmelents;

    time_ptr time_wizard;
};

#endif // SIMUWIDGET_H

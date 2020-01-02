#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include <QWidget>
#include <QGraphicsScene>

#include "common.h"
#include "simuelements.h"
#include "Controller/controller.h"
#include "Entities/timewizard.h"
#include "Model/initdatamodel.h"

namespace Ui {
class SimuWidget;
}

typedef boost::shared_ptr<TimeWizard> time_ptr;

/**
 * @brief Central widget of main window to show current simulation environment
 */
class SimuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SimuWidget(QWidget *parent = 0);
    ~SimuWidget();

    void setTimeWizard(time_ptr time_wizard);
    boost::shared_ptr<InitDataModel> startSimulation();
    void setUpMap();
    boost::shared_ptr<InitDataModel> createInitialModel();

private slots:
    void on_playPauseButton_clicked();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    SimuElements *simuEmelents;

    time_ptr time_wizard;
};

#endif // SIMUWIDGET_H

#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include <QWidget>
#include <QGraphicsScene>

#include "Common.h"
#include "SimuElements.h"
#include "Controller/Controller.h"
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
class SimuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SimuWidget(time_ptr time_wizard, QWidget *parent = 0);
    SimuWidget(const SimuWidget &toCopy)
        : SimuWidget(toCopy.time_wizard, toCopy.parentWidget()) {}
    ~SimuWidget();

    data_ptr startSimulation();
    data_ptr createInitialModel();
    void setUpMap();

private slots:
    void on_playPauseButton_clicked();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    SimuElements *simuEmelents;

    time_ptr time_wizard;
};

#endif // SIMUWIDGET_H

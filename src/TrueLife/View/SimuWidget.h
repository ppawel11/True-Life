#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <boost/shared_ptr.hpp>

#include <QWidget>
#include <QGraphicsScene>

#include "Common.h"
#include "SimuElements.h"
#include "Use-cases/Observer.h"
#include "Entities/TimeWizard.h"
#include "Model/EnvDataModel.h"

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
//    SimuWidget(const SimuWidget &toCopy);
    ~SimuWidget();

    void initWidget();
    void setUpMap();
    void startSimulation();
    boost::shared_ptr<EnvDataModel> createDataModel();

    virtual void update(boost::shared_ptr<EnvDataModel> data);

private slots:
    void on_playPauseButton_clicked();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    SimuElements *simuEmelents;

    boost::shared_ptr<TimeWizard> time_wizard;
};

#endif // SIMUWIDGET_H

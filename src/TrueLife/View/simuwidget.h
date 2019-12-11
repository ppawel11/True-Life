#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <QWidget>
#include <QGraphicsScene>

#include "common.h"
#include "symuelements.h"
#include "Controller/controller.h"

namespace Ui {
class SimuWidget;
}

/**
 * @brief Central widget of main window to show current simulation environment
 */
class SimuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SimuWidget(QWidget *parent = 0);
    ~SimuWidget();

private:
    Ui::SimuWidget *ui;

    QGraphicsScene *scene;

    SymuElements symuEmelents;
};

#endif // SIMUWIDGET_H

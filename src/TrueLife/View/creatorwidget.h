#ifndef CREATORWIDGET_H
#define CREATORWIDGET_H

#include <QWidget>
#include <QGraphicsScene>

#include "common.h"
#include "simuelements.h"
#include "Controller/controller.h"

namespace Ui {
class CreatorWidget;
}

/**
 * @brief Central widget of main window to enter parameters of new simulation
 */
class CreatorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CreatorWidget(QWidget *parent = 0);
    ~CreatorWidget();

private slots:
    void on_addPredatorButton_clicked();

    void on_addHerbivoreButton_clicked();

    void on_addWaterButton_clicked();

private:
    Ui::CreatorWidget *ui;

    QGraphicsScene *scene;

    SimuElements simuEmelents;
};

#endif // CREATORWIDGET_H

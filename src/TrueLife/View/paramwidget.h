#ifndef PARAMWIDGET_H
#define PARAMWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include <QList>
#include <map>

#include "common.h"
#include "symuelements.h"
#include "Controller/controller.h"

namespace Ui {
class ParamWidget;
}

/**
 * @brief Central widget of main window to enter parameters of new simulation
 */
class ParamWidget : public QWidget
{
    Q_OBJECT

private:
    static const int MAP_WIDTH = 500;
    static const int MAP_HEIGHT = 500;
    static const int BORDER = 10;

public:
    explicit ParamWidget(QWidget *parent = 0);
    ~ParamWidget();

private slots:
    void on_addPredatorButton_clicked();

    void on_addHerbivoreButton_clicked();

    void on_addWaterButton_clicked();

private:
    Ui::ParamWidget *ui;

    QGraphicsScene *scene;

    SymuElements symuEmelents;

    int pred_counter;
    int herb_counter;
};

#endif // PARAMWIDGET_H

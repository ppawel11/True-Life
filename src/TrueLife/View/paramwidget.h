#ifndef PARAMWIDGET_H
#define PARAMWIDGET_H

#include <QWidget>
#include "common.h"
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

public:
    explicit ParamWidget(QWidget *parent = 0);
    ~ParamWidget();

private:
    Ui::ParamWidget *ui;
};

#endif // PARAMWIDGET_H

#ifndef PARAMWIDGET_H
#define PARAMWIDGET_H

#include <QWidget>
#include "common.h"

namespace Ui {
class ParamWidget;
}

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

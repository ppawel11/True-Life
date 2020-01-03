#ifndef STATWIDGET_H
#define STATWIDGET_H

#include <QWidget>
#include "Common.h"
#include "Controller/Controller.h"

namespace Ui {
class StatWidget;
}

/**
 * @brief Central widget of main window to show statistics of current simulation
 */
class StatWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StatWidget(QWidget *parent = 0);
    ~StatWidget();

private:
    Ui::StatWidget *ui;
};

#endif // STATWIDGET_H

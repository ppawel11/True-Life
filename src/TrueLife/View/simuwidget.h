#ifndef SIMUWIDGET_H
#define SIMUWIDGET_H

#include <QWidget>

namespace Ui {
class SimuWidget;
}

class SimuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SimuWidget(QWidget *parent = 0);
    ~SimuWidget();

private:
    Ui::SimuWidget *ui;
};

#endif // SIMUWIDGET_H

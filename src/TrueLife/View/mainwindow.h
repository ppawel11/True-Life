#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include "paramwidget.h"
#include "simuwidget.h"
#include "statwidget.h"
#include "common.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSimulation_triggered();

    void on_actionStatistics_triggered();

    void on_actionHome_triggered();

    void on_actionNew_triggered();

private:
    Ui::MainWindow *ui;

    QWidget* homeWidget;
    ParamWidget* paramWidget;
    SimuWidget* simuWidget;
    StatWidget* statWidget;
};

#endif // MAINWINDOW_H

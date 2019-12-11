#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPointer>

/*
 * std::unique_ptr was boost::unique_ptr before C++11
 * there is no boost::unique_ptr now
 *
 * what about boost::scoped_ptr? ->
 * "Generally, its std::unique_ptr you should use." -
 * - https://studiofreya.com/cpp/boost/boost-scoped_ptr-vs-unique_ptr/
 */
#include <memory> // std::unique_ptr
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include "creatorwidget.h"
#include "simuwidget.h"
#include "statwidget.h"
#include "common.h"
#include "Controller/controller.h"
#include "Entities/timewizard.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief Main window of the application
 */
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

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QWidget* home_widget;
    std::unique_ptr<CreatorWidget> creator_widget;
    boost::shared_ptr<SimuWidget> simu_widget;
    std::unique_ptr<StatWidget> stat_widget;

    boost::shared_ptr<TimeWizard> time_wizard;
};

#endif // MAINWINDOW_H

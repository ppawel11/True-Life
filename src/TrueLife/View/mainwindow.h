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
    std::unique_ptr<ParamWidget> paramWidget;
    boost::shared_ptr<SimuWidget> simuWidget;
    std::unique_ptr<StatWidget> statWidget;
};

#endif // MAINWINDOW_H

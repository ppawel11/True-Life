#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

#include "paramwidget.h"
#include "simuwidget.h"
#include "statwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    boost::shared_ptr<QWidget> homeWidget;
    boost::shared_ptr<ParamWidget> paramWidget;
    boost::shared_ptr<SimuWidget> simuWidget;
    boost::shared_ptr<StatWidget> statWidget;
};

#endif // MAINWINDOW_H

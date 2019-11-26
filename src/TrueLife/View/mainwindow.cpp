#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    homeWidget = boost::make_shared<QWidget>(ui->centralwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

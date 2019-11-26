#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    homeWidget = this->centralWidget();
    paramWidget = new ParamWidget();
    simuWidget = new SimuWidget();
    statWidget = new StatWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSimulation_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(simuWidget);
}

void MainWindow::on_actionStatistics_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(statWidget);
}

void MainWindow::on_actionHome_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(homeWidget);
}

void MainWindow::on_actionNew_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(paramWidget);
}

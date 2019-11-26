#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    homeWidget = this->centralWidget();
    paramWidget = new ParamWidget();
    simuWidget = boost::make_shared<SimuWidget>(new SimuWidget());
    statWidget = std::make_unique<StatWidget>(new StatWidget());
}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug() << "mainWindow usunięty";
}

void MainWindow::on_actionSimulation_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
//    qDebug()<<"use_count: "<<simuWidget.use_count();
    this->setCentralWidget(simuWidget.get());
//    qDebug()<<"use_count: "<<simuWidget.use_count();
}

void MainWindow::on_actionStatistics_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(statWidget.get());
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

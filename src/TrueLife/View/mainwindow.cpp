#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap *pix = new QPixmap(":/img/img/icon.jpg");
//    int w = this->centralWidget()->width();
    ui->logo_label->setPixmap(pix->scaledToWidth(350,Qt::SmoothTransformation));

    homeWidget = this->centralWidget();
    paramWidget = std::make_unique<ParamWidget>(new ParamWidget());
    simuWidget = boost::make_shared<SimuWidget>(new SimuWidget());
    statWidget = std::make_unique<StatWidget>(new StatWidget());
}

MainWindow::~MainWindow()
{
    delete ui;
    delete homeWidget;
    qDebug() << "homeWidget usunięty";
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
    this->setCentralWidget(paramWidget.get());
}

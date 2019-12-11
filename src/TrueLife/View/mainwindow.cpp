#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // logo settings
    QPixmap *pix = new QPixmap(":/img/img/icon.jpg");
    int w = this->width();
    ui->logo_label->setPixmap(pix->scaledToWidth(0.5*w,Qt::SmoothTransformation));

    // central widget settings
    home_widget = this->centralWidget();
    creator_widget = std::make_unique<CreatorWidget>(new CreatorWidget());
    simu_widget = boost::make_shared<SimuWidget>(new SimuWidget());
    stat_widget = std::make_unique<StatWidget>(new StatWidget());

    // timer settings
    time_wizard = boost::make_shared<TimeWizard>(new TimeWizard());
    time_wizard->setPeriod(500);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete home_widget;
    qDebug() << "home_widget usunięty";
    qDebug() << "Main Window usunięty";
}

void MainWindow::on_actionSimulation_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
//    qDebug()<<"use_count: "<<simu_widget.use_count();
    this->setCentralWidget(simu_widget.get());
//    qDebug()<<"use_count: "<<simu_widget.use_count();
}

void MainWindow::on_actionStatistics_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(stat_widget.get());
}

void MainWindow::on_actionHome_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(home_widget);
}

void MainWindow::on_actionNew_triggered()
{
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(creator_widget.get());
}

void MainWindow::on_pushButton_clicked()
{
    static bool running = false;

    if(!running) {
        time_wizard->startTimer();
        running = true;
    }
    else {
        time_wizard->stopTimer();
        running = false;
    }
}

#include "MainWindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(boost::shared_ptr<SimuWidget> simu_widget, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->simu_widget = std::move(simu_widget);
    initWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(home_widget != nullptr) {
        delete home_widget;
        qDebug() << "home_widget usunięty";
    }
    qDebug() << "MainWindow usunięty";
}

void MainWindow::initWindow()
{
    ui->setupUi(this);

    // logo settings
    QPixmap *pix = new QPixmap(":/img/img/icon.jpg");
    int w = this->width();
    ui->logo_label->setPixmap(pix->scaledToWidth(0.5*w,Qt::SmoothTransformation));

    // central widget settings
    home_widget = this->centralWidget();
    creator_widget = std::make_unique<CreatorWidget>(new CreatorWidget(this));
    stat_widget = std::make_unique<StatWidget>(new StatWidget());

    // actions from centralWidgets settings
    connect(creator_widget->getStartAction(),
            SIGNAL(triggered()), this,
            SLOT(startSimulation()));

    connect(simu_widget->getStatsAction(),
            SIGNAL(triggered()), this,
            SLOT(on_actionStatistics_triggered()));

    connect(stat_widget->getBackAction(),
            SIGNAL(triggered()), this,
            SLOT(resumeSimulation()));
}

void MainWindow::startSimulation()
{
    qDebug()<<"Starting simulation...";
    simu_widget->startSimulation();
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(simu_widget.get());
}

void MainWindow::resumeSimulation()
{
    simu_widget->on_playPauseButton_clicked();
    this->takeCentralWidget(); // to preserve it from deletion
    this->setCentralWidget(simu_widget.get());
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
    stat_widget->updateStats(simu_widget->getStats());
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
    on_actionNew_triggered();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

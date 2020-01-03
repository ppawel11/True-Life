#include "MainWindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(
        Controller *contr, simu_ptr simu_widget, QWidget *parent)
    : QMainWindow(parent),
      Observer(contr),
      ui(new Ui::MainWindow)
{
    this->simu_widget = std::move(simu_widget);
    home_widget = nullptr;
}

MainWindow::MainWindow(const MainWindow &toCopy)
    : MainWindow(toCopy.controller,
                 std::move(const_cast<MainWindow&>(toCopy).simu_widget),
                 toCopy.parentWidget())
{
//    toCopy.controller->attach_window(this);
    initWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(home_widget != nullptr) {
        delete home_widget;
        qDebug() << "home_widget usunięty";
    }
    qDebug() << "Main Window usunięty";
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
}

void MainWindow::update(StatisticsModel *)
{
    qDebug()<<"Update on MainWindow!";
}

void MainWindow::update(shared_ptr<EnvironmentDataModel>){

}

void MainWindow::startSimulation()
{
    qDebug()<<"Starting simulation...";
    this->controller->notify_env(simu_widget->startSimulation());
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
    qDebug()<<"Button clicked!";
}

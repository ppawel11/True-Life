#include "simuwidget.h"
#include "ui_simuwidget.h"

SimuWidget::SimuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimuWidget)
{
    ui->setupUi(this);

    // Setting up the graphics scene
    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(OurColors::back);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setMinimumSize(Map::WIDTH+Map::BORDER,
                                     Map::HEIGHT+Map::BORDER);

    // Setting up the sumulation map
    QBrush brush(OurColors::map);
    QPen pen(Qt::black);
    pen.setWidth(3);
    scene->addRect(0,0,Map::WIDTH,Map::HEIGHT,pen,brush);

    // assigning instance of container for sumulated elements
    simuEmelents = SimuElements::getInstance();
}

SimuWidget::~SimuWidget()
{
    delete ui;
    qDebug() << "simu_widget usunięty";
}

void SimuWidget::setTimeWizard(time_ptr time_wizard)
{
    // timer settings
    this->time_wizard = time_wizard;
}

void SimuWidget::startSimulation()
{
    setUpMap();
    time_wizard->startTimer();
    simuEmelents->setItemsClickable(false);
    ui->playPauseButton->setText("Pauza");
}

void SimuWidget::setUpMap()
{
    std::map<int, SimuEllipse*> animals = simuEmelents->getAnimals();
    qDebug()<<"Amount of animals: "<<animals.size();
    for (auto it = animals.begin(); it != animals.end(); ++it) {
        scene->addItem(it->second);
//        qDebug()<<it->first; // id
    }

    std::map<int, SimuEllipse*> supply = simuEmelents->getSupply();
    qDebug()<<"Amount of supply: "<<supply.size();
    for (auto it = supply.begin(); it != supply.end(); ++it) {
        scene->addItem(it->second);
//        qDebug()<<it->first; // id
    }
}

void SimuWidget::on_playPauseButton_clicked()
{
    if(!time_wizard->isRunning()) {
        time_wizard->startTimer();
        simuEmelents->setItemsClickable(false);
        ui->playPauseButton->setText("Pauza");
    }
    else {
        time_wizard->stopTimer();
        simuEmelents->setItemsClickable(true);
        ui->playPauseButton->setText("Kontynuuj");
    }
}

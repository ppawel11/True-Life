#include "SimuWidget.h"
#include "ui_simuwidget.h"

SimuWidget::SimuWidget(
        Controller *contr,
        boost::shared_ptr<TimeWizard> time_wizard,
        QWidget *parent) :
    QWidget(parent),
    Observer(contr),
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

    // Setting up time slider
//    ui->timeSlider->setTickInterval(1);
    ui->timeSlider->setRange(-30,-1);
    ui->timeSlider->setEnabled(false);

    // assigning instance of container for simulated elements
    simu_emelents = SimuElements::getInstance();

    // timer settings
    this->time_wizard = time_wizard;
}

SimuWidget::~SimuWidget()
{
    delete ui;
    qDebug() << "simu_widget usunięty";
}

void SimuWidget::startSimulation()
{
    setUpMap();
    time_wizard->startTimer();
    simu_emelents->setItemsClickable(false);
    ui->playPauseButton->setText("Pauza");
    ui->timeSlider->setValue(-time_wizard->getPeriod());
    ui->timeSlider->setEnabled(true);

    controller->notifyEnv(simu_emelents->createDataModel());
}

void SimuWidget::setUpMap()
{
    std::map<int, SimuEllipse*> animals = simu_emelents->getAnimals();
    qDebug()<<"Amount of animals: "<< simu_emelents->animalsCount();
    for (auto it = animals.begin(); it != animals.end(); ++it) {
        scene->addItem(it->second);
//        qDebug()<<it->first; // id
    }

    std::map<int, SimuEllipse*> supply = simu_emelents->getSupply();
    qDebug()<<"Amount of supply: "<< simu_emelents->supplyCount();
    for (auto it = supply.begin(); it != supply.end(); ++it) {
        scene->addItem(it->second);
//        qDebug()<<it->first; // id
    }
}

void SimuWidget::update(boost::shared_ptr<EnvDataModel> data)
{
    std::vector<int> born_ids = simu_emelents->updateAnimals(data);
    for (auto id : born_ids) {
        scene->addItem(simu_emelents->getAnimal(id));
    }
    controller->notifyEnv(born_ids);
}

void SimuWidget::on_playPauseButton_clicked()
{
    if(!time_wizard->isRunning()) {
        time_wizard->startTimer();
        simu_emelents->setItemsClickable(false);
        ui->playPauseButton->setText("Pauza");
        ui->timeSlider->setEnabled(true);
    }
    else {
        time_wizard->stopTimer();
        simu_emelents->setItemsClickable(true);
        ui->playPauseButton->setText("Kontynuuj");
        ui->timeSlider->setEnabled(false);
    }
}

void SimuWidget::on_timeSlider_sliderReleased()
{
    time_wizard->setPeriod(-ui->timeSlider->value());
}

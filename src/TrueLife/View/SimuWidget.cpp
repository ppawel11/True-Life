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

    // setting up a signal for MainWindow to show statistics
    stats_action = new QAction("Zobaczmy statystyki!", this);

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
        listenToAction(it->second->getClickedAction());
        it->second->inSimulation();
    }

    std::map<int, SimuEllipse*> supply = simu_emelents->getSupply();
    qDebug()<<"Amount of supply: "<< simu_emelents->supplyCount();
    for (auto it = supply.begin(); it != supply.end(); ++it) {
        scene->addItem(it->second);
//        qDebug()<<it->first; // id
    }
}

StatisticsModel *SimuWidget::getStats()
{
    return simu_emelents->createStatsModel(
                time_wizard->getSimulationTime());
}

QAction *SimuWidget::getStatsAction()
{
    return stats_action;
}

void SimuWidget::listenToAction(QAction *action)
{
    // actions from centralWidgets settings
    connect(action,
            SIGNAL(triggered()), this,
            SLOT(heardAnimal()));
}

void SimuWidget::heardAnimal()
{
    QAction *act = qobject_cast<QAction *>(sender());
    showAnimalStats(act->data().toInt());
}

void SimuWidget::showAnimalStats(int id)
{
    qDebug()<<"Show stats of animal: "<<id;
    SpecificAnimalModel* stats = controller->request(id);
    ui->velocityLineEdit->setText(QString::number(stats->velocity));
    ui->view_rangeLineEdit->setText(QString::number(stats->view_range));
    ui->mobilityLineEdit->setText(QString::number(stats->mobility));
    ui->readyLineEdit->setText(QString::number(stats->ready_cooldown));
    ui->energyLineEdit->setText(QString::number(stats->energy));
}

void SimuWidget::update(boost::shared_ptr<EnvDataModel> data)
{
    simu_emelents->updateElements(data);
    for (auto animal : data->born) {
        scene->addItem(simu_emelents->getAnimal(animal->id));
        listenToAction(
            simu_emelents->getAnimal(animal->id)->getClickedAction());
        simu_emelents->getAnimal(animal->id)->inSimulation();
    }
    controller->notifyEnv(data);
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

void SimuWidget::on_statsButton_clicked()
{
    if(time_wizard->isRunning()) on_playPauseButton_clicked();
    stats_action->activate(QAction::Trigger);
}

#include <stdlib.h>

#include "CreatorWidget.h"
#include "ui_creatorwidget.h"

CreatorWidget::CreatorWidget(QWidget *mainWindow, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreatorWidget)
{
    ui->setupUi(this);
    this->mainWindow = mainWindow;

    // setting up the graphics scene
    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(OurColors::back);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setMinimumSize(Map::WIDTH+Map::BORDER,
                                     Map::HEIGHT+Map::BORDER);

    // setting up the sumulation map
    QBrush brush(OurColors::map);
    QPen pen(Qt::black);
    pen.setWidth(3);
    scene->addRect(0,0,Map::WIDTH,Map::HEIGHT,pen,brush);

    // assigning instance of container for sumulated elements
    simuEmelents = SimuElements::getInstance();

    // setting up a signal for MainWindow to start simulation
    startAction = new QAction("Zaczynamy symulację!", this);

    ui->startButton->setEnabled(false);
}

CreatorWidget::~CreatorWidget()
{
    delete ui;
    qDebug() << "creator_widget usunięty";
}

QAction *CreatorWidget::getStartAction()
{
    return startAction;
}

void CreatorWidget::createAnimals(ElementType type, int amount)
{
    int x, y;
    int range_x = Map::WIDTH - 2*Ani::WIDTH;
    int range_y = Map::HEIGHT - 2*Ani::HEIGHT;

    srand (time(NULL));

    for(int i=0; i<amount; ++i) {
        SimuEllipse *item = simuEmelents->addAnimal(type);
        x = rand() % range_x - range_x/2;
        y = rand() % range_y - range_y/2;
        item->setPos(x, y);
        item->setFlag(QGraphicsItem::ItemIsMovable);
        scene->addItem(item);
        ui->startButton->setEnabled(true);
    }
}

void CreatorWidget::on_addPredatorButton_clicked()
{
    createAnimals(PREDATOR, ui->predatorSpinBox->value());
}

void CreatorWidget::on_addHerbivoreButton_clicked()
{
    createAnimals(HERBIVORE, ui->herbivoreSpinBox->value());
}

void CreatorWidget::on_addWaterButton_clicked()
{
    SimuEllipse *item = simuEmelents->addSupply(WATER);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
    ui->startButton->setEnabled(true);
}

void CreatorWidget::on_startButton_clicked()
{
    simuEmelents->setItemsMovable(false);
    startAction->activate(QAction::Trigger);
    ui->startButton->setEnabled(false);
}

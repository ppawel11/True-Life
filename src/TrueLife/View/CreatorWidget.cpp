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

void CreatorWidget::on_addPredatorButton_clicked()
{
    SimuEllipse *item = simuEmelents->addAnimal(PREDATOR);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
    ui->startButton->setEnabled(true);
}

void CreatorWidget::on_addHerbivoreButton_clicked()
{
    SimuEllipse *item = simuEmelents->addAnimal(HERBIVORE);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
    ui->startButton->setEnabled(true);
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

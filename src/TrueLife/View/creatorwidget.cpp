#include "creatorwidget.h"
#include "ui_paramwidget.h"

CreatorWidget::CreatorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreatorWidget)
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

CreatorWidget::~CreatorWidget()
{
    delete ui;
    qDebug() << "param_widget usunięty";
}

void CreatorWidget::on_addPredatorButton_clicked()
{
    SimuEllipse *item = simuEmelents.addAnimal(PREDATOR);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
}

void CreatorWidget::on_addHerbivoreButton_clicked()
{
    SimuEllipse *item = simuEmelents.addAnimal(HERBIVORE);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
}

void CreatorWidget::on_addWaterButton_clicked()
{
    SimuEllipse *item = simuEmelents.addSupply(WATER);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
}

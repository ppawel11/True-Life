#include "paramwidget.h"
#include "ui_paramwidget.h"

ParamWidget::ParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParamWidget)
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
    symuEmelents = SymuElements::getInstance();
}

ParamWidget::~ParamWidget()
{
    delete ui;
    qDebug() << "param_widget usunięty";
}

void ParamWidget::on_addPredatorButton_clicked()
{
    SymuEllipse *item = symuEmelents.addAnimal(PREDATOR);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
}

void ParamWidget::on_addHerbivoreButton_clicked()
{
    SymuEllipse *item = symuEmelents.addAnimal(HERBIVORE);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
}

void ParamWidget::on_addWaterButton_clicked()
{
    SymuEllipse *item = symuEmelents.addSupply(WATER);
    item->setFlag(QGraphicsItem::ItemIsMovable);
    scene->addItem(item);
}

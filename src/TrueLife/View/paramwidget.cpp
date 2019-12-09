#include "paramwidget.h"
#include "ui_paramwidget.h"

ParamWidget::ParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParamWidget),
    id_counter_animals(0),
    id_counter_supply(0)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(QColor("#FFF3CA"));
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setMinimumSize(MAP_WIDTH+BORDER,MAP_HEIGHT+BORDER);

    QBrush brush(QColor("#DDD383"));
    QPen pen(Qt::black);
    pen.setWidth(3);
    scene->addRect(0,0,MAP_WIDTH,MAP_HEIGHT,pen,brush);
}

ParamWidget::~ParamWidget()
{
    delete ui;
    qDebug() << "param_widget usunięty";
}

void ParamWidget::addAnimal(QGraphicsEllipseItem *animal)
{
    animals_list.insert({++id_counter_animals, animal});
}

void ParamWidget::addSupply(QGraphicsEllipseItem *supply)
{
    supply_list.insert({++id_counter_supply, supply});
}

void ParamWidget::on_addPredatorButton_clicked()
{
    QBrush brush(Qt::red);
    QPen pen(Qt::black);
    pen.setWidth(1);
    QGraphicsEllipseItem *predator =
            scene->addEllipse(MAP_WIDTH/2, MAP_HEIGHT/2,
                              15, 15,
                              pen, brush);
    predator->setFlag(QGraphicsItem::ItemIsMovable);
    addAnimal(predator);
    ++pred_counter;
}

void ParamWidget::on_addHerbivoreButton_clicked()
{
    QBrush brush(Qt::green);
    QPen pen(Qt::black);
    pen.setWidth(1);
    QGraphicsEllipseItem *herbivor =
            scene->addEllipse(MAP_WIDTH/2, MAP_HEIGHT/2,
                              15, 15,
                              pen, brush);
    herbivor->setFlag(QGraphicsItem::ItemIsMovable);
    addAnimal(herbivor);
    ++herb_counter;
}

void ParamWidget::on_addWaterButton_clicked()
{
    QBrush brush(Qt::blue);
    QPen pen(Qt::black);
    pen.setWidth(1);
    QGraphicsEllipseItem *water =
            scene->addEllipse(MAP_WIDTH/2, MAP_HEIGHT/2,
                              50, 33,
                              pen, brush);
    water->setFlag(QGraphicsItem::ItemIsMovable);
    addSupply(water);
}

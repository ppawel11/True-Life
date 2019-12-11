#include "paramwidget.h"
#include "ui_paramwidget.h"

ParamWidget::ParamWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParamWidget)
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

    symuEmelents = SymuElements::getInstance();
}

ParamWidget::~ParamWidget()
{
    delete ui;
    qDebug() << "param_widget usunięty";
}

void ParamWidget::on_addPredatorButton_clicked()
{
    QBrush brush(Qt::red);
    QPen pen(Qt::black);
    pen.setWidth(1);
    SymuEllipse *predator = new SymuEllipse(MAP_WIDTH/2, MAP_HEIGHT/2,
                              15, 15,
                              pen, brush);
    predator->setFlag(QGraphicsItem::ItemIsMovable);
    symuEmelents.addAnimal(predator);
    scene->addItem(predator);
}

void ParamWidget::on_addHerbivoreButton_clicked()
{
    QBrush brush(Qt::green);
    QPen pen(Qt::black);
    pen.setWidth(1);
    SymuEllipse *herbivor = new SymuEllipse(MAP_WIDTH/2, MAP_HEIGHT/2,
                              15, 15,
                              pen, brush);
    herbivor->setFlag(QGraphicsItem::ItemIsMovable);
    symuEmelents.addAnimal(herbivor);
    scene->addItem(herbivor);
}

void ParamWidget::on_addWaterButton_clicked()
{
    QBrush brush(Qt::blue);
    QPen pen(Qt::black);
    pen.setWidth(1);
    SymuEllipse *water = new SymuEllipse(MAP_WIDTH/2, MAP_HEIGHT/2,
                              50, 33,
                              pen, brush);
    water->setFlag(QGraphicsItem::ItemIsMovable);
    symuEmelents.addSupply(water);
    scene->addItem(water);
}

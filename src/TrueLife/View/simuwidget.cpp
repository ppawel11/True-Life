#include "simuwidget.h"
#include "ui_simuwidget.h"

SimuWidget::SimuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimuWidget)
{
    ui->setupUi(this);
}

SimuWidget::~SimuWidget()
{
    delete ui;
    qDebug() << "simuWidget usunięty";
}

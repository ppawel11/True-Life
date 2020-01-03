#include "StatWidget.h"
#include "ui_statwidget.h"

StatWidget::StatWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StatWidget)
{
    ui->setupUi(this);
}

StatWidget::~StatWidget()
{
    delete ui;
    qDebug() << "stat_widget usunięty";
}

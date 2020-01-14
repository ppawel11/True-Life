#include "StatWidget.h"
#include "ui_statwidget.h"

StatWidget::StatWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StatWidget)
{
    ui->setupUi(this);

    // setting up a signal for MainWindow to back to simulation
    back_action = new QAction("Wracamy do symulacji!", this);
}

StatWidget::~StatWidget()
{
    delete ui;
    qDebug() << "stat_widget usunięty";
}

QAction *StatWidget::getBackAction()
{
    return back_action;
}

void StatWidget::updateStats(StatisticsModel *stats)
{
    ui->lcdPredatorsAlive->display(stats->alive_predators);
    ui->lcdPredatorsDead->display(stats->dead_predators);

    ui->lcdHerbivoresAlive->display(stats->alive_herbivores);
    ui->lcdHerbivoresDead->display(stats->dead_herbivores);

    ui->realTimeLineEdit->setText(
            QString::number(stats->times.first/1000) + " sekund");
    ui->simuTimeLineEdit->setText(
            QString::number(stats->times.second/1000) + " sekund");
}

void StatWidget::on_pushButton_clicked()
{
    back_action->activate(QAction::Trigger);
}

/**
 * @author Grzegorz Fijałkowski
 */
#ifndef STATWIDGET_H
#define STATWIDGET_H

#include <QWidget>
#include <QActionEvent>

#include "Common.h"
#include "Controller/Controller.h"
#include "Model/StatisticsModel.h"

namespace Ui {
class StatWidget;
}

/**
 * @brief Central widget of main window to show statistics of current simulation
 */
class StatWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StatWidget(QWidget *parent = 0);
    ~StatWidget();

    QAction * getBackAction();

    /**
     * @brief updates shown statistics
     * @param statistics data
     */
    void updateStats(StatisticsModel *stats);

private slots:
    void on_pushButton_clicked();

private:
    Ui::StatWidget *ui;

    QAction *back_action;
};

#endif // STATWIDGET_H

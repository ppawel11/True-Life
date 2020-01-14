/**
 * @author Grzegorz Fijałkowski
 */
#ifndef CREATORWIDGET_H
#define CREATORWIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QActionEvent>

#include "Common.h"
#include "SimuElements.h"
#include "Controller/Controller.h"

namespace Ui {
class CreatorWidget;
}

/**
 * @brief Central widget of main window to enter parameters of new simulation
 */
class CreatorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CreatorWidget(QWidget *main_window, QWidget *parent = 0);
    ~CreatorWidget();

    QAction * getStartAction();
    void resetSimulation() {simu_emelents->clear();}
    void createElements(ElementType type, int amount);

    int width(ElementType type);
    int height(ElementType type);

private slots:
    void on_addPredatorButton_clicked();

    void on_addHerbivoreButton_clicked();

    void on_addWaterButton_clicked();

    void on_startButton_clicked();

private:
    Ui::CreatorWidget *ui;

    QWidget *main_window;

    QGraphicsScene *scene;

    QAction *start_action;

    SimuElements *simu_emelents;
};

#endif // CREATORWIDGET_H

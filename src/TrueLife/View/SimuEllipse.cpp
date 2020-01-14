#include <stdlib.h> // abs

#include "SimuEllipse.h"

SimuEllipse::SimuEllipse(ElementType type, int x, int y, int width, int height, QPen pen, QBrush brush)
    : QGraphicsEllipseItem::QGraphicsEllipseItem(x, y, width, height)
{
    this->type = type;
    setPen(pen);
    setBrush(brush);

    in_simulation = false;

    // setting up a signal for SimuWidget to show statistics
    clicked_action = new QAction("Zobacz moje statsy!");
}

SimuEllipse::SimuEllipse(ElementType type, int x, int y, int width, int height, QBrush brush)
    : QGraphicsEllipseItem::QGraphicsEllipseItem(x, y, width, height)
{
    this->type = type;
    QPen pen(brush.color());
    setPen(pen);
    setBrush(brush);

    in_simulation = false;

    // setting up a signal for SimuWidget to show statistics
    clicked_action = new QAction("Pokaż moje statsy!");
}

void SimuEllipse::setID(int id)
{
    this->id = id;
    clicked_action->setData(QVariant(id));
}

QAction *SimuEllipse::getClickedAction()
{
    return clicked_action;
}

void SimuEllipse::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);
    qDebug()<<"mousePressEvent";
    if(in_simulation)
        clicked_action->activate(QAction::Trigger);
}

void SimuEllipse::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);
    qDebug()<<"mouseReleaseEvent "<<x()<<" "<<y();
    if(abs(x()) >= Map::WIDTH/2 || abs(y()) >= Map::HEIGHT/2 ) {
        setPos(0.0, 0.0);
    }
}

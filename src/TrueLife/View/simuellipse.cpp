#include "simuellipse.h"

SimuEllipse::SimuEllipse(ElementType type, int x, int y, int width, int height, QPen pen, QBrush brush)
    : QGraphicsEllipseItem::QGraphicsEllipseItem(x, y, width, height)
{
    this->type = type;
    setPen(pen);
    setBrush(brush);
}

SimuEllipse::SimuEllipse(ElementType type, int x, int y, int width, int height, QBrush brush)
    : QGraphicsEllipseItem::QGraphicsEllipseItem(x, y, width, height)
{
    this->type = type;
    QPen pen(brush.color());
    setPen(pen);
    setBrush(brush);
}

void SimuEllipse::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);
    qDebug()<<"mousePressEvent";
}

void SimuEllipse::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);
    qDebug()<<"mouseReleaseEvent";
}

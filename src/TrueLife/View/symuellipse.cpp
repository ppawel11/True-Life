#include "symuellipse.h"

SymuEllipse::SymuEllipse(int x, int y, int width, int height, QPen pen, QBrush brush)
    : QGraphicsEllipseItem::QGraphicsEllipseItem(x, y, width, height)
{
    setPen(pen);
    setBrush(brush);
}

SymuEllipse::SymuEllipse(int x, int y, int width, int height, QBrush brush)
    : QGraphicsEllipseItem::QGraphicsEllipseItem(x, y, width, height)
{
    QPen pen(brush.color());
    setPen(pen);
    setBrush(brush);
}

void SymuEllipse::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);
    qDebug()<<"mousePressEvent";
}

void SymuEllipse::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mouseReleaseEvent(event);
    qDebug()<<"mouseReleaseEvent";
}

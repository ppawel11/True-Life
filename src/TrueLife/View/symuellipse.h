#ifndef SYMUELLIPSE_H
#define SYMUELLIPSE_H

#include <QGraphicsEllipseItem>
#include <QPen>
#include <QBrush>

#include "common.h"

enum AnimalType {PREDATOR, HERBIVORE};

class SymuEllipse : public QGraphicsEllipseItem
{
public:
    SymuEllipse(int x, int y, int width, int height, QPen pen, QBrush brush);
    SymuEllipse(int x, int y, int width, int height, QBrush brush);

protected:
    /**
     * @brief Click on element to see its stats
     *
     * Works in symulation mode but only when paused.
     *
     * "The event is QEvent::ignore()d for items
     * that are neither movable nor selectable."
     *
     * @param event
     */
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);

    /**
     * @brief Checks if object is placed on map
     *
     * In creation mode
     *
     * @param event
     */
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // SYMUELLIPSE_H

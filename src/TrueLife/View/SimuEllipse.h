#ifndef SIMUELLIPSE_H
#define SIMUELLIPSE_H

#include <QGraphicsEllipseItem>
#include <QPen>
#include <QBrush>

#include "Common.h"


/**
 * @brief Visual representation of symulated elements
 */
class SimuEllipse : public QGraphicsEllipseItem
{
public:
    SimuEllipse(ElementType type, int x, int y, int width, int height, QPen pen, QBrush brush);
    SimuEllipse(ElementType type, int x, int y, int width, int height, QBrush brush);

    ElementType getType() {return type;}

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
     * Works in creation mode.
     *
     * @param event
     */
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

    /**
     * @brief Type of the element
     */
    ElementType type;
};

#endif // SIMUELLIPSE_H

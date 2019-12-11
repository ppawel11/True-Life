#ifndef SYMUELLIPSE_H
#define SYMUELLIPSE_H

#include <QGraphicsEllipseItem>
#include <QPen>
#include <QBrush>

#include "common.h"

enum ElementType {PREDATOR, HERBIVORE, WATER, FOOD};

/**
 * @brief Visual representation of symulated elements
 */
class SymuEllipse : public QGraphicsEllipseItem
{
public:
    SymuEllipse(ElementType type, int x, int y, int width, int height, QPen pen, QBrush brush);
    SymuEllipse(ElementType type, int x, int y, int width, int height, QBrush brush);

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

#endif // SYMUELLIPSE_H

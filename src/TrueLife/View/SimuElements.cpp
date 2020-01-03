#include "SimuElements.h"

SimuElements::SimuElements():
    id_counter_animals(0), id_counter_supply(0) {}

SimuElements::~SimuElements(){}

void SimuElements::addAnimal(SimuEllipse *animal)
{
    animals_list.insert({++id_counter_animals, animal});
}

void SimuElements::addSupply(SimuEllipse *supply)
{
    supply_list.insert({++id_counter_supply, supply});
}

SimuEllipse * SimuElements::addAnimal(ElementType type)
{
    QPen pen(Qt::black);
    pen.setWidth(1);

    QBrush brush;
    if(type == PREDATOR) {
        brush.setColor(OurColors::red);
        brush.setStyle(Qt::SolidPattern);
    }
    else if(type == HERBIVORE) {
        brush.setColor(OurColors::green);
        brush.setStyle(Qt::SolidPattern);
    }
    else {
        qDebug()<<"Proba utworzenia zwierzęcia nieistniejącego typu!";
        return nullptr;
    }

    SimuEllipse *animal =
            new SimuEllipse(type, Map::WIDTH/2, Map::HEIGHT/2,
                            15, 15, pen, brush);
    addAnimal(animal);
    return animal;
}

SimuEllipse * SimuElements::addSupply(ElementType type)
{
    QPen pen(Qt::black);
    pen.setWidth(1);

    QBrush brush;
    int width, height;
    if(type == WATER) {
        brush.setColor(OurColors::blue);
        brush.setStyle(Qt::SolidPattern);
        width = 50;
        height = 33;
    }
    else if(type == FOOD) {
        brush.setColor(OurColors::green);
        brush.setStyle(Qt::SolidPattern);
        width = 10;
        height = 10;
    }
    else {
        qDebug()<<"Proba utworzenia zasobu nieistniejącego typu!";
        return nullptr;
    }

    SimuEllipse *supply =
            new SimuEllipse(type, Map::WIDTH/2, Map::HEIGHT/2,
                            width, height, pen, brush);
    addSupply(supply);
    return supply;
}

std::map<int, SimuEllipse *> SimuElements::getAnimals()
{
    return animals_list;
}

std::map<int, SimuEllipse *> SimuElements::getSupply()
{
    return supply_list;
}

void SimuElements::setItemsMovable(bool enabled)
{
    for (auto item = animals_list.begin(); item != animals_list.end(); ++item) {
        item->second->setFlag(QGraphicsItem::ItemIsMovable, enabled);
    }

    for (auto item = supply_list.begin(); item != supply_list.end(); ++item) {
        item->second->setFlag(QGraphicsItem::ItemIsMovable, enabled);
    }
}

void SimuElements::setItemsClickable(bool enabled)
{
    for (auto item = animals_list.begin(); item != animals_list.end(); ++item) {
        if(enabled)
            item->second->setAcceptedMouseButtons(Qt::AllButtons);
        else
            item->second->setAcceptedMouseButtons(0);
    }

    for (auto item = supply_list.begin(); item != supply_list.end(); ++item) {
        if(enabled)
            item->second->setAcceptedMouseButtons(Qt::AllButtons);
        else
            item->second->setAcceptedMouseButtons(0);
    }
}

SimuElements* SimuElements::getInstance() {
    static SimuElements *instance = new SimuElements();
    return instance;
}

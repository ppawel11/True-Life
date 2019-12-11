#include "symuelements.h"

SymuElements::SymuElements(){}

SymuElements::~SymuElements(){}

void SymuElements::addAnimal(SymuEllipse *animal)
{
    animals_list.insert({++id_counter_animals, animal});
}

void SymuElements::addSupply(SymuEllipse *supply)
{
    supply_list.insert({++id_counter_supply, supply});
}

SymuEllipse * SymuElements::addAnimal(ElementType type)
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

    SymuEllipse *animal =
            new SymuEllipse(type, Map::WIDTH/2, Map::HEIGHT/2,
                            15, 15, pen, brush);
    addAnimal(animal);
    return animal;
}

SymuEllipse * SymuElements::addSupply(ElementType type)
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

    SymuEllipse *supply =
            new SymuEllipse(type, Map::WIDTH/2, Map::HEIGHT/2,
                            width, height, pen, brush);
    addSupply(supply);
    return supply;
}

SymuElements& SymuElements::getInstance() {
    static SymuElements instance;
    return instance;
}

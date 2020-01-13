#include "SimuElements.h"

SimuElements::SimuElements():
    id_counter_animals(0), id_counter_supply(0) {}

SimuElements::~SimuElements(){}

void SimuElements::addElement(SimuEllipse *element)
{
    int type = element->getType();
    if(type == PREDATOR || type == HERBIVORE)
        animals_list.insert({++id_counter_animals, element});
    else
        supply_list.insert({++id_counter_supply, element});
}

SimuEllipse * SimuElements::addElement(ElementType type)
{
    QPen pen(Qt::black);
    pen.setWidth(1);

    QBrush brush;
    int width, height;
    if(type == PREDATOR) {
        brush.setColor(OurColors::red);
        brush.setStyle(Qt::SolidPattern);
        width = Ani::WIDTH;
        height = Ani::HEIGHT;
    }
    else if(type == HERBIVORE) {
        brush.setColor(OurColors::green);
        brush.setStyle(Qt::SolidPattern);
        width = Ani::WIDTH;
        height = Ani::HEIGHT;
    }
    else if(type == FOOD) {
        brush.setColor(OurColors::green);
        brush.setStyle(Qt::SolidPattern);
        width = Foo::WIDTH;
        height = Foo::HEIGHT;
    }
    else if(type == WATER) {
        brush.setColor(OurColors::blue);
        brush.setStyle(Qt::SolidPattern);
        width = Wat::WIDTH;
        height = Wat::HEIGHT;
    }
    else {
        qDebug()<<"Proba utworzenia zasobu nieistniejącego typu!";
        return nullptr;
    }

    SimuEllipse *element =
            new SimuEllipse(type,
                            Map::WIDTH/2, Map::HEIGHT/2,
                            width, height,
                            pen, brush);
    addElement(element);
    return element;
}

std::map<int, SimuEllipse *> SimuElements::getAnimals()
{
    return animals_list;
}

std::map<int, SimuEllipse *> SimuElements::getSupply()
{
    return supply_list;
}

SimuEllipse *SimuElements::getAnimal(int id)
{
    return animals_list[id];
}

int SimuElements::animalsCount()
{
    return animals_list.size();
}

int SimuElements::supplyCount()
{
    return supply_list.size();
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
    for (auto item : animals_list) {
        if(enabled)
            item.second->setAcceptedMouseButtons(Qt::AllButtons);
        else
            item.second->setAcceptedMouseButtons(0);
    }

    for (auto item = supply_list.begin(); item != supply_list.end(); ++item) {
        if(enabled)
            item->second->setAcceptedMouseButtons(Qt::AllButtons);
        else
            item->second->setAcceptedMouseButtons(0);
    }
}

void SimuElements::updateElements(
        boost::shared_ptr<EnvDataModel> data)
{
    for(auto animal : data->alive) {
        animals_list[animal->id]->setPos(animal->x, animal->y);
    }

    for(auto id : data->dead_ids) {
        delete animals_list[id];
        animals_list.erase(id);
    }

    for(auto animal : data->born) {
        addElement(animal->type);
        animals_list[id_counter_animals]->setPos(animal->x, animal->y);
        animal->id = id_counter_animals;
    }

    data->alive.clear();
    data->dead_ids.clear();
}

boost::shared_ptr<EnvDataModel> SimuElements::createDataModel()
{
    boost::shared_ptr<EnvDataModel> model(new EnvDataModel());
    for(auto an : animals_list){
        model->alive.push_back(
            new AnimalModel(
                an.first,
                an.second->x(),
                an.second->y(),
                an.second->getType()
            ));
    }
    return model;
}

SimuElements* SimuElements::getInstance() {
    static SimuElements *instance = new SimuElements();
    return instance;
}

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

SymuElements& SymuElements::getInstance() {
    static SymuElements instance;
    return instance;
}

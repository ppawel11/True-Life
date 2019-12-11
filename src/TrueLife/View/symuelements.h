#ifndef SYMUELEMENTS_H
#define SYMUELEMENTS_H

#include "symuellipse.h"

class SymuElements
{
public:
    SymuElements();
    ~SymuElements();

    static SymuElements& getInstance();

    void addAnimal(SymuEllipse *animal);

    void addSupply(SymuEllipse *supply);

private:
    /**
     * @brief list of animals
     *
     * int id
     * QGraphicsEllipseItem* pointer to predator view
     */
    std::map<int, SymuEllipse*> animals_list;
    int id_counter_animals;

    std::map<int, SymuEllipse*> supply_list;
    int id_counter_supply;

    /**
     * @brief Counter of predators
     */
    int pred_counter;

    /**
     * @brief Counter of herbivores
     */
    int herb_counter;
};

#endif // SYMUELEMENTS_H

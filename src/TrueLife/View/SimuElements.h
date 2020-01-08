#ifndef SIMUELEMENTS_H
#define SIMUELEMENTS_H

#include "SimuEllipse.h"
#include "../Common.h"

/**
 * @brief Container for objects being visual representations of sumulated elements.
 */
class SimuElements
{
public:
    SimuElements();
    ~SimuElements();

    static SimuElements* getInstance();

    void addAnimal(SimuEllipse *animal);
    void addSupply(SimuEllipse *supply);

    SimuEllipse * addAnimal(ElementType type);
    SimuEllipse * addSupply(ElementType type);

    std::map<int, SimuEllipse*> getAnimals();
    std::map<int, SimuEllipse*> getSupply();

    void setItemsMovable(bool enabled = true);
    void setItemsClickable(bool enabled = true);

private:
    /**
     * @brief list of animals
     *
     * int id
     * SymuEllipse* pointer to representation of simulated element
     */
    std::map<int, SimuEllipse*> animals_list;

    /**
     * @brief list of supply
     *
     * int id
     * SymuEllipse* pointer to representation of simulated element
     */
    std::map<int, SimuEllipse*> supply_list;

    /**
     * @brief Increment-only counter for id generation for animals
     */
    int id_counter_animals;

    /**
     * @brief Increment-only counter for id generation for supply
     */
    int id_counter_supply;
};

#endif // SIMUELEMENTS_H

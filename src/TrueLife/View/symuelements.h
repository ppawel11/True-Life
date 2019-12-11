#ifndef SYMUELEMENTS_H
#define SYMUELEMENTS_H

#include "symuellipse.h"
#include "common.h"

namespace Map {
    static const int WIDTH = 500;
    static const int HEIGHT = 500;
    static const int BORDER = 10;
}

/**
 * @brief Container for objects being visual representations of sumulated elements.
 */
class SymuElements
{
public:
    SymuElements();
    ~SymuElements();

    static SymuElements& getInstance();

    void addAnimal(SymuEllipse *animal);
    void addSupply(SymuEllipse *supply);

    SymuEllipse * addAnimal(ElementType type);
    SymuEllipse * addSupply(ElementType type);

private:
    /**
     * @brief list of animals
     *
     * int id
     * SymuEllipse* pointer to representation of simulated element
     */
    std::map<int, SymuEllipse*> animals_list;

    /**
     * @brief list of supply
     *
     * int id
     * SymuEllipse* pointer to representation of simulated element
     */
    std::map<int, SymuEllipse*> supply_list;

    /**
     * @brief Increment-only counter for id generation for animals
     */
    int id_counter_animals;

    /**
     * @brief Increment-only counter for id generation for supply
     */
    int id_counter_supply;
};

#endif // SYMUELEMENTS_H

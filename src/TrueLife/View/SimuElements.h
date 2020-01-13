#ifndef SIMUELEMENTS_H
#define SIMUELEMENTS_H

#include "SimuEllipse.h"
#include "Model/EnvDataModel.h"
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

    SimuEllipse * getAnimal(int id);
    int animalsCount();
    int supplyCount();

    void setItemsMovable(bool enabled = true);
    void setItemsClickable(bool enabled = true);

    std::vector<int> updateAnimals(
            boost::shared_ptr<EnvDataModel> data);
    boost::shared_ptr<EnvDataModel> createDataModel();


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
     *
     * its value is equal to the last created animal's ID
     */
    int id_counter_animals;

    /**
     * @brief Increment-only counter for id generation for supply
     *
     * its value is equal to the last created supply's ID
     */
    int id_counter_supply;
};

#endif // SIMUELEMENTS_H

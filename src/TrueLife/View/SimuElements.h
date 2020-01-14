/**
 * @author Grzegorz Fijałkowski
 */
#ifndef SIMUELEMENTS_H
#define SIMUELEMENTS_H

#include <QCursor>

#include "SimuEllipse.h"
#include "Model/EnvDataModel.h"
#include "Model/StatisticsModel.h"
#include "../Common.h"

/**
 * @brief Container for objects being visual representations of sumulated elements.
 *
 * The class is a singleton.
 */
class SimuElements
{
private:
    /**
     * @brief Constructor
     */
    SimuElements();

public:
    /**
     * @brief Destructor
     */
    ~SimuElements();

    /**
     * @brief By this function an instance of the class can be obtained
     * @return pointer to an instance of the class
     */
    static SimuElements* getInstance();

    void clear();

    void addElement(SimuEllipse *supply);

    SimuEllipse * addElement(ElementType type);

    std::map<int, SimuEllipse*> getAnimals();
    std::map<int, SimuEllipse*> getSupply();

    SimuEllipse * getAnimal(int id);
    int animalsCount();
    int supplyCount();

    void setItemsMovable(bool enabled = true);
    void setItemsClickable(bool enabled = true);

    void updateElements(boost::shared_ptr<EnvDataModel> data);

    boost::shared_ptr<EnvDataModel> createDataModel();
    StatisticsModel * createStatsModel(std::pair<double,double> times);

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

    int dead_predators;
    int dead_herbivores;
};

#endif // SIMUELEMENTS_H

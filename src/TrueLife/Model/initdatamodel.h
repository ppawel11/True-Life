#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

/**
 * @brief Holds inital data of simulations
 */
#include "model.h"
#include "Entities/animal.h"
#include "vector"

using namespace std;

struct InitDataModel: Model {
    vector<Animal*> animals;
};

#endif // INITDATAMODEL_H

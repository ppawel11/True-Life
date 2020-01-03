#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

/**
 * @brief Holds inital data of simulations
 */
#include "Model.h"
#include "AnimalModel.h"
#include "vector"

using namespace std;

struct EnvironmentDataModel: Model {
    vector<AnimalModel*> animals;
};

#endif // INITDATAMODEL_H

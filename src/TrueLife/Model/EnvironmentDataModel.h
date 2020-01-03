#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

#include "vector"
#include "Model.h"
#include "AnimalModel.h"

using namespace std;

/**
 * @brief Holds inital data of simulations
 */
struct EnvironmentDataModel: Model {
    vector<AnimalModel*> animals;
};

#endif // INITDATAMODEL_H

#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

/**
 * @brief Holds inital data of simulations
 */
#include "model.h"
#include "animalmodel.h"
#include "vector"

using namespace std;

struct InitDataModel: Model {
    vector<AnimalModel*> animals;
};

#endif // INITDATAMODEL_H

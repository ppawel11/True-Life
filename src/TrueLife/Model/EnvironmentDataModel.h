#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

/**
 * @brief Hold models of Animals used in communication between Environment and MainWindow
 */
#include "Model.h"
#include "AnimalModel.h"
#include "vector"

using namespace std;

struct EnvironmentDataModel: Model {
    vector<AnimalModel*> animals;
};

#endif // INITDATAMODEL_H

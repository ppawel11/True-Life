#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

#include "vector"

#include "Model.h"
#include "AnimalModel.h"

using namespace std;

/**
 * @brief Hold models of Animals used in communication between Environment and MainWindow
 */
struct EnvironmentDataModel: Model {
    vector<AnimalModel*> animals;
};

#endif // INITDATAMODEL_H

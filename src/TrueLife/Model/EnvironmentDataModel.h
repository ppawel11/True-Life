#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

#include "vector"

#include "Model.h"
#include "AnimalModel.h"

/**
 * @brief Hold models of Animals used in communication between Environment and MainWindow
 */
struct EnvironmentDataModel: Model {
    std::vector<AnimalModel*> animals;
};

#endif // INITDATAMODEL_H

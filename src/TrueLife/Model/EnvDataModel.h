#ifndef INITDATAMODEL_H
#define INITDATAMODEL_H

#include "vector"

#include "Model.h"
#include "AnimalModel.h"

/**
 * @brief Hold models of Animals used in communication between Environment and MainWindow
 */
struct EnvDataModel: Model {
    std::vector<AnimalModel*> alive;
    std::vector<AnimalModel*> born;
    std::vector<int> dead_ids;
};

#endif // INITDATAMODEL_H

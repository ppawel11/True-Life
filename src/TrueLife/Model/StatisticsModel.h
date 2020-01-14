/**
 * @author Grzegorz Fijałkowski
 */
#ifndef STATISTICSMODEL_H
#define STATISTICSMODEL_H

#include "Model.h"

/**
 * @brief Holds statistics of simulations
 */
struct StatisticsModel: Model {

    StatisticsModel(int alive_p, int alive_h,
                    int dead_p, int dead_h,
                    std::pair<double,double> times):
    alive_predators(alive_p), alive_herbivores (alive_h),
    dead_predators(dead_p), dead_herbivores(dead_h),
    times(times) {}

    StatisticsModel():
    alive_predators(0), alive_herbivores (0),
    dead_predators(0), dead_herbivores(0) {}

    int alive_predators;
    int alive_herbivores;
    int dead_predators;
    int dead_herbivores;
    std::pair<double,double> times;
};

#endif // STATISTICSMODEL_H

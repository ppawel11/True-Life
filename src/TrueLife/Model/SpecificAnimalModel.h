#ifndef SPECIFICANIMALMODEL_H
#define SPECIFICANIMALMODEL_H

/**
 * @brief Holds data of a specific animal
 */
struct SpecificAnimalModel
{
    SpecificAnimalModel(int energy_, int view_range_, int velocity_, int mobility_, int ready_cooldown_)
        : energy(energy_), view_range(view_range_), velocity(velocity_), mobility(mobility_), ready_cooldown(ready_cooldown_) {}
    int energy;
    int view_range;
    int velocity;
    int mobility;
    int ready_cooldown;
};

#endif // SPECIFICANIMALMODEL_H

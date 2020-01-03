#ifndef ANIMALFACTORY_H
#define ANIMALFACTORY_H

#include "Entities/Animal.h"
#include "Entities/Predator.h"
#include "Entities/Herbivore.h"
#include "Model/AnimalModel.h"
#include "Common.h"

class AnimalFactory
{
public:
    AnimalFactory();
    Animal * createAnimal(AnimalModel * animal_model);
};

#endif // ANIMALFACTORY_H

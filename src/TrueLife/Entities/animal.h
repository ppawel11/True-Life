#ifndef ANIMAL_H
#define ANIMAL_H

#include "string"
#include <iostream>
#include <Model/animalmodel.h>
#include <common.h>

using namespace std;
/**
 * @brief Base for predators and herbivares
 */
class Animal
{
protected:
    int id;
    int x;
    int y;
    int velo_x;
    int velo_y;
    ElementType type;
public:
    Animal(int, int, int);
    Animal(AnimalModel * animal);
    int getId();
    void step();
    void show();
};

#endif // ANIMAL_H

#ifndef ANIMAL_H
#define ANIMAL_H

#include "string"
#include <iostream>
#include <Model/AnimalModel.h>
#include <Common.h>

using namespace std;
/**
 * @brief Base for predators and herbivares
 */

enum MoveState {WALK, SLEEP, CHASE, ESCAPE};

class Animal
{
protected:
    int id;
    int x, y;
    int velo_x, velo_y;
public:
    Animal(int, int, int);
//    Animal(AnimalModel * animal);
    int getId();

    void step();
    void eat();
    void die();

    void show(); // debuging
};

#endif // ANIMAL_H

#ifndef ANIMAL_H
#define ANIMAL_H

#include "string"
#include <iostream>

using namespace std;
/**
 * @brief Base for predators and herbivares
 */
class Animal
{
protected:
    int x;
    int y;
    int velo_x;
    int velo_y;
public:
    Animal(int, int);
    void step();
    void show();
};

#endif // ANIMAL_H

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

#include <Model/AnimalModel.h>
#include <Common.h>


enum MoveState {WALK, SLEEP, CHASE, ESCAPE};

/**
 * @brief Base for predators and herbivores
 */
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
    int getX() {return x;}
    int getY() {return y;}

    /**
     * @brief Single animal movement
     */
    void step();
    /**
     * @brief Animal gets energy and destroys the eaten Food
     */
    void eat();
    /**
     * @brief End of Animal's life
     */
    void die();

    void show(); // debuging
};

#endif // ANIMAL_H

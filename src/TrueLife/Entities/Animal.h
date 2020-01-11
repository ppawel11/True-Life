#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Food.h"

#include "../Common.h"


enum MoveState {WALK, SLEEP, CHASE, ESCAPE};
#define MAX_VELOCITY 10
#define VELOCITY_PRECISION 100

/**
 * @brief Base for predators and herbivores
 */
class Animal
{
protected:
    int id;
    float x, y;
    /**
     * @brief Velocity versor components
     */
    float velo_x, velo_y;
    int velocity;
    int mobility;
    int energy;

public:
    Animal(int, float, float);
    int getId() {return id;}
    int getX() {return x;}
    int getY() {return y;}
    int getVelocity() {return velocity;}
    int getMobility() {return mobility;}


    /**
     * @brief Single animal movement
     */
    void step();
    /**
     * @brief Animal gets energy and destroys the eaten Food
     */
    void eat(Food*);
    /**
     * @brief End of Animal's life
     */
    void die();

    void changeDirectionRandomly();

    void reduceEnergy();

    void show(); // debuging
};

#endif // ANIMAL_H

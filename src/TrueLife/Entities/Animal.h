#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

#include <Model/AnimalModel.h>
#include <Common.h>


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
     * @brief Velocity versors
     */
    float velo_x, velo_y;
    int velocity;

public:
    Animal(int, float, float);
//    Animal(AnimalModel * animal);
    int getId() {return id;}
    int getX() {return x;}
    int getY() {return y;}
    int getVelocity() {return velocity;}

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

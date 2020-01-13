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

class Predator;
class Herbivore;
class AnimalModel;

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
    /**
     * @brief When dead changes to true animal will be removed from environment animals vector during next time_tick
     */
    bool dead;
    int ready_cooldown;

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
//    void eat(Food*);
    /**
     * @brief End of Animal's life
     */
    void die();
    /**
     * @brief Animal changes direction of movement, how often it happens depends on mobility
     */
    void changeDirectionRandomly();
    /**
     * @brief Animal's energy decreases after movement, returns true if energy < 0
     */
    void reduceEnergy();

    virtual AnimalModel* accept(Animal*) = 0;

    virtual AnimalModel* interact(Predator*) = 0;
    virtual AnimalModel* interact(Herbivore*) = 0;

    bool isDead();

    void unready();
    bool isReady();
    void reduceReadyCooldown();

    void show(); // debuging
};

#endif // ANIMAL_H

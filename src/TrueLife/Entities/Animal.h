#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Food.h"

#include "../Common.h"
#include "../Model/AnimalModel.h"

#define MAX_VELOCITY 10
#define VELOCITY_PRECISION 100
#define INIT_MOBILITY 1
#define INIT_ENERGY 2500
#define INIT_VIEW_RANGE 150
#define INIT_READY_COOLDOWN 1000

/**
 * @brief Base for predators and herbivores
 */

class Predator;
class Herbivore;

class Animal
{
protected:
    int id;
    double x, y;
    /**
     * @brief Velocity versor components
     */
    double velo_x, velo_y;
    int velocity;
    int mobility;
    int energy;
    /**
     * @brief When dead changes to true animal will be removed from environment animals vector during next time_tick
     */
    bool dead;
    /**
     * @brief If it is equal to 0, the animal is ready for reproduction
     */
    int ready_cooldown;
    /**
     * @brief How far can be objects with which animal will be able to interact
     */
    int view_range;
    /**
     * @brief Animal of the same brief also ready for reproduction
     */
    Animal* mate_target;
    MoveState move_state;

public:
    Animal(int, double, double);

    int getId() {return id;}
    double getX() {return x;}
    double getY() {return y;}
    int getVelocity() {return velocity;}
    int getMobility() {return mobility;}
    Animal* getTarget() {return mate_target;}
    MoveState getMoveState() {return move_state;}
    int getViewRange() {return view_range;}
    bool isReady();
    bool isDead();

    /**
     * @brief Single animal movement
     */
    void step();
//    /**
//     * @brief Animal gets energy and destroys the eaten Food
//     */
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
     * @brief Animal's energy decreases after movement
     */
    void reduceEnergy();
    /**
     * @brief Animal's ready_cooldown gets lower with every time_tick
     */
    void reduceReadyCooldown();
    /**
     * @brief After reproduction sets ready_cooldown back to the initial value
     */
    void resetReadyCooldown();
    /**
     * @brief Sets target back to nullptr
     */
    void resetFollow();
    /**
     * @brief Returns distance between animals, used to find out with which animals this animal may interact
     */
    double howFarIs(Animal*);
    /**
     * @brief Animal will follow target_mate to reproduct
     */
    void follow(Animal*);
    /**
     * @brief Every Animal is a visitor and can visit other animals, to interact with them
     * It is used to find out what type of interaction animals should perform when iterating through Environment::animals vector without using dynamic_cast
     */
    virtual AnimalModel* accept(Animal*) = 0;
    virtual AnimalModel* interact(Predator*) = 0;
    virtual AnimalModel* interact(Herbivore*) = 0;
    /**
     * @brief Friendly type of interaction - following each other and reproduction when distance is small enough
     */
    virtual AnimalModel* cooperate(Animal*, ElementType const);

    void show(); // debuging
};

#endif // ANIMAL_H

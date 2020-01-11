#include "Animal.h"

Animal::Animal(int id, float x, float y){
    this->id = id;
    this->x = x;
    this->y = y;
    dead = false;
    velocity = (rand() % (MAX_VELOCITY-1)) + 1;
    velo_x = (rand() % VELOCITY_PRECISION*2)/float(VELOCITY_PRECISION) - 1;
    velo_y = round(VELOCITY_PRECISION*sqrt(1.0-(velo_x*velo_x)))/float(VELOCITY_PRECISION);
    if (rand() % 2)
        velo_y *= -1;
    mobility = 1;
    energy = 100;
}

void Animal::step(){
    x += velo_x;
    y += velo_y;
}

void Animal::changeDirectionRandomly(){
    velo_x = (rand() % VELOCITY_PRECISION*2)/float(VELOCITY_PRECISION) - 1;
    velo_y = round(VELOCITY_PRECISION*sqrt(1.0-(velo_x*velo_x)))/float(VELOCITY_PRECISION);
    if (rand() % 2)
        velo_y *= -1;
}

void Animal::die(){
    dead = true;
}

//void Animal::eat(Food* food){
//    energy += food->getCalories();
//    food->beEeaten();
//}


void Animal::show(){
    std::cout<<x<<" "<<y<<" "<<mobility<<" "<<velocity<<" "<<energy<<std::endl;
}

void Animal::reduceEnergy(){
    if (energy <= 0)
        die();
}

bool Animal::isDead(){
    return dead;
}

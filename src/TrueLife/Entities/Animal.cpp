#include "Animal.h"

Animal::Animal(int id, double x, double y){
    this->id = id;
    this->x = x;
    this->y = y;

    velocity = (rand() % (MAX_VELOCITY-1)) + 1;
    velo_x = (rand() % VELOCITY_PRECISION*2)/float(VELOCITY_PRECISION) - 1;
    velo_y = round(VELOCITY_PRECISION*sqrt(1.0-(velo_x*velo_x)))/float(VELOCITY_PRECISION);
    if (rand() % 2)
        velo_y *= -1;

    mobility = INIT_MOBILITY;
    energy = INIT_ENERGY;
    ready_cooldown = INIT_READY_COOLDOWN;
    view_range = INIT_VIEW_RANGE;
    dead = false;
    move_state = WALK;
    mate_target = nullptr;
}

void Animal::step(){
    if ((x+velo_x-15 < -1*Map::WIDTH/2) || (x+velo_x+15 > Map::WIDTH/2) || (y + velo_y-15 < -1* Map::HEIGHT /2) || (y+velo_y+15 > Map::HEIGHT/2)){
        /* To be sure that animals will not get outside the board */
        changeDirectionRandomly();
        return;
    }
    if (move_state == WALK){
//        if ((x+velo_x-5 < -1*Map::WIDTH/2) || (x+velo_x+15 > Map::WIDTH/2) || (y + velo_y-5 < -1* Map::HEIGHT /2) || (y+velo_y+15 > Map::HEIGHT/2)){
//            changeDirectionRandomly();
//            return;
//        }
    }
    else if (move_state == CHASE){
            double distance = howFarIs(mate_target);
            velo_x = (mate_target->getX() - getX()) / distance;
            velo_y = (mate_target->getY() - getY()) / distance;
        }
    x += velo_x;
    y += velo_y;
}

void Animal::follow(Animal* animal){
    move_state = CHASE;
    mate_target = animal;
}

void Animal::resetFollow(){
    move_state = WALK;
    mate_target = nullptr;
}

double Animal::howFarIs(Animal * target){
    return sqrt(pow(target->getX()-getX(), 2) + pow(target->getY()-getY(), 2));
}

AnimalModel* Animal::cooperate(Animal * friend_animal, ElementType type){
    double distance = howFarIs(friend_animal);
    if (distance < getViewRange() && distance > 10 && getMoveState() == WALK && isReady() && friend_animal->isReady()){
        follow(friend_animal);
    }
    else if(getTarget() == friend_animal && (distance > getViewRange() || !isReady() || !friend_animal->isReady())){
        resetFollow();
    }
    else if(isReady() && friend_animal->isReady() && distance <= 10){
        this->resetReadyCooldown();
        friend_animal->resetReadyCooldown();
        resetFollow();
        return new AnimalModel(this->getX(), this->getY(), type);
    }
    return nullptr;
}
//void escapeWall(){
//    bool left = false;
//    bool right = false;
//    bool top = false;
//    bool down = false;

//    if (x + velo_x - 5 < -1*Map::WIDTH/2)
//        left = true;
//    else if (x+velo_x + 5 > Map::WIDTH/2)
//        right = true;
//    if  (y + velo_y-5 < -1* Map::HEIGHT /2)
//        top = true;
//    else if (y+velo_y+15 > Map::HEIGHT/2)
//        down = true;

//}

void Animal::changeDirectionRandomly(){
    velo_x = (rand() % VELOCITY_PRECISION*2)/float(VELOCITY_PRECISION) - 1;
    velo_y = round(VELOCITY_PRECISION*sqrt(1.0-(velo_x*velo_x)))/float(VELOCITY_PRECISION);
    if (rand() % 2)
        velo_y *= -1;
}

void Animal::die(){
    dead = true;
}

void Animal::resetReadyCooldown(){
    ready_cooldown = 400;
}

bool Animal::isReady(){
    if (ready_cooldown == 0)
            return true;
    return false;
}

void Animal::reduceReadyCooldown(){
    if (ready_cooldown > 0)
        --ready_cooldown;
}

//void Animal::eat(Food* food){
//    energy += food->getCalories();
//    food->beEeaten();
//}


void Animal::show(){
    std::cout<<x<<" "<<y<<" "<<mobility<<" "<<velocity<<" "<<energy<<std::endl;
}

void Animal::reduceEnergy(){
    if (--energy <= 0)
        die();
}

bool Animal::isDead(){
    return dead;
}


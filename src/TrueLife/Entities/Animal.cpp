#include "Animal.h"

using namespace std;

Animal::Animal(int id, float x, float y){
    this->id = id;
    this->x = x;
    this->y = y;
    velocity = (rand() % (MAX_VELOCITY-1)) + 1;
    velo_x = (rand() % VELOCITY_PRECISION*2)/float(VELOCITY_PRECISION) - 1;
    velo_y = round(VELOCITY_PRECISION*sqrt(1.0-(velo_x*velo_x)))/float(VELOCITY_PRECISION);
    if (rand() % 2)
        velo_y *= -1;
    std::cout<<"animal id:"<<id<<" velo_ver: "<<velo_x<<" "<<velo_y<<" velo: "<<velocity<<std::endl;
}

//Animal::Animal(AnimalModel *animal){
//    qDebug()<<"tworze animal id:"<<animal->id;
//    this->id = animal->id;
//    this->x = animal->x;
//    this->y = animal->y;
//    this->type = animal->type;

//    this->velo_x = 1;
//    this->velo_y = 1;
//}

void Animal::step(){
    x += velo_x;
    y += velo_y;
}

void Animal::die(){
    delete this;
}

void Animal::eat(){

}

void Animal::show(){
    cout<<x<<" "<<y<<endl;
}

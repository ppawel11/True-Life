#include "Animal.h"

using namespace std;

Animal::Animal(int id, int x, int y){
    this->id = id;
    this->x = x;
    this->y = y;
    this->velo_x = 1;
    this->velo_y = 1;
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

int Animal::getId(){
    return id;
}

#include "animal.h"

using namespace std;

Animal::Animal(int x, int y){
    this->x = x;
    this->y = y;
    this->velo_x = 1;
    this->velo_y = 1;
}

void Animal::step(){
    x += velo_x;
    y += velo_y;
}

void Animal::show(){
    cout<<x<<" "<<y<<endl;
}

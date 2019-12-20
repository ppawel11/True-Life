#include "controller.h"

Controller::Controller()
{

}

void Controller::attach(Observer* obs){
    observers.push_back(obs);
}

void Controller::notify(InitDataModel* m){
    for(auto obs : observers){
        obs->notify(m);
    }
}

void Controller::notify(StatisticsModel* m){
    for(auto obs : observers){
        obs->notify(m);
    }
}

void Controller::initSim(){
    InitDataModel* init = new InitDataModel();
    for(int i =0; i<5; i++)
        init->animals.push_back(new Animal(i, i+3));
    notify(init);
}

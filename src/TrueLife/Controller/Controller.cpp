/**
 * @author Paweł Lech
 */
#include "Controller.h"

Controller::Controller(){}

void Controller::attachEnv(boost::shared_ptr<Observer> obs){
    env_observer = obs;
}

void Controller::attachSimu(boost::shared_ptr<Observer> obs){
    simu_observer = obs;
}

void Controller::notifyEnv(boost::shared_ptr<EnvDataModel> data){
    //boost::shared_ptr<InitDataModel> mod(data);
    env_observer->update(data);
}

SpecificAnimalModel* Controller::request(int id){
    return env_observer->update(id);
}

void Controller::notifySimu(boost::shared_ptr<EnvDataModel> data){
    simu_observer->update(data);
}

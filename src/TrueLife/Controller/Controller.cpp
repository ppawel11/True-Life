#include "Controller.h"

Controller::Controller()
{

}

void Controller::attachEnv(obs_ptr obs){
    env_observer = obs;
}

void Controller::attachSimu(obs_ptr obs){
    simu_observer = obs;
}

void Controller::notifyEnv(data_ptr data){
    //boost::shared_ptr<InitDataModel> mod(data);
    env_observer->update(data);
}

void Controller::notifySimu(data_ptr data){
    simu_observer->update(data);
}

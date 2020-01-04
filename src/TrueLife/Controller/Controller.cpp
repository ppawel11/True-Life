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

void Controller::initSim(){
    boost::shared_ptr<EnvironmentDataModel> init;
   // boost::make_shared<InitDataModel>(new InitDataModel());
    for(int i =0; i<5; i++)
        init->animals.push_back(new AnimalModel(i, i, i+3, PREDATOR));
    notifyEnv(init);
}

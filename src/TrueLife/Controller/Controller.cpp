#include "Controller.h"

Controller::Controller()
{

}

void Controller::attach_env(obs_ptr obs){
    env_observer = obs;
}

void Controller::attach_simu(obs_ptr obs){
    window_observer = obs;
}

void Controller::notify_env(boost::shared_ptr<EnvironmentDataModel> m){
    //boost::shared_ptr<InitDataModel> mod(m);
    env_observer->update(m);
}

void Controller::notify_window(StatisticsModel* m){
    window_observer->update(m);
}

void Controller::initSim(){
    boost::shared_ptr<EnvironmentDataModel> init;
   // boost::make_shared<InitDataModel>(new InitDataModel());
    for(int i =0; i<5; i++)
        init->animals.push_back(new AnimalModel(i, i, i+3, PREDATOR));
    notify_env(init);
}

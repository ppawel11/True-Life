#include "TimeObserver.h"

TimeObserver::TimeObserver(boost::shared_ptr<TimeWizard> wizard){
    wizard->addObserver(this);
}

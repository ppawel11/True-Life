#include "timeobserver.h"

TimeObserver::TimeObserver(boost::shared_ptr<TimeWizard> wizard){
    wizard->addObserver(this);
}

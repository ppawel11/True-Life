#include "observer.h"

Observer::Observer(Controller * contr){
    controller = contr;
    controller->attach(this);
}

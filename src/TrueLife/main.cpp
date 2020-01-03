#include "View/MainWindow.h"
#include <QApplication>
#include "Entities/Animal.h"
#include "Entities/Environment.h"
#include "Entities/TimeWizard.h"

using namespace std;

int main(int argc, char *argv[])
{
    Controller* controller = new Controller();

    boost::shared_ptr<Environment> env;
    env = boost::make_shared<Environment>(Environment(controller));

    // timer settings
    time_ptr time_wizard;
    time_wizard = boost::make_shared<TimeWizard>(new TimeWizard());
    time_wizard->setPeriod(500);
    time_wizard->addObserver(env);
//    time_wizard->addObserver(w);


//    Animal a = Animal(0, 0, 0);

//    controller->initSim();
//    env.addAnimal(&a);

//    env.showAnimals();
//    env.moveAnimals();
//    cout<<"po ruchu:"<<endl;
//    env.showAnimals();

//    return 0;

    //-------------------------------------------

    QApplication app(argc, argv);

    simu_ptr simu_widget;
    simu_widget = std::make_unique<SimuWidget>(SimuWidget(time_wizard));

    MainWindow w(controller, std::move(simu_widget));
    w.show();

    int status = app.exec();
    env->showAnimals();
    return status;
}

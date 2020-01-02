#include "View/mainwindow.h"
#include <QApplication>
#include "Entities/animal.h"
#include "Entities/environment.h"
#include "Entities/timewizard.h"

using namespace std;

int main(int argc, char *argv[])
{
    Controller* controller = new Controller();


    // timer settings
    boost::shared_ptr<TimeWizard> time_wizard;
    time_wizard = boost::make_shared<TimeWizard>(new TimeWizard());
    time_wizard->setPeriod(500);
//    time_wizard->addObserver(Environment);

    Environment env = Environment(controller, time_wizard);

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
    simu_widget = std::make_unique<SimuWidget>(new SimuWidget());
    simu_widget->setTimeWizard(time_wizard);
    MainWindow w(controller, std::move(simu_widget));
    w.show();

    int status = app.exec();
    env.showAnimals();
    return status;
}

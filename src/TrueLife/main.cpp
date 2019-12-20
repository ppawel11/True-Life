#include "View/mainwindow.h"
#include <QApplication>
#include "Entities/animal.h"
#include "Entities/environment.h"

using namespace std;

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    int status = a.exec();

//    return status;
    Controller* controller = new Controller();
    Environment env = Environment(controller);

    Animal a = Animal(0, 0);

    controller->initSim();
    env.addAnimal(&a);

    env.showAnimals();
    env.moveAnimals();
    cout<<"po ruchu:"<<endl;
    env.showAnimals();
    return 0;

}

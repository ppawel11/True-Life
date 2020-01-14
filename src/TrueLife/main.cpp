/**
 * @file main.cpp
 * @author Grzegorz Fijałkowski
 *
 * @mainpage
 *
 * @section what-is-truelife Czym jest TrueLife?
 * Jest to program, który umożliwia przeprowadzenie symulacji
 * naturalnego ekosystemu. W prezentowanym środowisku występują
 * dwa rodzaje osobników: roślinożercy oraz mięsożercy.
 * Każdy z osobników zawiera zestaw swoich potrzeb (głód, pragnienie)
 * oraz zestaw cech, które określają w jaki sposób zachowuje się
 * podczas trwania symulacji (ruchliwość, szybkość, zasięg widzenia,
 * gotowość do reprodukcji).
 *
 * @section motivation Motywacja
 * Program został napisany na przedmiot ZPR.
 */
#include <stdlib.h>

#include <QApplication>

#include "View/MainWindow.h"
#include "Entities/Animal.h"
#include "Entities/Environment.h"
#include "Entities/TimeWizard.h"

/**
 * @brief Starting function of the application
 *
 * Creates:
 * - Controller
 * - Environment
 * - TimeWizard
 * - MainWindow (SimuWidget first)
 *
 * @param argc
 * @param argv
 * @return status of the apllicatin execution
 */
int main(int argc, char *argv[])
{
    srand(time(NULL));
    Controller* controller = new Controller();

    boost::shared_ptr<Environment> env(new Environment(controller));

    // timer settings
    boost::shared_ptr<TimeWizard> time_wizard(new TimeWizard());
    time_wizard->setPeriod(20, false);
    time_wizard->addObserver(env);

    QApplication app(argc, argv);

    boost::shared_ptr<SimuWidget> simu_widget(
                new SimuWidget(controller, time_wizard));

    controller->attachEnv(env);
    controller->attachSimu(simu_widget);

    //-------------------------------------------

    MainWindow m_win(simu_widget);
    m_win.show();

    return app.exec();
}

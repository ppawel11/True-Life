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

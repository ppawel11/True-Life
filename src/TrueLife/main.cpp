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
    Controller* controller = new Controller();

    boost::shared_ptr<Environment> env(new Environment(controller));

    // timer settings
    time_ptr time_wizard(new TimeWizard());
    time_wizard->setPeriod(30);
    time_wizard->addObserver(env);

    QApplication app(argc, argv);

    simu_ptr simu_widget(new SimuWidget(controller, time_wizard));

    controller->attachEnv(env);
    controller->attachSimu(simu_widget);

    //-------------------------------------------

    MainWindow m_win(simu_widget);
    m_win.show();
    int status = app.exec();

    return status;
}

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

    boost::shared_ptr<Environment> env;
    env = boost::make_shared<Environment>(Environment(controller));

    // timer settings
    time_ptr time_wizard;
    time_wizard = boost::make_shared<TimeWizard>(new TimeWizard());
    time_wizard->setPeriod(500);
    time_wizard->addObserver(env);

    QApplication app(argc, argv);

    simu_ptr simu_widget;
    simu_widget = boost::make_shared<SimuWidget>(
                    SimuWidget(controller, time_wizard)
                );

    std::unique_ptr<MainWindow> m_win;
    m_win = std::make_unique<MainWindow>(
                MainWindow(simu_widget)
            );

    controller->attach_env(env);
    controller->attach_simu(simu_widget);

    //-------------------------------------------

    m_win->show();
    int status = app.exec();

    return status;
}

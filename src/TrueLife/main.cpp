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

    QApplication app(argc, argv);

    simu_ptr simu_widget;
    simu_widget = std::make_unique<SimuWidget>(SimuWidget(time_wizard));

    boost::shared_ptr<MainWindow> m_win;
    m_win = boost::make_shared<MainWindow>(
                MainWindow(controller, std::move(simu_widget))
            );

    controller->attach_env(env);
    controller->attach_window(m_win);

    //-------------------------------------------

    m_win->show();
    int status = app.exec();

    return status;
}

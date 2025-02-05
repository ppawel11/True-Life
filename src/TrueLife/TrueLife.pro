#-------------------------------------------------
#
# Project created by QtCreator 2019-11-26T16:55:36
#
#-------------------------------------------------

QT       += core gui charts
#QMAKE_CXXFLAGS += -lboost_unit_test_framework-mt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TrueLife
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    Controller/Controller.cpp \
    Entities/Animal.cpp \
    Entities/Environment.cpp \
    Entities/TimeWizard.cpp \
    Entities/Predator.cpp \
    Entities/Herbivore.cpp \
    Abstracts/Observer.cpp \
    Abstracts/AnimalFactory.cpp \
    View/CreatorWidget.cpp \
    View/MainWindow.cpp \
    View/SimuElements.cpp \
    View/SimuEllipse.cpp \
    View/SimuWidget.cpp \
    View/StatWidget.cpp \
    Abstracts/AnimalFactory.cpp \
    Entities/Predator.cpp \
    Entities/Herbivore.cpp \
    Entities/Food.cpp \
    Abstracts/AnimalVisitator.cpp \
    Abstracts/AnimalFactory.cpp \
    Abstracts/AnimalVisitator.cpp \
    Abstracts/Observer.cpp

HEADERS += \
    Controller/Controller.h \
    Entities/Animal.h \
    Entities/Environment.h \
    Entities/TimeWizard.h \
    Entities/Predator.h \
    Entities/Herbivore.h \
    Model/EnvDataModel.h \
    Model/Model.h \
    Model/AnimalModel.h \
    Model/StatisticsModel.h \
    Abstracts/Observer.h \
    Abstracts/TimeObserver.h \
    Abstracts/AnimalFactory.h \
    View/CreatorWidget.h \
    View/MainWindow.h \
    View/SimuElements.h \
    View/SimuEllipse.h \
    View/SimuWidget.h \
    View/StatWidget.h \
    Common.h \
    Abstracts/AnimalFactory.h \
    Entities/Predator.h \
    Entities/Herbivore.h \
    Entities/Food.h \
    Model/SpecificAnimalModel.h \
    Abstracts/AnimalFactory.h \
    Abstracts/Observer.h \
    Abstracts/TimeObserver.h

FORMS += \
    View/mainwindow.ui \
    View/statwidget.ui \
    View/simuwidget.ui \
    View/creatorwidget.ui

RESOURCES += \
    images.qrc

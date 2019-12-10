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
        View/mainwindow.cpp \
    View/statwidget.cpp \
    View/simuwidget.cpp \
    View/paramwidget.cpp \
    Controller/controller.cpp \
    Use-cases/feeder.cpp \
    Use-cases/multiplier.cpp \
    Use-cases/creator.cpp \
    Entities/animal.cpp \
    Entities/timewizard.cpp \
    View/symuellipse.cpp

HEADERS += \
        View/mainwindow.h \
    View/statwidget.h \
    View/simuwidget.h \
    View/paramwidget.h \
    common.h \
    Controller/controller.h \
    Model/initdatamodel.h \
    Model/statisticsmodel.h \
    Use-cases/feeder.h \
    Use-cases/multiplier.h \
    Use-cases/creator.h \
    Entities/animal.h \
    Entities/timewizard.h \
    View/symuellipse.h

FORMS += \
        View/mainwindow.ui \
    View/statwidget.ui \
    View/simuwidget.ui \
    View/paramwidget.ui

RESOURCES += \
    images.qrc

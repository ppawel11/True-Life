QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS += \
    ../View/SimuEllipse.h \
    ../View/SimuElements.h \
    ../Common.h \
    ../Entities/Animal.h

SOURCES += test.cpp \
    ../View/SimuEllipse.cpp \
    ../View/SimuElements.cpp \
    ../Entities/Animal.cpp

CONFIG += qt
#QMAKE_CXXFLAGS += -std=c++0x

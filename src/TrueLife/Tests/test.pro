QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS += \
    ../View/SimuEllipse.h \
    ../View/SimuElements.h \
    ../Common.h

SOURCES += test.cpp \
    ../View/SimuEllipse.cpp \
    ../View/SimuElements.cpp

CONFIG += qt
#QMAKE_CXXFLAGS += -std=c++0x

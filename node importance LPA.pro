QT += core
QT -= gui

TARGET = test0
CONFIG += console c++11
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    src/network.cpp \
    src/node.cpp

HEADERS += \
    src/network.h \
    src/node.h

QMAKE += core

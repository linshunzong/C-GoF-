#-------------------------------------------------
#
# Project created by QtCreator 2015-08-19T01:04:31
#
#-------------------------------------------------

QT       -= core  gui

include(../dir.pri)

TARGET = Factory
CONFIG   -= console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    concreteproduct.cpp \
    concretefactory.cpp

HEADERS += \
    product.h \
    concreteproduct.h \
    factory.h \
    concretefactory.h

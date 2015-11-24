#-------------------------------------------------
#
# Project created by QtCreator 2015-08-25T00:17:37
#
#-------------------------------------------------

QT       -= core

QT       -= gui

include(../dir.pri)

TARGET = Prototype
CONFIG   -= console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    prototype.cpp \
    concreteprototype.cpp

HEADERS += \
    prototype.h \
    concreteprototype.h

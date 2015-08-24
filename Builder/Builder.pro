#-------------------------------------------------
#
# Project created by QtCreator 2015-08-24T22:46:47
#
#-------------------------------------------------

QT       -= core

QT       -= gui

TARGET = Builder
CONFIG   -= console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    product.cpp \
    builder.cpp \
    concretebuilder.cpp \
    director.cpp

HEADERS += \
    product.h \
    builder.h \
    concretebuilder.h \
    director.h

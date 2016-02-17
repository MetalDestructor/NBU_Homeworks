QT += core
QT -= gui

CONFIG += c++11

TARGET = week1tasks
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    property.cpp

HEADERS += \
    property.h

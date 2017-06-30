#-------------------------------------------------
#
# Project created by QtCreator 2017-06-29T22:47:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = buttonTest
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    backgroundbutton.cpp \
    iconbutton.cpp

HEADERS  += widget.h \
    backgroundbutton.h \
    iconbutton.h

FORMS    += widget.ui

RESOURCES += \
    resources.qrc

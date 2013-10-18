#-------------------------------------------------
#
# Project created by QtCreator 2013-10-15T15:59:37
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Soaring
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    spuri.cpp \
    spview.cpp \
    sptestview.cpp \
    spsourcemodel.cpp \
    spinternalview.cpp \
    sppage.cpp \
    sphomepage.cpp \
    soaring.cpp \
    playlistview.cpp \
    playlistpage.cpp \
    spiderpage.cpp \
    flowlayout.cpp

HEADERS  += mainwindow.h \
    spuri.h \
    spview.h \
    soaring.h \
    sptestview.h \
    spsourcemodel.h \
    spinternalview.h \
    sppage.h \
    sphomepage.h \
    playlistview.h \
    playlistpage.h \
    spiderpage.h \
    flowlayout.h \
    spiderclasses.h \
    soaring_includes.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

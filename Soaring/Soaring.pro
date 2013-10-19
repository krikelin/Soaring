#-------------------------------------------------
#
# Project created by QtCreator 2013-10-15T15:59:37
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += core widgets multimedia network sql

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
    flowlayout.cpp \
    splabel.cpp \
    searchview.cpp \
    searchpage.cpp \
    splogindialog.cpp \
    splogincredential.cpp \
    mcchannel.cpp \
    mcepisode.cpp \
    mcresource.cpp \
    mcscrobbler.cpp \
    mcplayer.cpp \
    mcstreamer.cpp \
    mcmediastreamer.cpp \
    mashcast.cpp \
    mcmashcast.cpp \
    spchannelview.cpp \
    spchannelpage.cpp \
    spider/Spider.cpp \
    spider/luascript/luascript.cpp \
    vendor/luahtml/luahtml.cpp

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
    soaring_includes.h \
    splabel.h \
    searchview.h \
    searchpage.h \
    splogindialog.h \
    splogincredential.h \
    mcchannel.h \
    mcepisode.h \
    mashcast.h \
    mashcast_includes.h \
    mcresource.h \
    mcscrobbler.h \
    mcplayer.h \
    mcstreamer.h \
    mcmediastreamer.h \
    mcmashcast.h \
    spchannelview.h \
    spchannelpage.h \
    spider/Spider.h \
    spider/luascript/luascript.h \
    vendor/luahtml/luahtml.h

FORMS    += mainwindow.ui \
    splogindialog.ui

RESOURCES += \
    resources.qrc

CONFIG += c++11
unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += lua5.1

unix: PKGCONFIG += libxml-2.0

unix: PKGCONFIG += luabind

QT       += core gui multimedia network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtChess
TEMPLATE = app
CONFIG +=c++11

SOURCES += main.cpp \
    mainwindow.cpp \
    chessboard.cpp \
    chesshandler.cpp \
    steplist.cpp \
    gamesettings.cpp \
    settingsdialog.cpp \
    rc4.cpp \
    zobrist.cpp \
    movegenerator.cpp \
    steptimerthread.cpp \
    servernetwork.cpp \
    clientnetwork.cpp

HEADERS  += \
    mainwindow.h \
    chessboard.h \
    chesshandler.h \
    steplist.h \
    commdef.h \
    gamesettings.h \
    settingsdialog.h \
    rc4.h \
    zobrist.h \
    movegenerator.h \
    steptimerthread.h \
    servernetwork.h \
    clientnetwork.h \
    networkmsgdef.h

FORMS    += \
    mainwindow.ui \
    settingsdialog.ui

RESOURCES += \
    qtchess.qrc

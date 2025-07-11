/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionStart;
    QAction *actionNewGame;
    QAction *actionTie;
    QAction *actionUndo;
    QAction *actionLose;
    QAction *actionExit;
    QAction *actionSettings;
    QAction *actionSave;
    QAction *actionFlip;
    QWidget *centralWidget;
    QLCDNumber *timeLeft;
    QLabel *lblTurn;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu_Help;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 768);
        MainWindow->setMinimumSize(QSize(1024, 768));
        MainWindow->setMaximumSize(QSize(1024, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/chess.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/helpabout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionOpen->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/fileopen.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon2);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName("actionStart");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/start.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStart->setIcon(icon3);
        actionNewGame = new QAction(MainWindow);
        actionNewGame->setObjectName("actionNewGame");
        actionNewGame->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/newgame.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNewGame->setIcon(icon4);
        actionTie = new QAction(MainWindow);
        actionTie->setObjectName("actionTie");
        actionTie->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/tie.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTie->setIcon(icon5);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        actionUndo->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/fallback.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon6);
        actionLose = new QAction(MainWindow);
        actionLose->setObjectName("actionLose");
        actionLose->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/fail.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLose->setIcon(icon7);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/fileexit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExit->setIcon(icon8);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionSettings->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSettings->setIcon(icon9);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/filesave.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon10);
        actionFlip = new QAction(MainWindow);
        actionFlip->setObjectName("actionFlip");
        actionFlip->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/flip.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFlip->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        timeLeft = new QLCDNumber(centralWidget);
        timeLeft->setObjectName("timeLeft");
        timeLeft->setGeometry(QRect(510, 10, 75, 20));
        timeLeft->setMinimumSize(QSize(75, 20));
        timeLeft->setMaximumSize(QSize(75, 20));
        timeLeft->setDigitCount(8);
        timeLeft->setSegmentStyle(QLCDNumber::Flat);
        timeLeft->setProperty("value", QVariant(0.000000000000000));
        lblTurn = new QLabel(centralWidget);
        lblTurn->setObjectName("lblTurn");
        lblTurn->setGeometry(QRect(440, 10, 61, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1024, 27));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName("menu_Help");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionStart);
        menuFile->addAction(actionNewGame);
        menuFile->addAction(actionFlip);
        menuFile->addAction(actionUndo);
        menuFile->addAction(actionLose);
        menuFile->addAction(actionTie);
        menuFile->addAction(actionSettings);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menu_Help->addAction(actionAbout);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionStart);
        toolBar->addAction(actionNewGame);
        toolBar->addAction(actionFlip);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionTie);
        toolBar->addAction(actionLose);
        toolBar->addAction(actionSettings);
        toolBar->addAction(actionAbout);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\255\345\233\275\350\261\241\346\243\213", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        actionStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213(&S)", nullptr));
        actionNewGame->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\261\200(&N)", nullptr));
        actionTie->setText(QCoreApplication::translate("MainWindow", "\346\217\220\345\222\214(&T)", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "\346\202\224\346\243\213(&U)", nullptr));
        actionLose->setText(QCoreApplication::translate("MainWindow", "\350\256\244\350\276\223(&L)", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\200\211\351\241\271(&P)", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
        actionFlip->setText(QCoreApplication::translate("MainWindow", "\347\277\273\350\275\254\346\243\213\347\233\230(&R)", nullptr));
        lblTurn->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

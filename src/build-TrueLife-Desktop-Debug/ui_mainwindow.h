/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionSimulation;
    QAction *actionStatistics;
    QAction *actionHome;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuWidok;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSimulation = new QAction(MainWindow);
        actionSimulation->setObjectName(QStringLiteral("actionSimulation"));
        actionStatistics = new QAction(MainWindow);
        actionStatistics->setObjectName(QStringLiteral("actionStatistics"));
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("TeX Gyre Chorus"));
        font.setPointSize(25);
        label->setFont(font);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QStringLiteral("menuPlik"));
        menuWidok = new QMenu(menubar);
        menuWidok->setObjectName(QStringLiteral("menuWidok"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuWidok->menuAction());
        menuPlik->addAction(actionNew);
        menuPlik->addAction(actionSave);
        menuPlik->addSeparator();
        menuPlik->addAction(actionExit);
        menuWidok->addAction(actionSimulation);
        menuWidok->addAction(actionStatistics);
        menuWidok->addAction(actionHome);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "Nowa symulacja", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Zapisz do pliku", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Wyjd\305\272", Q_NULLPTR));
        actionSimulation->setText(QApplication::translate("MainWindow", "Symulacja", Q_NULLPTR));
        actionStatistics->setText(QApplication::translate("MainWindow", "Statystyki", Q_NULLPTR));
        actionHome->setText(QApplication::translate("MainWindow", "Ekran powitalny", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Witaj na planecie True Life!", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Lorem ipsum dolores Amrit.</p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Don't even try to click it", Q_NULLPTR));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", Q_NULLPTR));
        menuWidok->setTitle(QApplication::translate("MainWindow", "Widok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

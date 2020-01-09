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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionExit;
    QAction *actionSimulation;
    QAction *actionStatistics;
    QAction *actionHome;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *logo_label;
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
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
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("TeX Gyre Chorus"));
        font.setPointSize(25);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        logo_label = new QLabel(centralwidget);
        logo_label->setObjectName(QStringLiteral("logo_label"));

        gridLayout->addWidget(logo_label, 1, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

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
        logo_label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Utw\303\263rz now\304\205 symulacj\304\231!", Q_NULLPTR));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", Q_NULLPTR));
        menuWidok->setTitle(QApplication::translate("MainWindow", "Widok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

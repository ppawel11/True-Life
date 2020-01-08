/********************************************************************************
** Form generated from reading UI file 'creatorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATORWIDGET_H
#define UI_CREATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreatorWidget
{
public:
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout;
    QPushButton *addWaterButton;
    QPushButton *addPredatorButton;
    QPushButton *addHerbivoreButton;
    QPushButton *startButton;

    void setupUi(QWidget *CreatorWidget)
    {
        if (CreatorWidget->objectName().isEmpty())
            CreatorWidget->setObjectName(QStringLiteral("CreatorWidget"));
        CreatorWidget->resize(770, 542);
        gridLayout_2 = new QGridLayout(CreatorWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        textEdit = new QTextEdit(CreatorWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(CreatorWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(500, 0));

        gridLayout_2->addWidget(graphicsView, 0, 1, 3, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CreatorWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(CreatorWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(CreatorWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(CreatorWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(CreatorWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(CreatorWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addWaterButton = new QPushButton(CreatorWidget);
        addWaterButton->setObjectName(QStringLiteral("addWaterButton"));

        verticalLayout->addWidget(addWaterButton);

        addPredatorButton = new QPushButton(CreatorWidget);
        addPredatorButton->setObjectName(QStringLiteral("addPredatorButton"));

        verticalLayout->addWidget(addPredatorButton);

        addHerbivoreButton = new QPushButton(CreatorWidget);
        addHerbivoreButton->setObjectName(QStringLiteral("addHerbivoreButton"));

        verticalLayout->addWidget(addHerbivoreButton);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 1, 1);

        startButton = new QPushButton(CreatorWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        gridLayout_2->addWidget(startButton, 3, 0, 1, 2);


        retranslateUi(CreatorWidget);

        QMetaObject::connectSlotsByName(CreatorWidget);
    } // setupUi

    void retranslateUi(QWidget *CreatorWidget)
    {
        CreatorWidget->setWindowTitle(QApplication::translate("CreatorWidget", "Form", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("CreatorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Prosz\304\231 wprowadzi\304\207 drapie\305\274nik\303\263w, ro\305\233lino\305\274erc\303\263w oraz wod\304\231 <span style=\" font-weight:600;\">w obr\304\231bie planszy</span>.</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("CreatorWidget", "Warto\305\233\304\207 1:", Q_NULLPTR));
        label_2->setText(QApplication::translate("CreatorWidget", "Warto\305\233\304\207 2:", Q_NULLPTR));
        label_3->setText(QApplication::translate("CreatorWidget", "Warto\305\233\304\207 3:", Q_NULLPTR));
        addWaterButton->setText(QApplication::translate("CreatorWidget", "Dodaj zbiornik wodny", Q_NULLPTR));
        addPredatorButton->setText(QApplication::translate("CreatorWidget", "Dodaj drapie\305\274nika", Q_NULLPTR));
        addHerbivoreButton->setText(QApplication::translate("CreatorWidget", "Dodaj ro\305\233lino\305\274erc\304\231", Q_NULLPTR));
        startButton->setText(QApplication::translate("CreatorWidget", "Rozpocznij symulacj\304\231!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreatorWidget: public Ui_CreatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATORWIDGET_H

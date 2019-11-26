/********************************************************************************
** Form generated from reading UI file 'paramwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMWIDGET_H
#define UI_PARAMWIDGET_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParamWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *ParamWidget)
    {
        if (ParamWidget->objectName().isEmpty())
            ParamWidget->setObjectName(QStringLiteral("ParamWidget"));
        ParamWidget->resize(770, 485);
        gridLayout_2 = new QGridLayout(ParamWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ParamWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(ParamWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ParamWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(ParamWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(ParamWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(ParamWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(ParamWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(500, 0));

        gridLayout_2->addWidget(graphicsView, 0, 1, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(ParamWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ParamWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(ParamWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(ParamWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ParamWidget);

        QMetaObject::connectSlotsByName(ParamWidget);
    } // setupUi

    void retranslateUi(QWidget *ParamWidget)
    {
        ParamWidget->setWindowTitle(QApplication::translate("ParamWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ParamWidget", "Pierwsza warto\305\233\304\207:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ParamWidget", "Druga warto\305\233\304\207:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ParamWidget", "Trzecia warto\305\233\304\207:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ParamWidget", "Dodaj zbiornik wodny", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ParamWidget", "Dodaj jedzenie", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ParamWidget", "Dodaj drapie\305\274nika", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ParamWidget", "Dodaj ro\305\233lino\305\274erc\304\231", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ParamWidget: public Ui_ParamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMWIDGET_H

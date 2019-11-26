/********************************************************************************
** Form generated from reading UI file 'statwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATWIDGET_H
#define UI_STATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *StatWidget)
    {
        if (StatWidget->objectName().isEmpty())
            StatWidget->setObjectName(QStringLiteral("StatWidget"));
        StatWidget->resize(774, 529);
        horizontalLayout = new QHBoxLayout(StatWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(StatWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(StatWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 1, 1, 1);

        label_2 = new QLabel(StatWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(StatWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(StatWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("URW Bookman L"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        graphicsView = new QGraphicsView(StatWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(StatWidget);

        QMetaObject::connectSlotsByName(StatWidget);
    } // setupUi

    void retranslateUi(QWidget *StatWidget)
    {
        StatWidget->setWindowTitle(QApplication::translate("StatWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("StatWidget", "Liczba drapie\305\274nik\303\263w:", Q_NULLPTR));
        label_2->setText(QApplication::translate("StatWidget", "Liczba ro\305\233lino\305\274erc\303\263w:", Q_NULLPTR));
        label_3->setText(QApplication::translate("StatWidget", "Historia populacji obu gatunk\303\263w:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatWidget: public Ui_StatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATWIDGET_H

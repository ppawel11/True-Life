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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatWidget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLCDNumber *lcdPredatorsDead;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *lcdPredatorsAlive;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_7;
    QLCDNumber *lcdHerbivoresDead;
    QLabel *label_4;
    QLCDNumber *lcdHerbivoresAlive;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLineEdit *realTimeLineEdit;
    QLabel *label_8;
    QLineEdit *simuTimeLineEdit;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *StatWidget)
    {
        if (StatWidget->objectName().isEmpty())
            StatWidget->setObjectName(QStringLiteral("StatWidget"));
        StatWidget->resize(774, 529);
        gridLayout_3 = new QGridLayout(StatWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(50, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 2);

        label_2 = new QLabel(StatWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lcdPredatorsDead = new QLCDNumber(StatWidget);
        lcdPredatorsDead->setObjectName(QStringLiteral("lcdPredatorsDead"));

        gridLayout->addWidget(lcdPredatorsDead, 2, 1, 1, 1);

        label_5 = new QLabel(StatWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 2);

        lcdPredatorsAlive = new QLCDNumber(StatWidget);
        lcdPredatorsAlive->setObjectName(QStringLiteral("lcdPredatorsAlive"));
        lcdPredatorsAlive->setDigitCount(5);

        gridLayout->addWidget(lcdPredatorsAlive, 1, 1, 1, 1);

        label_6 = new QLabel(StatWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label = new QLabel(StatWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_7 = new QLabel(StatWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lcdHerbivoresDead = new QLCDNumber(StatWidget);
        lcdHerbivoresDead->setObjectName(QStringLiteral("lcdHerbivoresDead"));

        gridLayout->addWidget(lcdHerbivoresDead, 7, 1, 1, 1);

        label_4 = new QLabel(StatWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 5, 0, 1, 2);

        lcdHerbivoresAlive = new QLCDNumber(StatWidget);
        lcdHerbivoresAlive->setObjectName(QStringLiteral("lcdHerbivoresAlive"));

        gridLayout->addWidget(lcdHerbivoresAlive, 6, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        line = new QFrame(StatWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(10);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout->addWidget(line);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(StatWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(320, 50));
        pushButton->setMaximumSize(QSize(320, 16777215));
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 3, Qt::AlignRight);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 1, 1, 1);

        label_3 = new QLabel(StatWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(13);
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        realTimeLineEdit = new QLineEdit(StatWidget);
        realTimeLineEdit->setObjectName(QStringLiteral("realTimeLineEdit"));

        gridLayout_2->addWidget(realTimeLineEdit, 2, 2, 1, 1);

        label_8 = new QLabel(StatWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        simuTimeLineEdit = new QLineEdit(StatWidget);
        simuTimeLineEdit->setObjectName(QStringLiteral("simuTimeLineEdit"));

        gridLayout_2->addWidget(simuTimeLineEdit, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 2, 1, 1);


        retranslateUi(StatWidget);

        QMetaObject::connectSlotsByName(StatWidget);
    } // setupUi

    void retranslateUi(QWidget *StatWidget)
    {
        StatWidget->setWindowTitle(QApplication::translate("StatWidget", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("StatWidget", "\305\273yj\304\205ce:", Q_NULLPTR));
        label_5->setText(QApplication::translate("StatWidget", "Nie\305\274yj\304\205ce:", Q_NULLPTR));
        label_6->setText(QApplication::translate("StatWidget", "Nie\305\274yj\304\205cy:", Q_NULLPTR));
        label->setText(QApplication::translate("StatWidget", "DRAPIE\305\273NIKI", Q_NULLPTR));
        label_7->setText(QApplication::translate("StatWidget", "\305\273yj\304\205cy:", Q_NULLPTR));
        label_4->setText(QApplication::translate("StatWidget", "RO\305\232LINO\305\273ERCY", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StatWidget", "Powr\303\263t do symulacji", Q_NULLPTR));
        label_3->setText(QApplication::translate("StatWidget", "Simulation real time:", Q_NULLPTR));
        label_8->setText(QApplication::translate("StatWidget", "Simulated time:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatWidget: public Ui_StatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATWIDGET_H

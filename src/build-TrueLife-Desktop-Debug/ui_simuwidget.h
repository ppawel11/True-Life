/********************************************************************************
** Form generated from reading UI file 'simuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMUWIDGET_H
#define UI_SIMUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimuWidget
{
public:
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *playPauseButton;
    QLabel *label;
    QSlider *timeSlider;

    void setupUi(QWidget *SimuWidget)
    {
        if (SimuWidget->objectName().isEmpty())
            SimuWidget->setObjectName(QStringLiteral("SimuWidget"));
        SimuWidget->resize(664, 558);
        gridLayout_2 = new QGridLayout(SimuWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        graphicsView = new QGraphicsView(SimuWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout_2->addWidget(graphicsView, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(SimuWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 2);

        label_2 = new QLabel(SimuWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(SimuWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(SimuWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(SimuWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_4 = new QLabel(SimuWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_3 = new QLineEdit(SimuWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        playPauseButton = new QPushButton(SimuWidget);
        playPauseButton->setObjectName(QStringLiteral("playPauseButton"));
        playPauseButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(playPauseButton);

        label = new QLabel(SimuWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        timeSlider = new QSlider(SimuWidget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setMinimumSize(QSize(0, 50));
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(timeSlider);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(SimuWidget);

        QMetaObject::connectSlotsByName(SimuWidget);
    } // setupUi

    void retranslateUi(QWidget *SimuWidget)
    {
        SimuWidget->setWindowTitle(QApplication::translate("SimuWidget", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("SimuWidget", "Statystyki osobnika", Q_NULLPTR));
        label_2->setText(QApplication::translate("SimuWidget", "Warto\305\233\304\207 1:", Q_NULLPTR));
        label_3->setText(QApplication::translate("SimuWidget", "Warto\305\233\304\207 2:", Q_NULLPTR));
        label_4->setText(QApplication::translate("SimuWidget", "Warto\305\233\304\207 3:", Q_NULLPTR));
        playPauseButton->setText(QApplication::translate("SimuWidget", "Kontynuuj", Q_NULLPTR));
        label->setText(QApplication::translate("SimuWidget", "Szybko\305\233\304\207 up\305\202ywu czasu:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimuWidget: public Ui_SimuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMUWIDGET_H

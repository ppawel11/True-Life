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
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimuWidget
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *timeSlider;

    void setupUi(QWidget *SimuWidget)
    {
        if (SimuWidget->objectName().isEmpty())
            SimuWidget->setObjectName(QStringLiteral("SimuWidget"));
        SimuWidget->resize(715, 464);
        gridLayout = new QGridLayout(SimuWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        graphicsView = new QGraphicsView(SimuWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SimuWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        timeSlider = new QSlider(SimuWidget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setMinimumSize(QSize(0, 50));
        timeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(timeSlider);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(SimuWidget);

        QMetaObject::connectSlotsByName(SimuWidget);
    } // setupUi

    void retranslateUi(QWidget *SimuWidget)
    {
        SimuWidget->setWindowTitle(QApplication::translate("SimuWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SimuWidget", "Szybko\305\233\304\207 up\305\202ywu czasu:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimuWidget: public Ui_SimuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMUWIDGET_H

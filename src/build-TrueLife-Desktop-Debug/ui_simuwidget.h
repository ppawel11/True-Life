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
#include <QtWidgets/QFrame>
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
    QPushButton *statsButton;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_2;
    QLineEdit *velocityLineEdit;
    QLabel *label_3;
    QLineEdit *mobilityLineEdit;
    QLabel *label_4;
    QLineEdit *view_rangeLineEdit;
    QLabel *label_6;
    QLineEdit *readyLineEdit;
    QLabel *label_7;
    QLineEdit *energyLineEdit;
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
        statsButton = new QPushButton(SimuWidget);
        statsButton->setObjectName(QStringLiteral("statsButton"));
        statsButton->setMinimumSize(QSize(320, 50));
        statsButton->setMaximumSize(QSize(320, 16777215));
        QFont font;
        font.setPointSize(14);
        statsButton->setFont(font);

        gridLayout->addWidget(statsButton, 0, 0, 1, 2, Qt::AlignRight);

        label_5 = new QLabel(SimuWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_5, 1, 0, 1, 2, Qt::AlignHCenter);

        line = new QFrame(SimuWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        label_2 = new QLabel(SimuWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        velocityLineEdit = new QLineEdit(SimuWidget);
        velocityLineEdit->setObjectName(QStringLiteral("velocityLineEdit"));

        gridLayout->addWidget(velocityLineEdit, 3, 1, 1, 1);

        label_3 = new QLabel(SimuWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        mobilityLineEdit = new QLineEdit(SimuWidget);
        mobilityLineEdit->setObjectName(QStringLiteral("mobilityLineEdit"));

        gridLayout->addWidget(mobilityLineEdit, 4, 1, 1, 1);

        label_4 = new QLabel(SimuWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        view_rangeLineEdit = new QLineEdit(SimuWidget);
        view_rangeLineEdit->setObjectName(QStringLiteral("view_rangeLineEdit"));

        gridLayout->addWidget(view_rangeLineEdit, 5, 1, 1, 1);

        label_6 = new QLabel(SimuWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        readyLineEdit = new QLineEdit(SimuWidget);
        readyLineEdit->setObjectName(QStringLiteral("readyLineEdit"));

        gridLayout->addWidget(readyLineEdit, 6, 1, 1, 1);

        label_7 = new QLabel(SimuWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        energyLineEdit = new QLineEdit(SimuWidget);
        energyLineEdit->setObjectName(QStringLiteral("energyLineEdit"));

        gridLayout->addWidget(energyLineEdit, 7, 1, 1, 1);


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
        statsButton->setText(QApplication::translate("SimuWidget", "Statystyki globalne", Q_NULLPTR));
        label_5->setText(QApplication::translate("SimuWidget", "Statystyki osobnika", Q_NULLPTR));
        label_2->setText(QApplication::translate("SimuWidget", "Pr\304\231dko\305\233\304\207:", Q_NULLPTR));
        label_3->setText(QApplication::translate("SimuWidget", "Ruchliwo\305\233\304\207:", Q_NULLPTR));
        mobilityLineEdit->setText(QString());
        label_4->setText(QApplication::translate("SimuWidget", "Zasi\304\231g wzroku:", Q_NULLPTR));
        view_rangeLineEdit->setText(QString());
        label_6->setText(QApplication::translate("SimuWidget", "Dojrza\305\202o\305\233\304\207:", Q_NULLPTR));
        readyLineEdit->setText(QString());
        label_7->setText(QApplication::translate("SimuWidget", "Energia:", Q_NULLPTR));
        energyLineEdit->setText(QString());
        playPauseButton->setText(QApplication::translate("SimuWidget", "Kontynuuj", Q_NULLPTR));
        label->setText(QApplication::translate("SimuWidget", "Szybko\305\233\304\207 up\305\202ywu czasu:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimuWidget: public Ui_SimuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMUWIDGET_H

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatWidget
{
public:

    void setupUi(QWidget *StatWidget)
    {
        if (StatWidget->objectName().isEmpty())
            StatWidget->setObjectName(QStringLiteral("StatWidget"));
        StatWidget->resize(400, 300);

        retranslateUi(StatWidget);

        QMetaObject::connectSlotsByName(StatWidget);
    } // setupUi

    void retranslateUi(QWidget *StatWidget)
    {
        StatWidget->setWindowTitle(QApplication::translate("StatWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StatWidget: public Ui_StatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'ana.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANA_H
#define UI_ANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *analysis_1;
    QPushButton *analysis_2;
    QCustomPlot *qcustomplot_1;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(500, 399);
        analysis_1 = new QPushButton(Dialog);
        analysis_1->setObjectName(QStringLiteral("analysis_1"));
        analysis_1->setGeometry(QRect(30, 30, 131, 23));
        analysis_2 = new QPushButton(Dialog);
        analysis_2->setObjectName(QStringLiteral("analysis_2"));
        analysis_2->setGeometry(QRect(340, 30, 131, 23));
        qcustomplot_1 = new QCustomPlot(Dialog);
        qcustomplot_1->setObjectName(QStringLiteral("qcustomplot_1"));
        qcustomplot_1->setGeometry(QRect(30, 90, 441, 231));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        analysis_1->setText(QApplication::translate("Dialog", "Type 1 cell analysis", 0));
        analysis_2->setText(QApplication::translate("Dialog", "Type 2 cell analysis", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANA_H

/********************************************************************************
** Form generated from reading UI file 'setvehicleno.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETVEHICLENO_H
#define UI_SETVEHICLENO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetVehicleNo
{
public:
    QLabel *labelTitle;
    QLabel *labelTitle1;
    QPushButton *btnVehicleNo;
    QPushButton *btnLineNo;

    void setupUi(QWidget *SetVehicleNo)
    {
        if (SetVehicleNo->objectName().isEmpty())
            SetVehicleNo->setObjectName(QString::fromUtf8("SetVehicleNo"));
        SetVehicleNo->setEnabled(true);
        SetVehicleNo->resize(800, 450);
        SetVehicleNo->setAutoFillBackground(false);
        SetVehicleNo->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"font:20px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"font:25px, \"SimHei\";\n"
"border:2px solid white;\n"
"}\n"
""));
        labelTitle = new QLabel(SetVehicleNo);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(100, 130, 60, 40));
        labelTitle->setStyleSheet(QString::fromUtf8("border:0px;"));
        labelTitle1 = new QLabel(SetVehicleNo);
        labelTitle1->setObjectName(QString::fromUtf8("labelTitle1"));
        labelTitle1->setGeometry(QRect(100, 220, 60, 40));
        labelTitle1->setStyleSheet(QString::fromUtf8("border:0px;"));
        btnVehicleNo = new QPushButton(SetVehicleNo);
        btnVehicleNo->setObjectName(QString::fromUtf8("btnVehicleNo"));
        btnVehicleNo->setGeometry(QRect(175, 130, 220, 45));
        btnVehicleNo->setStyleSheet(QString::fromUtf8("font:25px;"));
        btnVehicleNo->setAutoDefault(false);
        btnLineNo = new QPushButton(SetVehicleNo);
        btnLineNo->setObjectName(QString::fromUtf8("btnLineNo"));
        btnLineNo->setEnabled(true);
        btnLineNo->setGeometry(QRect(175, 220, 220, 45));
        btnLineNo->setAutoFillBackground(false);
        btnLineNo->setStyleSheet(QString::fromUtf8("font:25px;\n"
""));
        btnLineNo->setCheckable(false);
        btnLineNo->setAutoDefault(false);
        btnLineNo->setDefault(false);
        btnLineNo->setFlat(false);

        retranslateUi(SetVehicleNo);

        QMetaObject::connectSlotsByName(SetVehicleNo);
    } // setupUi

    void retranslateUi(QWidget *SetVehicleNo)
    {
        SetVehicleNo->setWindowTitle(QApplication::translate("SetVehicleNo", "Form", 0, QApplication::UnicodeUTF8));
        labelTitle->setText(QApplication::translate("SetVehicleNo", "\350\275\246\345\217\267", 0, QApplication::UnicodeUTF8));
        labelTitle1->setText(QApplication::translate("SetVehicleNo", "\347\272\277\350\267\257\345\217\267", 0, QApplication::UnicodeUTF8));
        btnVehicleNo->setText(QString());
        btnLineNo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetVehicleNo: public Ui_SetVehicleNo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETVEHICLENO_H

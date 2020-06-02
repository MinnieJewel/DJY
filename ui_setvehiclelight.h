/********************************************************************************
** Form generated from reading UI file 'setvehiclelight.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETVEHICLELIGHT_H
#define UI_SETVEHICLELIGHT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetVehicleLight
{
public:
    QPushButton *btnPlus;
    QLabel *labelSet;
    QPushButton *btnModeAuto;
    QLabel *lbl_set_value;
    QLabel *labelMode;
    QPushButton *btnMinus;
    QPushButton *btnModeManu;
    QPushButton *btnBack;
    QLabel *labelSet_2;

    void setupUi(QWidget *SetVehicleLight)
    {
        if (SetVehicleLight->objectName().isEmpty())
            SetVehicleLight->setObjectName(QString::fromUtf8("SetVehicleLight"));
        SetVehicleLight->resize(800, 450);
        SetVehicleLight->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px;\n"
"font:25px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"font:25px, \"SimHei\";\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"outline:none;\n"
"border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(180, 180, 180);\n"
"}"));
        btnPlus = new QPushButton(SetVehicleLight);
        btnPlus->setObjectName(QString::fromUtf8("btnPlus"));
        btnPlus->setGeometry(QRect(590, 180, 120, 40));
        btnPlus->setStyleSheet(QString::fromUtf8(""));
        labelSet = new QLabel(SetVehicleLight);
        labelSet->setObjectName(QString::fromUtf8("labelSet"));
        labelSet->setGeometry(QRect(430, 30, 191, 25));
        btnModeAuto = new QPushButton(SetVehicleLight);
        btnModeAuto->setObjectName(QString::fromUtf8("btnModeAuto"));
        btnModeAuto->setGeometry(QRect(100, 90, 120, 40));
        btnModeAuto->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        lbl_set_value = new QLabel(SetVehicleLight);
        lbl_set_value->setObjectName(QString::fromUtf8("lbl_set_value"));
        lbl_set_value->setGeometry(QRect(440, 180, 120, 40));
        lbl_set_value->setAlignment(Qt::AlignCenter);
        labelMode = new QLabel(SetVehicleLight);
        labelMode->setObjectName(QString::fromUtf8("labelMode"));
        labelMode->setGeometry(QRect(130, 30, 80, 25));
        btnMinus = new QPushButton(SetVehicleLight);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));
        btnMinus->setGeometry(QRect(290, 180, 120, 40));
        btnMinus->setStyleSheet(QString::fromUtf8(""));
        btnModeManu = new QPushButton(SetVehicleLight);
        btnModeManu->setObjectName(QString::fromUtf8("btnModeManu"));
        btnModeManu->setGeometry(QRect(100, 180, 120, 40));
        btnModeManu->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnBack = new QPushButton(SetVehicleLight);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        btnBack->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        labelSet_2 = new QLabel(SetVehicleLight);
        labelSet_2->setObjectName(QString::fromUtf8("labelSet_2"));
        labelSet_2->setGeometry(QRect(270, 240, 451, 25));
        labelSet_2->setStyleSheet(QString::fromUtf8("font:20px;\n"
"color:red;"));

        retranslateUi(SetVehicleLight);

        QMetaObject::connectSlotsByName(SetVehicleLight);
    } // setupUi

    void retranslateUi(QWidget *SetVehicleLight)
    {
        SetVehicleLight->setWindowTitle(QApplication::translate("SetVehicleLight", "Form", 0, QApplication::UnicodeUTF8));
        btnPlus->setText(QApplication::translate("SetVehicleLight", "\357\274\213", 0, QApplication::UnicodeUTF8));
        labelSet->setText(QApplication::translate("SetVehicleLight", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        btnModeAuto->setText(QApplication::translate("SetVehicleLight", "\350\207\252\345\212\250", 0, QApplication::UnicodeUTF8));
        lbl_set_value->setText(QApplication::translate("SetVehicleLight", "0", 0, QApplication::UnicodeUTF8));
        labelMode->setText(QApplication::translate("SetVehicleLight", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnMinus->setText(QApplication::translate("SetVehicleLight", "\357\274\215", 0, QApplication::UnicodeUTF8));
        btnModeManu->setText(QApplication::translate("SetVehicleLight", "\346\211\213\345\212\250", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SetVehicleLight", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        labelSet_2->setText(QApplication::translate("SetVehicleLight", "\344\273\205\345\234\250\346\211\213\345\212\250\346\250\241\345\274\217\344\270\213\344\272\256\345\272\246\350\260\203\350\212\202\345\217\257\347\224\250\357\274\214\350\260\203\350\212\202\350\214\203\345\233\2640.1\357\275\2361.0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetVehicleLight: public Ui_SetVehicleLight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETVEHICLELIGHT_H

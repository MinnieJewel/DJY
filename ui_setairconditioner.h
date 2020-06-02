/********************************************************************************
** Form generated from reading UI file 'setairconditioner.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETAIRCONDITIONER_H
#define UI_SETAIRCONDITIONER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetAirconditioner
{
public:
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLabel *labelCompressorC1;
    QLabel *labelCompressorC2;
    QLabel *labelCompressor;
    QLabel *labelVentilateC1;
    QLabel *labelVentilate;
    QLabel *labelVentilateC2;
    QLabel *labelCondenserC1;
    QLabel *labelCondenser;
    QLabel *labelCondenserC2;
    QLabel *labelHeater1;
    QLabel *labelNewWind;
    QLabel *labelNewWind2;
    QLabel *labelReturnWind1;
    QLabel *labelReturnWind2;
    QLabel *labelReturnWind;
    QLabel *labelHeater;
    QLabel *labelHeater2;
    QLabel *labelNewWind1;
    QLabel *labelWorkMode;
    QLabel *labelWorkMode2;
    QLabel *labelWorkMode1;
    QPushButton *btnONOff;
    QPushButton *btnPreOff;
    QPushButton *btnAutoCold;
    QPushButton *btnAutoWarm;
    QPushButton *btnManuCold;
    QPushButton *btnManuWarm;
    QPushButton *btnWentilate;
    QPushButton *btnSetTem;
    QPushButton *btnBack;
    QLabel *labelTem;
    QPushButton *btnAdd;
    QPushButton *btnMinus;
    QLabel *labelCompressor11;
    QLabel *labelCompressor12;
    QLabel *labelCompressor21;
    QLabel *labelCompressor22;
    QLabel *labelVentilate1;
    QLabel *labelCondenser1;
    QLabel *labelHeater11;
    QLabel *labelCondenser2;
    QLabel *labelVentilate2;
    QLabel *labelHeater21;
    QLabel *labelModeInfo;
    QLabel *labelHeater12;
    QLabel *labelHeater22;

    void setupUi(QWidget *SetAirconditioner)
    {
        if (SetAirconditioner->objectName().isEmpty())
            SetAirconditioner->setObjectName(QString::fromUtf8("SetAirconditioner"));
        SetAirconditioner->resize(800, 350);
        SetAirconditioner->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px;\n"
"font:20px \"SimHei\";\n"
"color:black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
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
"border-radius:2px;\n"
"}"));
        label = new QLabel(SetAirconditioner);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 150, 30));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(191,191,191);\n"
"border:1px solid black;"));
        label->setAlignment(Qt::AlignCenter);
        label1 = new QLabel(SetAirconditioner);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(170, 10, 300, 30));
        label1->setStyleSheet(QString::fromUtf8("background-color:rgb(191,191,191);\n"
"border:1px solid black;"));
        label1->setAlignment(Qt::AlignCenter);
        label2 = new QLabel(SetAirconditioner);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(470, 10, 300, 30));
        label2->setStyleSheet(QString::fromUtf8("background-color:rgb(191,191,191);\n"
"border:1px solid black;"));
        label2->setAlignment(Qt::AlignCenter);
        labelCompressorC1 = new QLabel(SetAirconditioner);
        labelCompressorC1->setObjectName(QString::fromUtf8("labelCompressorC1"));
        labelCompressorC1->setGeometry(QRect(170, 40, 300, 30));
        labelCompressorC1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelCompressorC1->setAlignment(Qt::AlignCenter);
        labelCompressorC2 = new QLabel(SetAirconditioner);
        labelCompressorC2->setObjectName(QString::fromUtf8("labelCompressorC2"));
        labelCompressorC2->setGeometry(QRect(470, 40, 300, 30));
        labelCompressorC2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelCompressorC2->setAlignment(Qt::AlignCenter);
        labelCompressor = new QLabel(SetAirconditioner);
        labelCompressor->setObjectName(QString::fromUtf8("labelCompressor"));
        labelCompressor->setGeometry(QRect(20, 40, 150, 30));
        labelCompressor->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelCompressor->setAlignment(Qt::AlignCenter);
        labelVentilateC1 = new QLabel(SetAirconditioner);
        labelVentilateC1->setObjectName(QString::fromUtf8("labelVentilateC1"));
        labelVentilateC1->setGeometry(QRect(170, 70, 300, 30));
        labelVentilateC1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelVentilateC1->setAlignment(Qt::AlignCenter);
        labelVentilate = new QLabel(SetAirconditioner);
        labelVentilate->setObjectName(QString::fromUtf8("labelVentilate"));
        labelVentilate->setGeometry(QRect(20, 70, 150, 30));
        labelVentilate->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelVentilate->setAlignment(Qt::AlignCenter);
        labelVentilateC2 = new QLabel(SetAirconditioner);
        labelVentilateC2->setObjectName(QString::fromUtf8("labelVentilateC2"));
        labelVentilateC2->setGeometry(QRect(470, 70, 300, 30));
        labelVentilateC2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelVentilateC2->setAlignment(Qt::AlignCenter);
        labelCondenserC1 = new QLabel(SetAirconditioner);
        labelCondenserC1->setObjectName(QString::fromUtf8("labelCondenserC1"));
        labelCondenserC1->setGeometry(QRect(170, 100, 300, 30));
        labelCondenserC1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelCondenserC1->setAlignment(Qt::AlignCenter);
        labelCondenser = new QLabel(SetAirconditioner);
        labelCondenser->setObjectName(QString::fromUtf8("labelCondenser"));
        labelCondenser->setGeometry(QRect(20, 100, 150, 30));
        labelCondenser->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelCondenser->setAlignment(Qt::AlignCenter);
        labelCondenserC2 = new QLabel(SetAirconditioner);
        labelCondenserC2->setObjectName(QString::fromUtf8("labelCondenserC2"));
        labelCondenserC2->setGeometry(QRect(470, 100, 300, 30));
        labelCondenserC2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelCondenserC2->setAlignment(Qt::AlignCenter);
        labelHeater1 = new QLabel(SetAirconditioner);
        labelHeater1->setObjectName(QString::fromUtf8("labelHeater1"));
        labelHeater1->setGeometry(QRect(170, 130, 300, 30));
        labelHeater1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelHeater1->setAlignment(Qt::AlignCenter);
        labelNewWind = new QLabel(SetAirconditioner);
        labelNewWind->setObjectName(QString::fromUtf8("labelNewWind"));
        labelNewWind->setGeometry(QRect(20, 160, 150, 30));
        labelNewWind->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelNewWind->setAlignment(Qt::AlignCenter);
        labelNewWind2 = new QLabel(SetAirconditioner);
        labelNewWind2->setObjectName(QString::fromUtf8("labelNewWind2"));
        labelNewWind2->setGeometry(QRect(470, 160, 300, 30));
        labelNewWind2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelNewWind2->setAlignment(Qt::AlignCenter);
        labelReturnWind1 = new QLabel(SetAirconditioner);
        labelReturnWind1->setObjectName(QString::fromUtf8("labelReturnWind1"));
        labelReturnWind1->setGeometry(QRect(170, 190, 300, 30));
        labelReturnWind1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelReturnWind1->setAlignment(Qt::AlignCenter);
        labelReturnWind2 = new QLabel(SetAirconditioner);
        labelReturnWind2->setObjectName(QString::fromUtf8("labelReturnWind2"));
        labelReturnWind2->setGeometry(QRect(470, 190, 300, 30));
        labelReturnWind2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelReturnWind2->setAlignment(Qt::AlignCenter);
        labelReturnWind = new QLabel(SetAirconditioner);
        labelReturnWind->setObjectName(QString::fromUtf8("labelReturnWind"));
        labelReturnWind->setGeometry(QRect(20, 190, 150, 30));
        labelReturnWind->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelReturnWind->setAlignment(Qt::AlignCenter);
        labelHeater = new QLabel(SetAirconditioner);
        labelHeater->setObjectName(QString::fromUtf8("labelHeater"));
        labelHeater->setGeometry(QRect(20, 130, 150, 30));
        labelHeater->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelHeater->setAlignment(Qt::AlignCenter);
        labelHeater2 = new QLabel(SetAirconditioner);
        labelHeater2->setObjectName(QString::fromUtf8("labelHeater2"));
        labelHeater2->setGeometry(QRect(470, 130, 300, 30));
        labelHeater2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelHeater2->setAlignment(Qt::AlignCenter);
        labelNewWind1 = new QLabel(SetAirconditioner);
        labelNewWind1->setObjectName(QString::fromUtf8("labelNewWind1"));
        labelNewWind1->setGeometry(QRect(170, 160, 300, 30));
        labelNewWind1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelNewWind1->setAlignment(Qt::AlignCenter);
        labelWorkMode = new QLabel(SetAirconditioner);
        labelWorkMode->setObjectName(QString::fromUtf8("labelWorkMode"));
        labelWorkMode->setGeometry(QRect(20, 220, 150, 30));
        labelWorkMode->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelWorkMode->setAlignment(Qt::AlignCenter);
        labelWorkMode2 = new QLabel(SetAirconditioner);
        labelWorkMode2->setObjectName(QString::fromUtf8("labelWorkMode2"));
        labelWorkMode2->setGeometry(QRect(470, 220, 300, 30));
        labelWorkMode2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelWorkMode2->setAlignment(Qt::AlignCenter);
        labelWorkMode1 = new QLabel(SetAirconditioner);
        labelWorkMode1->setObjectName(QString::fromUtf8("labelWorkMode1"));
        labelWorkMode1->setGeometry(QRect(170, 220, 300, 30));
        labelWorkMode1->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        labelWorkMode1->setAlignment(Qt::AlignCenter);
        btnONOff = new QPushButton(SetAirconditioner);
        btnONOff->setObjectName(QString::fromUtf8("btnONOff"));
        btnONOff->setGeometry(QRect(10, 260, 90, 35));
        btnPreOff = new QPushButton(SetAirconditioner);
        btnPreOff->setObjectName(QString::fromUtf8("btnPreOff"));
        btnPreOff->setGeometry(QRect(10, 305, 90, 35));
        btnAutoCold = new QPushButton(SetAirconditioner);
        btnAutoCold->setObjectName(QString::fromUtf8("btnAutoCold"));
        btnAutoCold->setGeometry(QRect(110, 260, 90, 35));
        btnAutoWarm = new QPushButton(SetAirconditioner);
        btnAutoWarm->setObjectName(QString::fromUtf8("btnAutoWarm"));
        btnAutoWarm->setGeometry(QRect(110, 305, 90, 35));
        btnManuCold = new QPushButton(SetAirconditioner);
        btnManuCold->setObjectName(QString::fromUtf8("btnManuCold"));
        btnManuCold->setGeometry(QRect(210, 260, 90, 35));
        btnManuWarm = new QPushButton(SetAirconditioner);
        btnManuWarm->setObjectName(QString::fromUtf8("btnManuWarm"));
        btnManuWarm->setGeometry(QRect(210, 305, 90, 35));
        btnWentilate = new QPushButton(SetAirconditioner);
        btnWentilate->setObjectName(QString::fromUtf8("btnWentilate"));
        btnWentilate->setGeometry(QRect(310, 260, 90, 35));
        btnSetTem = new QPushButton(SetAirconditioner);
        btnSetTem->setObjectName(QString::fromUtf8("btnSetTem"));
        btnSetTem->setGeometry(QRect(590, 280, 90, 35));
        btnBack = new QPushButton(SetAirconditioner);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(690, 280, 90, 35));
        labelTem = new QLabel(SetAirconditioner);
        labelTem->setObjectName(QString::fromUtf8("labelTem"));
        labelTem->setGeometry(QRect(430, 285, 80, 31));
        labelTem->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));
        btnAdd = new QPushButton(SetAirconditioner);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(530, 255, 35, 35));
        btnMinus = new QPushButton(SetAirconditioner);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));
        btnMinus->setGeometry(QRect(530, 305, 35, 35));
        labelCompressor11 = new QLabel(SetAirconditioner);
        labelCompressor11->setObjectName(QString::fromUtf8("labelCompressor11"));
        labelCompressor11->setGeometry(QRect(220, 40, 30, 30));
        labelCompressor12 = new QLabel(SetAirconditioner);
        labelCompressor12->setObjectName(QString::fromUtf8("labelCompressor12"));
        labelCompressor12->setGeometry(QRect(385, 40, 30, 30));
        labelCompressor21 = new QLabel(SetAirconditioner);
        labelCompressor21->setObjectName(QString::fromUtf8("labelCompressor21"));
        labelCompressor21->setGeometry(QRect(520, 40, 30, 30));
        labelCompressor22 = new QLabel(SetAirconditioner);
        labelCompressor22->setObjectName(QString::fromUtf8("labelCompressor22"));
        labelCompressor22->setGeometry(QRect(690, 40, 30, 30));
        labelVentilate1 = new QLabel(SetAirconditioner);
        labelVentilate1->setObjectName(QString::fromUtf8("labelVentilate1"));
        labelVentilate1->setGeometry(QRect(305, 70, 30, 30));
        labelCondenser1 = new QLabel(SetAirconditioner);
        labelCondenser1->setObjectName(QString::fromUtf8("labelCondenser1"));
        labelCondenser1->setGeometry(QRect(305, 100, 30, 30));
        labelHeater11 = new QLabel(SetAirconditioner);
        labelHeater11->setObjectName(QString::fromUtf8("labelHeater11"));
        labelHeater11->setGeometry(QRect(220, 130, 30, 30));
        labelCondenser2 = new QLabel(SetAirconditioner);
        labelCondenser2->setObjectName(QString::fromUtf8("labelCondenser2"));
        labelCondenser2->setGeometry(QRect(605, 100, 30, 30));
        labelVentilate2 = new QLabel(SetAirconditioner);
        labelVentilate2->setObjectName(QString::fromUtf8("labelVentilate2"));
        labelVentilate2->setGeometry(QRect(605, 70, 30, 30));
        labelHeater21 = new QLabel(SetAirconditioner);
        labelHeater21->setObjectName(QString::fromUtf8("labelHeater21"));
        labelHeater21->setGeometry(QRect(520, 130, 30, 30));
        labelModeInfo = new QLabel(SetAirconditioner);
        labelModeInfo->setObjectName(QString::fromUtf8("labelModeInfo"));
        labelModeInfo->setGeometry(QRect(310, 320, 121, 17));
        labelModeInfo->setStyleSheet(QString::fromUtf8("color:red;"));
        labelHeater12 = new QLabel(SetAirconditioner);
        labelHeater12->setObjectName(QString::fromUtf8("labelHeater12"));
        labelHeater12->setGeometry(QRect(385, 130, 30, 30));
        labelHeater22 = new QLabel(SetAirconditioner);
        labelHeater22->setObjectName(QString::fromUtf8("labelHeater22"));
        labelHeater22->setGeometry(QRect(685, 130, 30, 30));

        retranslateUi(SetAirconditioner);

        QMetaObject::connectSlotsByName(SetAirconditioner);
    } // setupUi

    void retranslateUi(QWidget *SetAirconditioner)
    {
        SetAirconditioner->setWindowTitle(QApplication::translate("SetAirconditioner", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SetAirconditioner", "\346\230\276\347\244\272\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("SetAirconditioner", "C1", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("SetAirconditioner", "C2", 0, QApplication::UnicodeUTF8));
        labelCompressorC1->setText(QString());
        labelCompressorC2->setText(QString());
        labelCompressor->setText(QApplication::translate("SetAirconditioner", "\345\216\213\347\274\251\346\234\272", 0, QApplication::UnicodeUTF8));
        labelVentilateC1->setText(QString());
        labelVentilate->setText(QApplication::translate("SetAirconditioner", "\351\200\232\351\243\216\346\234\272", 0, QApplication::UnicodeUTF8));
        labelVentilateC2->setText(QString());
        labelCondenserC1->setText(QString());
        labelCondenser->setText(QApplication::translate("SetAirconditioner", "\345\206\267\345\207\235\351\243\216\346\234\272", 0, QApplication::UnicodeUTF8));
        labelCondenserC2->setText(QString());
        labelHeater1->setText(QString());
        labelNewWind->setText(QApplication::translate("SetAirconditioner", "\346\226\260\351\243\216\346\270\251\345\272\246\342\204\203", 0, QApplication::UnicodeUTF8));
        labelNewWind2->setText(QApplication::translate("SetAirconditioner", "0", 0, QApplication::UnicodeUTF8));
        labelReturnWind1->setText(QApplication::translate("SetAirconditioner", "0", 0, QApplication::UnicodeUTF8));
        labelReturnWind2->setText(QApplication::translate("SetAirconditioner", "0", 0, QApplication::UnicodeUTF8));
        labelReturnWind->setText(QApplication::translate("SetAirconditioner", "\345\233\236\351\243\216\346\270\251\345\272\246\342\204\203", 0, QApplication::UnicodeUTF8));
        labelHeater->setText(QApplication::translate("SetAirconditioner", "\347\224\265\347\203\255\345\231\250", 0, QApplication::UnicodeUTF8));
        labelHeater2->setText(QString());
        labelNewWind1->setText(QApplication::translate("SetAirconditioner", "0", 0, QApplication::UnicodeUTF8));
        labelWorkMode->setText(QApplication::translate("SetAirconditioner", "\345\267\245\344\275\234\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        labelWorkMode2->setText(QApplication::translate("SetAirconditioner", "\345\205\263\346\234\272", 0, QApplication::UnicodeUTF8));
        labelWorkMode1->setText(QApplication::translate("SetAirconditioner", "\345\205\263\346\234\272", 0, QApplication::UnicodeUTF8));
        btnONOff->setText(QApplication::translate("SetAirconditioner", "\347\251\272\350\260\203\345\205\263", 0, QApplication::UnicodeUTF8));
        btnPreOff->setText(QApplication::translate("SetAirconditioner", "\351\242\204\345\206\267/\346\232\226\345\205\263", 0, QApplication::UnicodeUTF8));
        btnAutoCold->setText(QApplication::translate("SetAirconditioner", "\350\207\252\345\212\250\345\206\267", 0, QApplication::UnicodeUTF8));
        btnAutoWarm->setText(QApplication::translate("SetAirconditioner", "\350\207\252\345\212\250\346\232\226", 0, QApplication::UnicodeUTF8));
        btnManuCold->setText(QApplication::translate("SetAirconditioner", "\346\211\213\345\212\250\345\206\267", 0, QApplication::UnicodeUTF8));
        btnManuWarm->setText(QApplication::translate("SetAirconditioner", "\346\211\213\345\212\250\346\232\226", 0, QApplication::UnicodeUTF8));
        btnWentilate->setText(QApplication::translate("SetAirconditioner", "\351\200\232\351\243\216", 0, QApplication::UnicodeUTF8));
        btnSetTem->setText(QApplication::translate("SetAirconditioner", "\346\270\251\345\272\246\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SetAirconditioner", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        labelTem->setText(QString());
        btnAdd->setText(QApplication::translate("SetAirconditioner", "+", 0, QApplication::UnicodeUTF8));
        btnMinus->setText(QApplication::translate("SetAirconditioner", "-", 0, QApplication::UnicodeUTF8));
        labelCompressor11->setText(QString());
        labelCompressor12->setText(QString());
        labelCompressor21->setText(QString());
        labelCompressor22->setText(QString());
        labelVentilate1->setText(QString());
        labelCondenser1->setText(QString());
        labelHeater11->setText(QString());
        labelCondenser2->setText(QString());
        labelVentilate2->setText(QString());
        labelHeater21->setText(QString());
        labelModeInfo->setText(QString());
        labelHeater12->setText(QString());
        labelHeater22->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetAirconditioner: public Ui_SetAirconditioner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETAIRCONDITIONER_H

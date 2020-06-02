/********************************************************************************
** Form generated from reading UI file 'settingpage.ui'
**
** Created: Tue Jun 2 11:35:09 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPAGE_H
#define UI_SETTINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingPage
{
public:
    QPushButton *btnSetTime;
    QPushButton *btnSetAircondition;
    QPushButton *btnSetDCDC;
    QPushButton *btnSetTraction;
    QPushButton *btnSetVehicleNo;
    QPushButton *btnTractMode;
    QPushButton *btnHeat;
    QPushButton *btnWash;
    QPushButton *btnLight;
    QPushButton *btnMend;
    QPushButton *btnTrainBack;
    QPushButton *btnSetL;
    QPushButton *btnPISTest;
    QPushButton *btnFactorySet;

    void setupUi(QWidget *SettingPage)
    {
        if (SettingPage->objectName().isEmpty())
            SettingPage->setObjectName(QString::fromUtf8("SettingPage"));
        SettingPage->resize(800, 450);
        SettingPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:18px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
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
        btnSetTime = new QPushButton(SettingPage);
        btnSetTime->setObjectName(QString::fromUtf8("btnSetTime"));
        btnSetTime->setGeometry(QRect(80, 30, 130, 50));
        btnSetTime->setStyleSheet(QString::fromUtf8(""));
        btnSetAircondition = new QPushButton(SettingPage);
        btnSetAircondition->setObjectName(QString::fromUtf8("btnSetAircondition"));
        btnSetAircondition->setGeometry(QRect(240, 30, 130, 50));
        btnSetAircondition->setStyleSheet(QString::fromUtf8(""));
        btnSetDCDC = new QPushButton(SettingPage);
        btnSetDCDC->setObjectName(QString::fromUtf8("btnSetDCDC"));
        btnSetDCDC->setGeometry(QRect(400, 30, 130, 50));
        btnSetTraction = new QPushButton(SettingPage);
        btnSetTraction->setObjectName(QString::fromUtf8("btnSetTraction"));
        btnSetTraction->setGeometry(QRect(560, 30, 130, 50));
        btnSetVehicleNo = new QPushButton(SettingPage);
        btnSetVehicleNo->setObjectName(QString::fromUtf8("btnSetVehicleNo"));
        btnSetVehicleNo->setGeometry(QRect(80, 110, 130, 50));
        btnTractMode = new QPushButton(SettingPage);
        btnTractMode->setObjectName(QString::fromUtf8("btnTractMode"));
        btnTractMode->setGeometry(QRect(400, 190, 130, 50));
        btnHeat = new QPushButton(SettingPage);
        btnHeat->setObjectName(QString::fromUtf8("btnHeat"));
        btnHeat->setGeometry(QRect(660, 260, 130, 50));
        btnWash = new QPushButton(SettingPage);
        btnWash->setObjectName(QString::fromUtf8("btnWash"));
        btnWash->setGeometry(QRect(240, 190, 130, 50));
        btnLight = new QPushButton(SettingPage);
        btnLight->setObjectName(QString::fromUtf8("btnLight"));
        btnLight->setGeometry(QRect(400, 110, 130, 50));
        btnMend = new QPushButton(SettingPage);
        btnMend->setObjectName(QString::fromUtf8("btnMend"));
        btnMend->setGeometry(QRect(80, 190, 130, 50));
        btnTrainBack = new QPushButton(SettingPage);
        btnTrainBack->setObjectName(QString::fromUtf8("btnTrainBack"));
        btnTrainBack->setGeometry(QRect(660, 320, 130, 50));
        btnSetL = new QPushButton(SettingPage);
        btnSetL->setObjectName(QString::fromUtf8("btnSetL"));
        btnSetL->setGeometry(QRect(240, 110, 130, 50));
        btnPISTest = new QPushButton(SettingPage);
        btnPISTest->setObjectName(QString::fromUtf8("btnPISTest"));
        btnPISTest->setGeometry(QRect(560, 110, 130, 50));
        btnPISTest->setStyleSheet(QString::fromUtf8(""));
        btnFactorySet = new QPushButton(SettingPage);
        btnFactorySet->setObjectName(QString::fromUtf8("btnFactorySet"));
        btnFactorySet->setGeometry(QRect(560, 190, 130, 50));

        retranslateUi(SettingPage);

        QMetaObject::connectSlotsByName(SettingPage);
    } // setupUi

    void retranslateUi(QWidget *SettingPage)
    {
        SettingPage->setWindowTitle(QApplication::translate("SettingPage", "Form", 0, QApplication::UnicodeUTF8));
        btnSetTime->setText(QApplication::translate("SettingPage", "\346\227\266\351\227\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnSetAircondition->setText(QApplication::translate("SettingPage", "\347\251\272\350\260\203\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnSetDCDC->setText(QApplication::translate("SettingPage", "DCDC\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnSetTraction->setText(QApplication::translate("SettingPage", "\347\211\265\345\274\225\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnSetVehicleNo->setText(QApplication::translate("SettingPage", "\350\275\246\345\217\267\347\272\277\350\267\257\345\217\267", 0, QApplication::UnicodeUTF8));
        btnTractMode->setText(QApplication::translate("SettingPage", "\350\277\207\347\211\265\345\274\225\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnHeat->setText(QApplication::translate("SettingPage", "\345\220\216\350\247\206\351\225\234\345\212\240\347\203\255", 0, QApplication::UnicodeUTF8));
        btnWash->setText(QApplication::translate("SettingPage", "\346\264\227\350\275\246\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnLight->setText(QApplication::translate("SettingPage", "\346\214\207\347\244\272\347\201\257\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnMend->setText(QApplication::translate("SettingPage", "\346\243\200\344\277\256\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnTrainBack->setText(QApplication::translate("SettingPage", "\350\275\246\350\276\206\345\233\236\345\234\272", 0, QApplication::UnicodeUTF8));
        btnSetL->setText(QApplication::translate("SettingPage", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        btnPISTest->setText(QApplication::translate("SettingPage", "PIS\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnFactorySet->setText(QApplication::translate("SettingPage", "\345\207\272\345\216\202\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingPage: public Ui_SettingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGE_H

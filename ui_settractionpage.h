/********************************************************************************
** Form generated from reading UI file 'settractionpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTRACTIONPAGE_H
#define UI_SETTRACTIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetTractionPage
{
public:
    QPushButton *btnEle1Seg;
    QPushButton *btnEle2Seg;
    QPushButton *btnEle4Seg;
    QPushButton *btnEle3Seg;
    QPushButton *btnBrk1Cut;
    QPushButton *btnTract1Reset;
    QPushButton *btnBrk2Cut;
    QPushButton *btnTract2Reset;
    QPushButton *btnLowPower;
    QPushButton *btnMend;
    QPushButton *btnBack;
    QLabel *labelT11;
    QLabel *labelT22;
    QLabel *labelT12;
    QLabel *labelT21;

    void setupUi(QWidget *SetTractionPage)
    {
        if (SetTractionPage->objectName().isEmpty())
            SetTractionPage->setObjectName(QString::fromUtf8("SetTractionPage"));
        SetTractionPage->resize(800, 350);
        SetTractionPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:16px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:21px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}"));
        btnEle1Seg = new QPushButton(SetTractionPage);
        btnEle1Seg->setObjectName(QString::fromUtf8("btnEle1Seg"));
        btnEle1Seg->setGeometry(QRect(60, 10, 65, 65));
        btnEle2Seg = new QPushButton(SetTractionPage);
        btnEle2Seg->setObjectName(QString::fromUtf8("btnEle2Seg"));
        btnEle2Seg->setGeometry(QRect(150, 10, 65, 65));
        btnEle4Seg = new QPushButton(SetTractionPage);
        btnEle4Seg->setObjectName(QString::fromUtf8("btnEle4Seg"));
        btnEle4Seg->setGeometry(QRect(670, 10, 65, 65));
        btnEle3Seg = new QPushButton(SetTractionPage);
        btnEle3Seg->setObjectName(QString::fromUtf8("btnEle3Seg"));
        btnEle3Seg->setGeometry(QRect(580, 10, 65, 65));
        btnBrk1Cut = new QPushButton(SetTractionPage);
        btnBrk1Cut->setObjectName(QString::fromUtf8("btnBrk1Cut"));
        btnBrk1Cut->setGeometry(QRect(105, 120, 65, 65));
        btnTract1Reset = new QPushButton(SetTractionPage);
        btnTract1Reset->setObjectName(QString::fromUtf8("btnTract1Reset"));
        btnTract1Reset->setGeometry(QRect(105, 210, 65, 65));
        btnBrk2Cut = new QPushButton(SetTractionPage);
        btnBrk2Cut->setObjectName(QString::fromUtf8("btnBrk2Cut"));
        btnBrk2Cut->setGeometry(QRect(625, 120, 65, 65));
        btnTract2Reset = new QPushButton(SetTractionPage);
        btnTract2Reset->setObjectName(QString::fromUtf8("btnTract2Reset"));
        btnTract2Reset->setGeometry(QRect(625, 210, 65, 65));
        btnLowPower = new QPushButton(SetTractionPage);
        btnLowPower->setObjectName(QString::fromUtf8("btnLowPower"));
        btnLowPower->setGeometry(QRect(330, 90, 140, 45));
        btnMend = new QPushButton(SetTractionPage);
        btnMend->setObjectName(QString::fromUtf8("btnMend"));
        btnMend->setGeometry(QRect(330, 160, 140, 45));
        btnBack = new QPushButton(SetTractionPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(660, 290, 100, 40));
        btnBack->setStyleSheet(QString::fromUtf8(""));
        labelT11 = new QLabel(SetTractionPage);
        labelT11->setObjectName(QString::fromUtf8("labelT11"));
        labelT11->setGeometry(QRect(70, 80, 51, 31));
        labelT22 = new QLabel(SetTractionPage);
        labelT22->setObjectName(QString::fromUtf8("labelT22"));
        labelT22->setGeometry(QRect(677, 80, 51, 31));
        labelT12 = new QLabel(SetTractionPage);
        labelT12->setObjectName(QString::fromUtf8("labelT12"));
        labelT12->setGeometry(QRect(160, 80, 51, 31));
        labelT21 = new QLabel(SetTractionPage);
        labelT21->setObjectName(QString::fromUtf8("labelT21"));
        labelT21->setGeometry(QRect(590, 80, 51, 31));

        retranslateUi(SetTractionPage);

        QMetaObject::connectSlotsByName(SetTractionPage);
    } // setupUi

    void retranslateUi(QWidget *SetTractionPage)
    {
        SetTractionPage->setWindowTitle(QApplication::translate("SetTractionPage", "Form", 0, QApplication::UnicodeUTF8));
        btnEle1Seg->setText(QApplication::translate("SetTractionPage", "\347\224\265\346\234\2721\n"
"\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        btnEle2Seg->setText(QApplication::translate("SetTractionPage", "\347\224\265\346\234\2722\n"
"\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        btnEle4Seg->setText(QApplication::translate("SetTractionPage", "\347\224\265\346\234\2724\n"
"\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        btnEle3Seg->setText(QApplication::translate("SetTractionPage", "\347\224\265\346\234\2723\n"
"\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        btnBrk1Cut->setText(QApplication::translate("SetTractionPage", "\347\224\265\345\210\266\345\212\250\n"
"1\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        btnTract1Reset->setText(QApplication::translate("SetTractionPage", "\347\211\265\345\274\2251\n"
"\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        btnBrk2Cut->setText(QApplication::translate("SetTractionPage", "\347\224\265\345\210\266\345\212\250\n"
"2\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        btnTract2Reset->setText(QApplication::translate("SetTractionPage", "\347\211\265\345\274\2252\n"
"\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        btnLowPower->setText(QApplication::translate("SetTractionPage", "\344\275\216\345\212\237\347\216\207\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnMend->setText(QApplication::translate("SetTractionPage", "\347\273\264\346\212\244\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SetTractionPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        labelT11->setText(QApplication::translate("SetTractionPage", "\345\267\262\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        labelT22->setText(QApplication::translate("SetTractionPage", "\345\267\262\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        labelT12->setText(QApplication::translate("SetTractionPage", "\345\267\262\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        labelT21->setText(QApplication::translate("SetTractionPage", "\345\267\262\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetTractionPage: public Ui_SetTractionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTRACTIONPAGE_H

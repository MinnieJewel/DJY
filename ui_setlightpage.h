/********************************************************************************
** Form generated from reading UI file 'setlightpage.ui'
**
** Created: Sun Apr 12 22:22:28 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETLIGHTPAGE_H
#define UI_SETLIGHTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setLightPage
{
public:
    QLabel *labelMode;
    QLabel *labelSet;
    QPushButton *btnModeAuto;
    QPushButton *btnModeManu;
    QPushButton *btnPlus;
    QPushButton *btnMinus;
    QLabel *lbl_set_value;

    void setupUi(QWidget *setLightPage)
    {
        if (setLightPage->objectName().isEmpty())
            setLightPage->setObjectName(QString::fromUtf8("setLightPage"));
        setLightPage->resize(800, 450);
        setLightPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        labelMode = new QLabel(setLightPage);
        labelMode->setObjectName(QString::fromUtf8("labelMode"));
        labelMode->setGeometry(QRect(100, 50, 80, 25));
        labelSet = new QLabel(setLightPage);
        labelSet->setObjectName(QString::fromUtf8("labelSet"));
        labelSet->setGeometry(QRect(50, 150, 191, 25));
        btnModeAuto = new QPushButton(setLightPage);
        btnModeAuto->setObjectName(QString::fromUtf8("btnModeAuto"));
        btnModeAuto->setGeometry(QRect(280, 40, 120, 40));
        btnModeAuto->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnModeManu = new QPushButton(setLightPage);
        btnModeManu->setObjectName(QString::fromUtf8("btnModeManu"));
        btnModeManu->setGeometry(QRect(440, 40, 120, 40));
        btnModeManu->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnPlus = new QPushButton(setLightPage);
        btnPlus->setObjectName(QString::fromUtf8("btnPlus"));
        btnPlus->setGeometry(QRect(600, 140, 120, 40));
        btnPlus->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnMinus = new QPushButton(setLightPage);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));
        btnMinus->setGeometry(QRect(280, 140, 120, 40));
        btnMinus->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        lbl_set_value = new QLabel(setLightPage);
        lbl_set_value->setObjectName(QString::fromUtf8("lbl_set_value"));
        lbl_set_value->setGeometry(QRect(440, 140, 120, 40));
        lbl_set_value->setAlignment(Qt::AlignCenter);

        retranslateUi(setLightPage);

        QMetaObject::connectSlotsByName(setLightPage);
    } // setupUi

    void retranslateUi(QWidget *setLightPage)
    {
        setLightPage->setWindowTitle(QApplication::translate("setLightPage", "Form", 0, QApplication::UnicodeUTF8));
        labelMode->setText(QApplication::translate("setLightPage", "\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        labelSet->setText(QApplication::translate("setLightPage", "\344\272\256\345\272\246\350\260\203\350\212\202\357\274\210\346\211\213\345\212\250\357\274\211", 0, QApplication::UnicodeUTF8));
        btnModeAuto->setText(QApplication::translate("setLightPage", "\350\207\252\345\212\250", 0, QApplication::UnicodeUTF8));
        btnModeManu->setText(QApplication::translate("setLightPage", "\346\211\213\345\212\250", 0, QApplication::UnicodeUTF8));
        btnPlus->setText(QApplication::translate("setLightPage", "\357\274\213", 0, QApplication::UnicodeUTF8));
        btnMinus->setText(QApplication::translate("setLightPage", "\357\274\215", 0, QApplication::UnicodeUTF8));
        lbl_set_value->setText(QApplication::translate("setLightPage", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setLightPage: public Ui_setLightPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETLIGHTPAGE_H

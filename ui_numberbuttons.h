/********************************************************************************
** Form generated from reading UI file 'numberbuttons.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMBERBUTTONS_H
#define UI_NUMBERBUTTONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumberButtons
{
public:
    QPushButton *btn5;
    QPushButton *btn3;
    QPushButton *btn1;
    QPushButton *btn4;
    QPushButton *btn9;
    QPushButton *btnClear;
    QPushButton *btn0;
    QPushButton *btn7;
    QPushButton *btn6;
    QPushButton *btn2;
    QPushButton *btn8;
    QPushButton *btnConfirm;
    QPushButton *btnBack;

    void setupUi(QWidget *NumberButtons)
    {
        if (NumberButtons->objectName().isEmpty())
            NumberButtons->setObjectName(QString::fromUtf8("NumberButtons"));
        NumberButtons->setEnabled(true);
        NumberButtons->resize(215, 260);
        NumberButtons->setStyleSheet(QString::fromUtf8("\n"
"QWidget{\n"
"background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QPushButton{\n"
"outline:none;\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"font:23pt  \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"/*QPushButton:disabled\n"
"{\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid rgb(217, 217, 217);\n"
"font:23pt, \"SimHei\";\n"
"color: rgb(217, 217, 217);\n"
"}*/"));
        btn5 = new QPushButton(NumberButtons);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(75, 55, 65, 45));
        btn3 = new QPushButton(NumberButtons);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(145, 5, 65, 45));
        btn1 = new QPushButton(NumberButtons);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(5, 5, 65, 45));
        btn1->setStyleSheet(QString::fromUtf8("outline:none;\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"font:30pt  \"SimHei\";\n"
"color:white;"));
        btn4 = new QPushButton(NumberButtons);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(5, 55, 65, 45));
        btn9 = new QPushButton(NumberButtons);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(145, 105, 65, 45));
        btnClear = new QPushButton(NumberButtons);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(75, 155, 135, 45));
        btnClear->setStyleSheet(QString::fromUtf8(""));
        btn0 = new QPushButton(NumberButtons);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(5, 155, 65, 45));
        btn7 = new QPushButton(NumberButtons);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(5, 105, 65, 45));
        btn6 = new QPushButton(NumberButtons);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(145, 55, 65, 45));
        btn2 = new QPushButton(NumberButtons);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(75, 5, 65, 45));
        btn8 = new QPushButton(NumberButtons);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(75, 105, 65, 45));
        btnConfirm = new QPushButton(NumberButtons);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(5, 205, 65, 45));
        btnConfirm->setStyleSheet(QString::fromUtf8(""));
        btnBack = new QPushButton(NumberButtons);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(145, 205, 65, 45));
        btnBack->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(NumberButtons);

        QMetaObject::connectSlotsByName(NumberButtons);
    } // setupUi

    void retranslateUi(QWidget *NumberButtons)
    {
        NumberButtons->setWindowTitle(QApplication::translate("NumberButtons", "Form", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("NumberButtons", "5", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("NumberButtons", "3", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("NumberButtons", "1", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("NumberButtons", "4", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("NumberButtons", "9", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("NumberButtons", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("NumberButtons", "0", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("NumberButtons", "7", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("NumberButtons", "6", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("NumberButtons", "2", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("NumberButtons", "8", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("NumberButtons", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("NumberButtons", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NumberButtons: public Ui_NumberButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMBERBUTTONS_H

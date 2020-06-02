/********************************************************************************
** Form generated from reading UI file 'horizontalbuttons.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HORIZONTALBUTTONS_H
#define UI_HORIZONTALBUTTONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HorizontalButtons
{
public:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnClear;
    QPushButton *btnBack;
    QPushButton *btnConfirm;

    void setupUi(QWidget *HorizontalButtons)
    {
        if (HorizontalButtons->objectName().isEmpty())
            HorizontalButtons->setObjectName(QString::fromUtf8("HorizontalButtons"));
        HorizontalButtons->resize(800, 100);
        HorizontalButtons->setStyleSheet(QString::fromUtf8("\n"
"\n"
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
"}"));
        btn1 = new QPushButton(HorizontalButtons);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(5, 5, 70, 40));
        btn2 = new QPushButton(HorizontalButtons);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(85, 5, 70, 40));
        btn3 = new QPushButton(HorizontalButtons);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(165, 5, 70, 40));
        btn4 = new QPushButton(HorizontalButtons);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(245, 5, 70, 40));
        btn5 = new QPushButton(HorizontalButtons);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(325, 5, 70, 40));
        btn6 = new QPushButton(HorizontalButtons);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(405, 5, 70, 40));
        btn7 = new QPushButton(HorizontalButtons);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(485, 5, 70, 40));
        btn8 = new QPushButton(HorizontalButtons);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(565, 5, 70, 40));
        btn9 = new QPushButton(HorizontalButtons);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(645, 5, 70, 40));
        btn0 = new QPushButton(HorizontalButtons);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(725, 5, 70, 40));
        btnClear = new QPushButton(HorizontalButtons);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(565, 55, 70, 40));
        btnClear->setStyleSheet(QString::fromUtf8(""));
        btnBack = new QPushButton(HorizontalButtons);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(725, 55, 70, 40));
        btnBack->setStyleSheet(QString::fromUtf8(""));
        btnConfirm = new QPushButton(HorizontalButtons);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(645, 55, 70, 40));
        btnConfirm->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(HorizontalButtons);

        QMetaObject::connectSlotsByName(HorizontalButtons);
    } // setupUi

    void retranslateUi(QWidget *HorizontalButtons)
    {
        HorizontalButtons->setWindowTitle(QApplication::translate("HorizontalButtons", "Form", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("HorizontalButtons", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("HorizontalButtons", "2", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("HorizontalButtons", "3", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("HorizontalButtons", "4", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("HorizontalButtons", "5", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("HorizontalButtons", "6", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("HorizontalButtons", "7", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("HorizontalButtons", "8", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("HorizontalButtons", "9", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("HorizontalButtons", "0", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("HorizontalButtons", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("HorizontalButtons", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnConfirm->setText(QApplication::translate("HorizontalButtons", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HorizontalButtons: public Ui_HorizontalButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HORIZONTALBUTTONS_H

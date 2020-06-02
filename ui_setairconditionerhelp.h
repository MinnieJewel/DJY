/********************************************************************************
** Form generated from reading UI file 'setairconditionerhelp.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETAIRCONDITIONERHELP_H
#define UI_SETAIRCONDITIONERHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetAirconditionerHelp
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QPushButton *btnBack;

    void setupUi(QWidget *SetAirconditionerHelp)
    {
        if (SetAirconditionerHelp->objectName().isEmpty())
            SetAirconditionerHelp->setObjectName(QString::fromUtf8("SetAirconditionerHelp"));
        SetAirconditionerHelp->resize(800, 450);
        SetAirconditionerHelp->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
" color:white;\n"
"font:20px, \"SimHei\";\n"
"\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"outline:none;\n"
"}\n"
""));
        label_3 = new QLabel(SetAirconditionerHelp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 220, 121, 41));
        label_2 = new QLabel(SetAirconditionerHelp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 160, 40, 40));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/HVACrun.png);"));
        label = new QLabel(SetAirconditionerHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 220, 40, 40));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/HVACoff.png);"));
        label_4 = new QLabel(SetAirconditionerHelp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 160, 121, 41));
        btnBack = new QPushButton(SetAirconditionerHelp);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(680, 390, 90, 35));

        retranslateUi(SetAirconditionerHelp);

        QMetaObject::connectSlotsByName(SetAirconditionerHelp);
    } // setupUi

    void retranslateUi(QWidget *SetAirconditionerHelp)
    {
        SetAirconditionerHelp->setWindowTitle(QApplication::translate("SetAirconditionerHelp", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SetAirconditionerHelp", "\350\256\276\345\244\207\344\270\215\345\234\250\347\272\277", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QString());
        label_4->setText(QApplication::translate("SetAirconditionerHelp", "\350\256\276\345\244\207\345\234\250\347\272\277", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SetAirconditionerHelp", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetAirconditionerHelp: public Ui_SetAirconditionerHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETAIRCONDITIONERHELP_H

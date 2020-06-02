/********************************************************************************
** Form generated from reading UI file 'modifypwdpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPWDPAGE_H
#define UI_MODIFYPWDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyPwdPage
{
public:
    QLabel *labelErrorInfo;
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QPushButton *btnOld;
    QPushButton *btnNew;
    QPushButton *btnRepeat;
    QLabel *label_pwdConfirm;

    void setupUi(QWidget *ModifyPwdPage)
    {
        if (ModifyPwdPage->objectName().isEmpty())
            ModifyPwdPage->setObjectName(QString::fromUtf8("ModifyPwdPage"));
        ModifyPwdPage->resize(800, 450);
        ModifyPwdPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"border:1px solid black;\n"
"font:15px \"SimHei\";\n"
"color:black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"font:20px, \"SimHei\";\n"
"color:white;\n"
"border:3px solid white;\n"
"background-color:rgb(51,153,255);\n"
"}"));
        labelErrorInfo = new QLabel(ModifyPwdPage);
        labelErrorInfo->setObjectName(QString::fromUtf8("labelErrorInfo"));
        labelErrorInfo->setGeometry(QRect(70, 365, 381, 31));
        labelErrorInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:red;"));
        label = new QLabel(ModifyPwdPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 105, 81, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label1 = new QLabel(ModifyPwdPage);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(50, 195, 81, 31));
        label1->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label2 = new QLabel(ModifyPwdPage);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(50, 285, 130, 31));
        label2->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        btnOld = new QPushButton(ModifyPwdPage);
        btnOld->setObjectName(QString::fromUtf8("btnOld"));
        btnOld->setGeometry(QRect(190, 105, 260, 35));
        btnNew = new QPushButton(ModifyPwdPage);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(190, 195, 260, 35));
        btnRepeat = new QPushButton(ModifyPwdPage);
        btnRepeat->setObjectName(QString::fromUtf8("btnRepeat"));
        btnRepeat->setGeometry(QRect(190, 285, 260, 35));
        label_pwdConfirm = new QLabel(ModifyPwdPage);
        label_pwdConfirm->setObjectName(QString::fromUtf8("label_pwdConfirm"));
        label_pwdConfirm->setGeometry(QRect(460, 105, 35, 35));
        label_pwdConfirm->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(51,153,255);"));

        retranslateUi(ModifyPwdPage);

        QMetaObject::connectSlotsByName(ModifyPwdPage);
    } // setupUi

    void retranslateUi(QWidget *ModifyPwdPage)
    {
        ModifyPwdPage->setWindowTitle(QApplication::translate("ModifyPwdPage", "Form", 0, QApplication::UnicodeUTF8));
        labelErrorInfo->setText(QString());
        label->setText(QApplication::translate("ModifyPwdPage", "\345\216\237\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("ModifyPwdPage", "\346\226\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("ModifyPwdPage", "\351\207\215\345\244\215\346\226\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnOld->setText(QString());
        btnNew->setText(QString());
        btnRepeat->setText(QString());
        label_pwdConfirm->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModifyPwdPage: public Ui_ModifyPwdPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPWDPAGE_H

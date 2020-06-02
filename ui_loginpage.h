/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *label;
    QLabel *labelErrorInfo;
    QLabel *labelInput;
    QLabel *labelBackground;
    QPushButton *btnConfirm;
    QPushButton *btnBack;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(800, 520);
        LoginPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:white;\n"
"border:1px solid black;\n"
"font:12px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"color:white;\n"
"}"));
        label = new QLabel(LoginPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 105, 81, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:30px ,\"SimHei\";\n"
"color:black;"));
        labelErrorInfo = new QLabel(LoginPage);
        labelErrorInfo->setObjectName(QString::fromUtf8("labelErrorInfo"));
        labelErrorInfo->setGeometry(QRect(210, 180, 221, 31));
        labelErrorInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:red;"));
        labelInput = new QLabel(LoginPage);
        labelInput->setObjectName(QString::fromUtf8("labelInput"));
        labelInput->setGeometry(QRect(170, 100, 290, 40));
        labelInput->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:2px solid white;\n"
"font:20px ,\"SimHei\",black;"));
        labelBackground = new QLabel(LoginPage);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));
        labelBackground->setGeometry(QRect(0, 450, 800, 70));
        labelBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:1px solid black;"));
        btnConfirm = new QPushButton(LoginPage);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(600, 460, 80, 45));
        btnConfirm->setStyleSheet(QString::fromUtf8("outline:none;\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"font:23pt  \"SimHei\";\n"
"color:white;"));
        btnBack = new QPushButton(LoginPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(710, 460, 80, 45));
        btnBack->setStyleSheet(QString::fromUtf8("outline:none;\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"font:23pt  \"SimHei\";\n"
"color:white;"));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QApplication::translate("LoginPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginPage", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        labelErrorInfo->setText(QApplication::translate("LoginPage", "\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\343\200\202", 0, QApplication::UnicodeUTF8));
        labelInput->setText(QString());
        labelBackground->setText(QString());
        btnConfirm->setText(QApplication::translate("LoginPage", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("LoginPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H

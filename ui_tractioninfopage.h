/********************************************************************************
** Form generated from reading UI file 'tractioninfopage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACTIONINFOPAGE_H
#define UI_TRACTIONINFOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TractionInfoPage
{
public:
    QPushButton *btnBack;

    void setupUi(QWidget *TractionInfoPage)
    {
        if (TractionInfoPage->objectName().isEmpty())
            TractionInfoPage->setObjectName(QString::fromUtf8("TractionInfoPage"));
        TractionInfoPage->resize(800, 450);
        TractionInfoPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px;\n"
"font:15px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"	border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}"));
        btnBack = new QPushButton(TractionInfoPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));

        retranslateUi(TractionInfoPage);

        QMetaObject::connectSlotsByName(TractionInfoPage);
    } // setupUi

    void retranslateUi(QWidget *TractionInfoPage)
    {
        TractionInfoPage->setWindowTitle(QApplication::translate("TractionInfoPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("TractionInfoPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TractionInfoPage: public Ui_TractionInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACTIONINFOPAGE_H

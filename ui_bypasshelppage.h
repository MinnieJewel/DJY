/********************************************************************************
** Form generated from reading UI file 'bypasshelppage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BYPASSHELPPAGE_H
#define UI_BYPASSHELPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ByPassHelpPage
{
public:
    QLabel *label_19;
    QLabel *labelDeadman2;
    QLabel *labelDeadman2_2;
    QLabel *label_20;
    QPushButton *btnBack;

    void setupUi(QWidget *ByPassHelpPage)
    {
        if (ByPassHelpPage->objectName().isEmpty())
            ByPassHelpPage->setObjectName(QString::fromUtf8("ByPassHelpPage"));
        ByPassHelpPage->resize(800, 450);
        ByPassHelpPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
" color:white;\n"
"font:20px, \"SimHei\";\n"
"border-radius:10px;\n"
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
        label_19 = new QLabel(ByPassHelpPage);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(300, 80, 170, 25));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label_19->setAlignment(Qt::AlignCenter);
        labelDeadman2 = new QLabel(ByPassHelpPage);
        labelDeadman2->setObjectName(QString::fromUtf8("labelDeadman2"));
        labelDeadman2->setGeometry(QRect(140, 70, 130, 45));
        labelDeadman2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(0, 255, 0);"));
        labelDeadman2_2 = new QLabel(ByPassHelpPage);
        labelDeadman2_2->setObjectName(QString::fromUtf8("labelDeadman2_2"));
        labelDeadman2_2->setGeometry(QRect(140, 150, 130, 45));
        labelDeadman2_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(255, 255, 0);"));
        label_20 = new QLabel(ByPassHelpPage);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(300, 170, 170, 25));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label_20->setAlignment(Qt::AlignCenter);
        btnBack = new QPushButton(ByPassHelpPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(690, 400, 90, 35));

        retranslateUi(ByPassHelpPage);

        QMetaObject::connectSlotsByName(ByPassHelpPage);
    } // setupUi

    void retranslateUi(QWidget *ByPassHelpPage)
    {
        ByPassHelpPage->setWindowTitle(QApplication::translate("ByPassHelpPage", "Form", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ByPassHelpPage", "\346\234\252\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        labelDeadman2->setText(QString());
        labelDeadman2_2->setText(QString());
        label_20->setText(QApplication::translate("ByPassHelpPage", "\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("ByPassHelpPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ByPassHelpPage: public Ui_ByPassHelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BYPASSHELPPAGE_H

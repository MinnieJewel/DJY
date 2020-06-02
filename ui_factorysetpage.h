/********************************************************************************
** Form generated from reading UI file 'factorysetpage.ui'
**
** Created: Tue Jun 2 13:39:18 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORYSETPAGE_H
#define UI_FACTORYSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FactorySetPage
{
public:
    QPushButton *btnBack;
    QPushButton *btnM1;
    QPushButton *btnM2;
    QPushButton *btn_Restart;
    QLabel *label;
    QLabel *labelInfo;

    void setupUi(QWidget *FactorySetPage)
    {
        if (FactorySetPage->objectName().isEmpty())
            FactorySetPage->setObjectName(QString::fromUtf8("FactorySetPage"));
        FactorySetPage->resize(800, 450);
        FactorySetPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        btnBack = new QPushButton(FactorySetPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        btnM1 = new QPushButton(FactorySetPage);
        btnM1->setObjectName(QString::fromUtf8("btnM1"));
        btnM1->setGeometry(QRect(120, 80, 150, 60));
        btnM2 = new QPushButton(FactorySetPage);
        btnM2->setObjectName(QString::fromUtf8("btnM2"));
        btnM2->setGeometry(QRect(510, 80, 150, 60));
        btn_Restart = new QPushButton(FactorySetPage);
        btn_Restart->setObjectName(QString::fromUtf8("btn_Restart"));
        btn_Restart->setGeometry(QRect(460, 390, 150, 40));
        label = new QLabel(FactorySetPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 160, 551, 51));
        label->setStyleSheet(QString::fromUtf8("border-color:black;\n"
"color:red;"));
        labelInfo = new QLabel(FactorySetPage);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(100, 220, 551, 51));
        labelInfo->setStyleSheet(QString::fromUtf8("color:black;"));

        retranslateUi(FactorySetPage);

        QMetaObject::connectSlotsByName(FactorySetPage);
    } // setupUi

    void retranslateUi(QWidget *FactorySetPage)
    {
        FactorySetPage->setWindowTitle(QApplication::translate("FactorySetPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("FactorySetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnM1->setText(QApplication::translate("FactorySetPage", "\350\256\276\347\275\256\344\270\272M1\347\253\257", 0, QApplication::UnicodeUTF8));
        btnM2->setText(QApplication::translate("FactorySetPage", "\350\256\276\347\275\256\344\270\272M2\347\253\257", 0, QApplication::UnicodeUTF8));
        btn_Restart->setText(QApplication::translate("FactorySetPage", "\351\207\215\345\220\257\346\230\276\347\244\272\345\261\217", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FactorySetPage", "\350\256\276\347\275\256\345\256\214\346\210\220\345\220\216\357\274\214\350\257\267\347\202\271\345\207\273\357\274\273\351\207\215\345\220\257\346\230\276\347\244\272\345\261\217\357\274\275\346\214\211\351\222\256\357\274\214\351\207\215\346\226\260\345\220\257\345\212\250\346\230\276\347\244\272\345\261\217\343\200\202", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FactorySetPage: public Ui_FactorySetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORYSETPAGE_H

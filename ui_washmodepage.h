/********************************************************************************
** Form generated from reading UI file 'washmodepage.ui'
**
** Created: Fri May 15 15:16:55 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WASHMODEPAGE_H
#define UI_WASHMODEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WashModePage
{
public:
    QPushButton *btnWash;
    QPushButton *btnBack;
    QLabel *labelInfoCondition;
    QLabel *labelInfo;

    void setupUi(QWidget *WashModePage)
    {
        if (WashModePage->objectName().isEmpty())
            WashModePage->setObjectName(QString::fromUtf8("WashModePage"));
        WashModePage->resize(800, 450);
        WashModePage->setStyleSheet(QString::fromUtf8("QWidget\n"
"\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"border:1px solid black;\n"
"font:15px , \"SimHei\";\n"
"color:black;\n"
"}\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"font:25px, \"SimHei\";\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"color:rgb(0, 32, 96);\n"
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
"}\n"
"\n"
""));
        btnWash = new QPushButton(WashModePage);
        btnWash->setObjectName(QString::fromUtf8("btnWash"));
        btnWash->setGeometry(QRect(300, 160, 200, 50));
        btnBack = new QPushButton(WashModePage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        labelInfoCondition = new QLabel(WashModePage);
        labelInfoCondition->setObjectName(QString::fromUtf8("labelInfoCondition"));
        labelInfoCondition->setGeometry(QRect(340, 210, 121, 30));
        labelInfoCondition->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:red;\n"
"font:17px;"));
        labelInfo = new QLabel(WashModePage);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(340, 240, 121, 30));
        labelInfo->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:red;\n"
"font:17px;"));

        retranslateUi(WashModePage);

        QMetaObject::connectSlotsByName(WashModePage);
    } // setupUi

    void retranslateUi(QWidget *WashModePage)
    {
        WashModePage->setWindowTitle(QApplication::translate("WashModePage", "Form", 0, QApplication::UnicodeUTF8));
        btnWash->setText(QApplication::translate("WashModePage", "\346\264\227\350\275\246\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("WashModePage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        labelInfoCondition->setText(QApplication::translate("WashModePage", "\346\264\227\350\275\246\346\235\241\344\273\266\344\270\215\345\205\267\345\244\207", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QApplication::translate("WashModePage", "\346\264\227\350\275\246\350\277\233\350\241\214\344\270\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WashModePage: public Ui_WashModePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WASHMODEPAGE_H

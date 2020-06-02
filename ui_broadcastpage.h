/********************************************************************************
** Form generated from reading UI file 'broadcastpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROADCASTPAGE_H
#define UI_BROADCASTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BroadcastPage
{
public:
    QPushButton *btnStartTest;
    QPushButton *btnStopTest;
    QPushButton *btnBack;

    void setupUi(QWidget *BroadcastPage)
    {
        if (BroadcastPage->objectName().isEmpty())
            BroadcastPage->setObjectName(QString::fromUtf8("BroadcastPage"));
        BroadcastPage->resize(800, 450);
        BroadcastPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"border-image: url(:/image/buttonUP.jpg);\n"
"font:22px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:22px, \"SimHei\";\n"
"color:rgb(180, 180, 180);\n"
"border-radius:2px;\n"
"}"));
        btnStartTest = new QPushButton(BroadcastPage);
        btnStartTest->setObjectName(QString::fromUtf8("btnStartTest"));
        btnStartTest->setGeometry(QRect(100, 90, 100, 50));
        btnStartTest->setStyleSheet(QString::fromUtf8(""));
        btnStopTest = new QPushButton(BroadcastPage);
        btnStopTest->setObjectName(QString::fromUtf8("btnStopTest"));
        btnStopTest->setGeometry(QRect(570, 90, 100, 50));
        btnBack = new QPushButton(BroadcastPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));

        retranslateUi(BroadcastPage);

        QMetaObject::connectSlotsByName(BroadcastPage);
    } // setupUi

    void retranslateUi(QWidget *BroadcastPage)
    {
        BroadcastPage->setWindowTitle(QApplication::translate("BroadcastPage", "Form", 0, QApplication::UnicodeUTF8));
        btnStartTest->setText(QApplication::translate("BroadcastPage", "\345\274\200\345\247\213\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnStopTest->setText(QApplication::translate("BroadcastPage", "\347\273\223\346\235\237\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("BroadcastPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BroadcastPage: public Ui_BroadcastPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROADCASTPAGE_H

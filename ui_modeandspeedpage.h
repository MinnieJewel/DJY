/********************************************************************************
** Form generated from reading UI file 'modeandspeedpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEANDSPEEDPAGE_H
#define UI_MODEANDSPEEDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeAndSpeedPage
{
public:
    QPushButton *btnBack;

    void setupUi(QWidget *ModeAndSpeedPage)
    {
        if (ModeAndSpeedPage->objectName().isEmpty())
            ModeAndSpeedPage->setObjectName(QString::fromUtf8("ModeAndSpeedPage"));
        ModeAndSpeedPage->resize(800, 450);
        ModeAndSpeedPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"}"));
        btnBack = new QPushButton(ModeAndSpeedPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(680, 400, 100, 40));

        retranslateUi(ModeAndSpeedPage);

        QMetaObject::connectSlotsByName(ModeAndSpeedPage);
    } // setupUi

    void retranslateUi(QWidget *ModeAndSpeedPage)
    {
        ModeAndSpeedPage->setWindowTitle(QApplication::translate("ModeAndSpeedPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("ModeAndSpeedPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModeAndSpeedPage: public Ui_ModeAndSpeedPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEANDSPEEDPAGE_H

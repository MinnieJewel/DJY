/********************************************************************************
** Form generated from reading UI file 'setairhelppage.ui'
**
** Created: Fri Mar 6 17:40:22 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETAIRHELPPAGE_H
#define UI_SETAIRHELPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setAirHelpPage
{
public:

    void setupUi(QWidget *setAirHelpPage)
    {
        if (setAirHelpPage->objectName().isEmpty())
            setAirHelpPage->setObjectName(QString::fromUtf8("setAirHelpPage"));
        setAirHelpPage->resize(800, 459);
        setAirHelpPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px;\n"
"font:20px \"SimHei\";\n"
"color:black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
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

        retranslateUi(setAirHelpPage);

        QMetaObject::connectSlotsByName(setAirHelpPage);
    } // setupUi

    void retranslateUi(QWidget *setAirHelpPage)
    {
        setAirHelpPage->setWindowTitle(QApplication::translate("setAirHelpPage", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setAirHelpPage: public Ui_setAirHelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETAIRHELPPAGE_H

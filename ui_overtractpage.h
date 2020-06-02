/********************************************************************************
** Form generated from reading UI file 'overtractpage.ui'
**
** Created: Fri May 15 15:16:55 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERTRACTPAGE_H
#define UI_OVERTRACTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverTractPage
{
public:
    QPushButton *btnTractMode;
    QLabel *labelTract;
    QPushButton *btnBack;

    void setupUi(QWidget *OverTractPage)
    {
        if (OverTractPage->objectName().isEmpty())
            OverTractPage->setObjectName(QString::fromUtf8("OverTractPage"));
        OverTractPage->resize(800, 450);
        OverTractPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        btnTractMode = new QPushButton(OverTractPage);
        btnTractMode->setObjectName(QString::fromUtf8("btnTractMode"));
        btnTractMode->setGeometry(QRect(300, 160, 200, 50));
        btnTractMode->setStyleSheet(QString::fromUtf8(""));
        labelTract = new QLabel(OverTractPage);
        labelTract->setObjectName(QString::fromUtf8("labelTract"));
        labelTract->setGeometry(QRect(330, 210, 151, 41));
        labelTract->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:red;\n"
"font:17px;"));
        btnBack = new QPushButton(OverTractPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));

        retranslateUi(OverTractPage);

        QMetaObject::connectSlotsByName(OverTractPage);
    } // setupUi

    void retranslateUi(QWidget *OverTractPage)
    {
        OverTractPage->setWindowTitle(QApplication::translate("OverTractPage", "Form", 0, QApplication::UnicodeUTF8));
        btnTractMode->setText(QApplication::translate("OverTractPage", "\350\277\207\347\211\265\345\274\225\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        labelTract->setText(QApplication::translate("OverTractPage", "\345\275\223\345\211\215\344\270\272\350\277\207\347\211\265\345\274\225\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("OverTractPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OverTractPage: public Ui_OverTractPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERTRACTPAGE_H

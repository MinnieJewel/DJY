/********************************************************************************
** Form generated from reading UI file 'dcdcpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCDCPAGE_H
#define UI_DCDCPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DCDCPage
{
public:
    QPushButton *btnDcdcReset1;
    QPushButton *btnDcdcReset2;
    QPushButton *btnDcdcCut2;
    QPushButton *btnDcdcCut1;
    QPushButton *btnBack;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *DCDCPage)
    {
        if (DCDCPage->objectName().isEmpty())
            DCDCPage->setObjectName(QString::fromUtf8("DCDCPage"));
        DCDCPage->resize(800, 350);
        DCDCPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"font:16px, \"SimHei\";\n"
"color:rgb(180, 180, 180);\n"
"border-radius:2px;\n"
"}"));
        btnDcdcReset1 = new QPushButton(DCDCPage);
        btnDcdcReset1->setObjectName(QString::fromUtf8("btnDcdcReset1"));
        btnDcdcReset1->setGeometry(QRect(20, 290, 95, 35));
        btnDcdcReset2 = new QPushButton(DCDCPage);
        btnDcdcReset2->setObjectName(QString::fromUtf8("btnDcdcReset2"));
        btnDcdcReset2->setGeometry(QRect(120, 290, 95, 35));
        btnDcdcCut2 = new QPushButton(DCDCPage);
        btnDcdcCut2->setObjectName(QString::fromUtf8("btnDcdcCut2"));
        btnDcdcCut2->setGeometry(QRect(360, 290, 95, 35));
        btnDcdcCut1 = new QPushButton(DCDCPage);
        btnDcdcCut1->setObjectName(QString::fromUtf8("btnDcdcCut1"));
        btnDcdcCut1->setGeometry(QRect(260, 290, 95, 35));
        btnBack = new QPushButton(DCDCPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(700, 310, 80, 35));
        label = new QLabel(DCDCPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 330, 121, 17));
        label_2 = new QLabel(DCDCPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 330, 201, 17));

        retranslateUi(DCDCPage);

        QMetaObject::connectSlotsByName(DCDCPage);
    } // setupUi

    void retranslateUi(QWidget *DCDCPage)
    {
        DCDCPage->setWindowTitle(QApplication::translate("DCDCPage", "Form", 0, QApplication::UnicodeUTF8));
        btnDcdcReset1->setText(QApplication::translate("DCDCPage", "DCDC\345\244\215\344\275\2151", 0, QApplication::UnicodeUTF8));
        btnDcdcReset2->setText(QApplication::translate("DCDCPage", "DCDC\345\244\215\344\275\2152", 0, QApplication::UnicodeUTF8));
        btnDcdcCut2->setText(QApplication::translate("DCDCPage", "DCDC\345\210\207\351\231\2442", 0, QApplication::UnicodeUTF8));
        btnDcdcCut1->setText(QApplication::translate("DCDCPage", "DCDC\345\210\207\351\231\2441", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("DCDCPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DCDCPage", "\346\214\211\344\270\213\345\220\2161s\350\207\252\345\212\250\346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DCDCPage", "\346\214\211\344\270\213\346\214\201\347\273\255\346\234\211\346\225\210\357\274\214\345\206\215\346\254\241\347\202\271\345\207\273\346\201\242\345\244\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DCDCPage: public Ui_DCDCPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCDCPAGE_H

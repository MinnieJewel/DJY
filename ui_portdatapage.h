/********************************************************************************
** Form generated from reading UI file 'portdatapage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTDATAPAGE_H
#define UI_PORTDATAPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortDataPage
{
public:
    QPushButton *btnHmi;
    QPushButton *btnCcu1;
    QPushButton *btnTbcu;
    QPushButton *btnRiom;
    QPushButton *btnEdcu;
    QPushButton *btnAcu;
    QPushButton *btnDcdc;
    QPushButton *btnHvac;
    QPushButton *btnErm;
    QPushButton *btnBack;
    QPushButton *btnCcu2;

    void setupUi(QWidget *PortDataPage)
    {
        if (PortDataPage->objectName().isEmpty())
            PortDataPage->setObjectName(QString::fromUtf8("PortDataPage"));
        PortDataPage->resize(800, 600);
        PortDataPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        btnHmi = new QPushButton(PortDataPage);
        btnHmi->setObjectName(QString::fromUtf8("btnHmi"));
        btnHmi->setGeometry(QRect(735, 30, 60, 35));
        btnCcu1 = new QPushButton(PortDataPage);
        btnCcu1->setObjectName(QString::fromUtf8("btnCcu1"));
        btnCcu1->setGeometry(QRect(735, 80, 60, 35));
        btnTbcu = new QPushButton(PortDataPage);
        btnTbcu->setObjectName(QString::fromUtf8("btnTbcu"));
        btnTbcu->setGeometry(QRect(735, 480, 60, 35));
        btnRiom = new QPushButton(PortDataPage);
        btnRiom->setObjectName(QString::fromUtf8("btnRiom"));
        btnRiom->setGeometry(QRect(735, 230, 60, 35));
        btnEdcu = new QPushButton(PortDataPage);
        btnEdcu->setObjectName(QString::fromUtf8("btnEdcu"));
        btnEdcu->setGeometry(QRect(735, 280, 60, 35));
        btnAcu = new QPushButton(PortDataPage);
        btnAcu->setObjectName(QString::fromUtf8("btnAcu"));
        btnAcu->setGeometry(QRect(735, 330, 60, 35));
        btnDcdc = new QPushButton(PortDataPage);
        btnDcdc->setObjectName(QString::fromUtf8("btnDcdc"));
        btnDcdc->setGeometry(QRect(735, 380, 60, 35));
        btnHvac = new QPushButton(PortDataPage);
        btnHvac->setObjectName(QString::fromUtf8("btnHvac"));
        btnHvac->setGeometry(QRect(735, 430, 60, 35));
        btnErm = new QPushButton(PortDataPage);
        btnErm->setObjectName(QString::fromUtf8("btnErm"));
        btnErm->setGeometry(QRect(735, 180, 60, 35));
        btnBack = new QPushButton(PortDataPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(735, 560, 60, 35));
        btnCcu2 = new QPushButton(PortDataPage);
        btnCcu2->setObjectName(QString::fromUtf8("btnCcu2"));
        btnCcu2->setGeometry(QRect(735, 130, 60, 35));

        retranslateUi(PortDataPage);

        QMetaObject::connectSlotsByName(PortDataPage);
    } // setupUi

    void retranslateUi(QWidget *PortDataPage)
    {
        PortDataPage->setWindowTitle(QApplication::translate("PortDataPage", "Form", 0, QApplication::UnicodeUTF8));
        btnHmi->setText(QApplication::translate("PortDataPage", "HMI", 0, QApplication::UnicodeUTF8));
        btnCcu1->setText(QApplication::translate("PortDataPage", "CCU1", 0, QApplication::UnicodeUTF8));
        btnTbcu->setText(QApplication::translate("PortDataPage", "TBCU", 0, QApplication::UnicodeUTF8));
        btnRiom->setText(QApplication::translate("PortDataPage", "RIOM", 0, QApplication::UnicodeUTF8));
        btnEdcu->setText(QApplication::translate("PortDataPage", "EDCU", 0, QApplication::UnicodeUTF8));
        btnAcu->setText(QApplication::translate("PortDataPage", "ACU", 0, QApplication::UnicodeUTF8));
        btnDcdc->setText(QApplication::translate("PortDataPage", "DCDC", 0, QApplication::UnicodeUTF8));
        btnHvac->setText(QApplication::translate("PortDataPage", "HVAC", 0, QApplication::UnicodeUTF8));
        btnErm->setText(QApplication::translate("PortDataPage", "ERM", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("PortDataPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnCcu2->setText(QApplication::translate("PortDataPage", "CCU2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PortDataPage: public Ui_PortDataPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTDATAPAGE_H

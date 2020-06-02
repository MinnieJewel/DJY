/********************************************************************************
** Form generated from reading UI file 'reconditionpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECONDITIONPAGE_H
#define UI_RECONDITIONPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReconditionPage
{
public:
    QPushButton *btnTraction;
    QPushButton *btnAircondition;
    QPushButton *btnBrake;
    QPushButton *btnAux;
    QPushButton *btnWheelDia;
    QPushButton *btnIO;
    QPushButton *btnVersion;
    QPushButton *btnModpass;
    QPushButton *btnCutRim;
    QPushButton *btnSand;
    QPushButton *btnAccumulate;
    QPushButton *btnPortData;
    QPushButton *btnTestSpeed;
    QPushButton *btnModeSpeed;

    void setupUi(QWidget *ReconditionPage)
    {
        if (ReconditionPage->objectName().isEmpty())
            ReconditionPage->setObjectName(QString::fromUtf8("ReconditionPage"));
        ReconditionPage->resize(800, 450);
        ReconditionPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"font:30px \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"}"));
        btnTraction = new QPushButton(ReconditionPage);
        btnTraction->setObjectName(QString::fromUtf8("btnTraction"));
        btnTraction->setGeometry(QRect(70, 25, 140, 55));
        btnTraction->setStyleSheet(QString::fromUtf8(""));
        btnAircondition = new QPushButton(ReconditionPage);
        btnAircondition->setObjectName(QString::fromUtf8("btnAircondition"));
        btnAircondition->setGeometry(QRect(570, 320, 140, 55));
        btnAircondition->setStyleSheet(QString::fromUtf8(""));
        btnBrake = new QPushButton(ReconditionPage);
        btnBrake->setObjectName(QString::fromUtf8("btnBrake"));
        btnBrake->setGeometry(QRect(410, 25, 140, 55));
        btnBrake->setStyleSheet(QString::fromUtf8(""));
        btnAux = new QPushButton(ReconditionPage);
        btnAux->setObjectName(QString::fromUtf8("btnAux"));
        btnAux->setGeometry(QRect(240, 25, 140, 55));
        btnAux->setStyleSheet(QString::fromUtf8(""));
        btnWheelDia = new QPushButton(ReconditionPage);
        btnWheelDia->setObjectName(QString::fromUtf8("btnWheelDia"));
        btnWheelDia->setGeometry(QRect(580, 125, 140, 55));
        btnWheelDia->setStyleSheet(QString::fromUtf8(""));
        btnIO = new QPushButton(ReconditionPage);
        btnIO->setObjectName(QString::fromUtf8("btnIO"));
        btnIO->setGeometry(QRect(580, 25, 140, 55));
        btnIO->setStyleSheet(QString::fromUtf8(""));
        btnVersion = new QPushButton(ReconditionPage);
        btnVersion->setObjectName(QString::fromUtf8("btnVersion"));
        btnVersion->setGeometry(QRect(240, 125, 140, 55));
        btnVersion->setStyleSheet(QString::fromUtf8(""));
        btnModpass = new QPushButton(ReconditionPage);
        btnModpass->setObjectName(QString::fromUtf8("btnModpass"));
        btnModpass->setGeometry(QRect(410, 125, 140, 55));
        btnModpass->setStyleSheet(QString::fromUtf8(""));
        btnCutRim = new QPushButton(ReconditionPage);
        btnCutRim->setObjectName(QString::fromUtf8("btnCutRim"));
        btnCutRim->setGeometry(QRect(240, 225, 150, 55));
        btnCutRim->setStyleSheet(QString::fromUtf8("font:25px;"));
        btnSand = new QPushButton(ReconditionPage);
        btnSand->setObjectName(QString::fromUtf8("btnSand"));
        btnSand->setGeometry(QRect(70, 125, 140, 55));
        btnSand->setStyleSheet(QString::fromUtf8(""));
        btnAccumulate = new QPushButton(ReconditionPage);
        btnAccumulate->setObjectName(QString::fromUtf8("btnAccumulate"));
        btnAccumulate->setGeometry(QRect(70, 225, 140, 55));
        btnAccumulate->setStyleSheet(QString::fromUtf8(""));
        btnPortData = new QPushButton(ReconditionPage);
        btnPortData->setObjectName(QString::fromUtf8("btnPortData"));
        btnPortData->setGeometry(QRect(410, 225, 140, 55));
        btnPortData->setStyleSheet(QString::fromUtf8(""));
        btnTestSpeed = new QPushButton(ReconditionPage);
        btnTestSpeed->setObjectName(QString::fromUtf8("btnTestSpeed"));
        btnTestSpeed->setGeometry(QRect(580, 225, 150, 55));
        btnTestSpeed->setStyleSheet(QString::fromUtf8("font:25px;"));
        btnModeSpeed = new QPushButton(ReconditionPage);
        btnModeSpeed->setObjectName(QString::fromUtf8("btnModeSpeed"));
        btnModeSpeed->setGeometry(QRect(70, 320, 140, 50));

        retranslateUi(ReconditionPage);

        QMetaObject::connectSlotsByName(ReconditionPage);
    } // setupUi

    void retranslateUi(QWidget *ReconditionPage)
    {
        ReconditionPage->setWindowTitle(QApplication::translate("ReconditionPage", "Form", 0, QApplication::UnicodeUTF8));
        btnTraction->setText(QApplication::translate("ReconditionPage", "\347\211\265\345\274\225\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnAircondition->setText(QApplication::translate("ReconditionPage", "\347\251\272\350\260\203\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnBrake->setText(QApplication::translate("ReconditionPage", "\345\210\266\345\212\250\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnAux->setText(QApplication::translate("ReconditionPage", "\350\276\205\345\212\251\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnWheelDia->setText(QApplication::translate("ReconditionPage", "\350\275\256\345\276\204\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnIO->setText(QApplication::translate("ReconditionPage", "I/O\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        btnVersion->setText(QApplication::translate("ReconditionPage", "\347\211\210\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btnModpass->setText(QApplication::translate("ReconditionPage", "\344\277\256\346\224\271\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnCutRim->setText(QApplication::translate("ReconditionPage", "\345\210\207\351\231\244\350\275\256\347\274\230\346\266\246\346\273\221", 0, QApplication::UnicodeUTF8));
        btnSand->setText(QApplication::translate("ReconditionPage", "\346\222\222\346\262\231", 0, QApplication::UnicodeUTF8));
        btnAccumulate->setText(QApplication::translate("ReconditionPage", "\347\264\257\347\247\257\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnPortData->setText(QApplication::translate("ReconditionPage", "\347\253\257\345\217\243\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        btnTestSpeed->setText(QApplication::translate("ReconditionPage", "\345\212\240\345\207\217\351\200\237\345\272\246\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnModeSpeed->setText(QApplication::translate("ReconditionPage", "\346\250\241\345\274\217/\351\231\220\351\200\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReconditionPage: public Ui_ReconditionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECONDITIONPAGE_H

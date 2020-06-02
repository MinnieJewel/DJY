/********************************************************************************
** Form generated from reading UI file 'sentsandpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENTSANDPAGE_H
#define UI_SENTSANDPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SentSandPage
{
public:
    QPushButton *btnTest;
    QPushButton *btnHeat;
    QPushButton *btnReset;
    QPushButton *btnBack;
    QLabel *labelTinfo;
    QLabel *labelHinfo;

    void setupUi(QWidget *SentSandPage)
    {
        if (SentSandPage->objectName().isEmpty())
            SentSandPage->setObjectName(QString::fromUtf8("SentSandPage"));
        SentSandPage->resize(800, 450);
        SentSandPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);;\n"
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
        btnTest = new QPushButton(SentSandPage);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));
        btnTest->setGeometry(QRect(40, 340, 60, 60));
        btnHeat = new QPushButton(SentSandPage);
        btnHeat->setObjectName(QString::fromUtf8("btnHeat"));
        btnHeat->setGeometry(QRect(140, 340, 60, 60));
        btnReset = new QPushButton(SentSandPage);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        btnReset->setGeometry(QRect(715, 285, 80, 35));
        btnBack = new QPushButton(SentSandPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        labelTinfo = new QLabel(SentSandPage);
        labelTinfo->setObjectName(QString::fromUtf8("labelTinfo"));
        labelTinfo->setGeometry(QRect(40, 410, 61, 31));
        labelTinfo->setStyleSheet(QString::fromUtf8("font:16px;\n"
"color:red;\n"
""));
        labelTinfo->setAlignment(Qt::AlignCenter);
        labelHinfo = new QLabel(SentSandPage);
        labelHinfo->setObjectName(QString::fromUtf8("labelHinfo"));
        labelHinfo->setGeometry(QRect(140, 410, 61, 31));
        labelHinfo->setStyleSheet(QString::fromUtf8("font:16px;\n"
"color:red;\n"
""));
        labelHinfo->setAlignment(Qt::AlignCenter);

        retranslateUi(SentSandPage);

        QMetaObject::connectSlotsByName(SentSandPage);
    } // setupUi

    void retranslateUi(QWidget *SentSandPage)
    {
        SentSandPage->setWindowTitle(QApplication::translate("SentSandPage", "Form", 0, QApplication::UnicodeUTF8));
        btnTest->setText(QApplication::translate("SentSandPage", "\346\265\213\350\257\225\n"
"\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        btnHeat->setText(QApplication::translate("SentSandPage", "\345\212\240\347\203\255\n"
"\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        btnReset->setText(QApplication::translate("SentSandPage", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SentSandPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        labelTinfo->setText(QApplication::translate("SentSandPage", "\346\265\213\350\257\225\344\270\255", 0, QApplication::UnicodeUTF8));
        labelHinfo->setText(QApplication::translate("SentSandPage", "\345\212\240\347\203\255\344\270\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SentSandPage: public Ui_SentSandPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENTSANDPAGE_H

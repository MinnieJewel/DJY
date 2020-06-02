/********************************************************************************
** Form generated from reading UI file 'sivinfopage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIVINFOPAGE_H
#define UI_SIVINFOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SIVInfoPage
{
public:
    QPushButton *btnBack;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QLabel *labelPage;

    void setupUi(QWidget *SIVInfoPage)
    {
        if (SIVInfoPage->objectName().isEmpty())
            SIVInfoPage->setObjectName(QString::fromUtf8("SIVInfoPage"));
        SIVInfoPage->resize(800, 450);
        SIVInfoPage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"	border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}"));
        btnBack = new QPushButton(SIVInfoPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        btnPre = new QPushButton(SIVInfoPage);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setGeometry(QRect(350, 390, 100, 40));
        btnNext = new QPushButton(SIVInfoPage);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(540, 390, 100, 40));
        labelPage = new QLabel(SIVInfoPage);
        labelPage->setObjectName(QString::fromUtf8("labelPage"));
        labelPage->setGeometry(QRect(465, 390, 60, 41));
        labelPage->setStyleSheet(QString::fromUtf8("font:22px;"));
        labelPage->setAlignment(Qt::AlignCenter);

        retranslateUi(SIVInfoPage);

        QMetaObject::connectSlotsByName(SIVInfoPage);
    } // setupUi

    void retranslateUi(QWidget *SIVInfoPage)
    {
        SIVInfoPage->setWindowTitle(QApplication::translate("SIVInfoPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("SIVInfoPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnPre->setText(QApplication::translate("SIVInfoPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("SIVInfoPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        labelPage->setText(QApplication::translate("SIVInfoPage", "1/2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SIVInfoPage: public Ui_SIVInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIVINFOPAGE_H

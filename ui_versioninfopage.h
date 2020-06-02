/********************************************************************************
** Form generated from reading UI file 'versioninfopage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONINFOPAGE_H
#define UI_VERSIONINFOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VersionInfoPage
{
public:
    QPushButton *btnBack;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QLabel *labelPage;

    void setupUi(QWidget *VersionInfoPage)
    {
        if (VersionInfoPage->objectName().isEmpty())
            VersionInfoPage->setObjectName(QString::fromUtf8("VersionInfoPage"));
        VersionInfoPage->resize(800, 450);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VersionInfoPage->sizePolicy().hasHeightForWidth());
        VersionInfoPage->setSizePolicy(sizePolicy);
        VersionInfoPage->setAutoFillBackground(false);
        VersionInfoPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:17px \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"	border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}"));
        btnBack = new QPushButton(VersionInfoPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(690, 410, 90, 35));
        btnPre = new QPushButton(VersionInfoPage);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setGeometry(QRect(370, 410, 90, 35));
        btnNext = new QPushButton(VersionInfoPage);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(520, 410, 90, 35));
        labelPage = new QLabel(VersionInfoPage);
        labelPage->setObjectName(QString::fromUtf8("labelPage"));
        labelPage->setGeometry(QRect(465, 415, 51, 21));
        labelPage->setAlignment(Qt::AlignCenter);

        retranslateUi(VersionInfoPage);

        QMetaObject::connectSlotsByName(VersionInfoPage);
    } // setupUi

    void retranslateUi(QWidget *VersionInfoPage)
    {
        VersionInfoPage->setWindowTitle(QApplication::translate("VersionInfoPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("VersionInfoPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnPre->setText(QApplication::translate("VersionInfoPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("VersionInfoPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        labelPage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VersionInfoPage: public Ui_VersionInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONINFOPAGE_H

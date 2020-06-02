/********************************************************************************
** Form generated from reading UI file 'navigator.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATOR_H
#define UI_NAVIGATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Navigator
{
public:
    QLabel *labelBackground;
    QPushButton *btnRunstatePage;
    QPushButton *btnNetworkPage;
    QPushButton *btnBypass;
    QPushButton *btnConfig;
    QPushButton *btnRecondition;
    QPushButton *btnEvent;
    QPushButton *btnHelp;

    void setupUi(QWidget *Navigator)
    {
        if (Navigator->objectName().isEmpty())
            Navigator->setObjectName(QString::fromUtf8("Navigator"));
        Navigator->resize(800, 70);
        Navigator->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);	\n"
"	border-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	border-radius:9px;\n"
"	background-color:white;\n"
"	font:20px, \"SimHei\";\n"
"	outline:none;\n"
"}"));
        labelBackground = new QLabel(Navigator);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));
        labelBackground->setGeometry(QRect(0, 0, 800, 70));
        labelBackground->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        btnRunstatePage = new QPushButton(Navigator);
        btnRunstatePage->setObjectName(QString::fromUtf8("btnRunstatePage"));
        btnRunstatePage->setGeometry(QRect(20, 5, 60, 60));
        btnNetworkPage = new QPushButton(Navigator);
        btnNetworkPage->setObjectName(QString::fromUtf8("btnNetworkPage"));
        btnNetworkPage->setGeometry(QRect(110, 5, 60, 60));
        btnBypass = new QPushButton(Navigator);
        btnBypass->setObjectName(QString::fromUtf8("btnBypass"));
        btnBypass->setGeometry(QRect(200, 5, 60, 60));
        btnConfig = new QPushButton(Navigator);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        btnConfig->setGeometry(QRect(290, 5, 60, 60));
        btnConfig->setStyleSheet(QString::fromUtf8(""));
        btnRecondition = new QPushButton(Navigator);
        btnRecondition->setObjectName(QString::fromUtf8("btnRecondition"));
        btnRecondition->setGeometry(QRect(380, 5, 60, 60));
        btnEvent = new QPushButton(Navigator);
        btnEvent->setObjectName(QString::fromUtf8("btnEvent"));
        btnEvent->setGeometry(QRect(470, 5, 60, 60));
        btnHelp = new QPushButton(Navigator);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setGeometry(QRect(730, 2, 65, 65));
        btnHelp->setStyleSheet(QString::fromUtf8("border-image: url(:/image/help.png);\n"
"background-color:rgb(51,153,255);\n"
"font:20px, \"SimHei\";\n"
"outline:none;"));

        retranslateUi(Navigator);

        QMetaObject::connectSlotsByName(Navigator);
    } // setupUi

    void retranslateUi(QWidget *Navigator)
    {
        Navigator->setWindowTitle(QApplication::translate("Navigator", "Form", 0, QApplication::UnicodeUTF8));
        labelBackground->setText(QString());
        btnRunstatePage->setText(QApplication::translate("Navigator", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        btnNetworkPage->setText(QApplication::translate("Navigator", "\347\275\221\347\273\234", 0, QApplication::UnicodeUTF8));
        btnBypass->setText(QApplication::translate("Navigator", "\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        btnConfig->setText(QApplication::translate("Navigator", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        btnRecondition->setText(QApplication::translate("Navigator", "\346\243\200\344\277\256", 0, QApplication::UnicodeUTF8));
        btnEvent->setText(QApplication::translate("Navigator", "\344\272\213\344\273\266", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Navigator: public Ui_Navigator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATOR_H

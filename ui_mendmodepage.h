/********************************************************************************
** Form generated from reading UI file 'mendmodepage.ui'
**
** Created: Fri May 15 15:16:55 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENDMODEPAGE_H
#define UI_MENDMODEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MendModePage
{
public:
    QLabel *labelMendIcon;
    QPushButton *btnMendCancel;
    QLabel *label_3;
    QPushButton *btnMendOk;
    QPushButton *btnMend;
    QLabel *labelMendInfo;
    QPushButton *btnBack;

    void setupUi(QWidget *MendModePage)
    {
        if (MendModePage->objectName().isEmpty())
            MendModePage->setObjectName(QString::fromUtf8("MendModePage"));
        MendModePage->resize(800, 450);
        MendModePage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        labelMendIcon = new QLabel(MendModePage);
        labelMendIcon->setObjectName(QString::fromUtf8("labelMendIcon"));
        labelMendIcon->setGeometry(QRect(151, 201, 48, 48));
        labelMendIcon->setStyleSheet(QString::fromUtf8("image: url(:/image/fault.png);\n"
"background-color: rgb(255, 255, 255);\n"
"border:0px;"));
        btnMendCancel = new QPushButton(MendModePage);
        btnMendCancel->setObjectName(QString::fromUtf8("btnMendCancel"));
        btnMendCancel->setGeometry(QRect(560, 205, 81, 41));
        btnMendCancel->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"color:rgb(0, 32, 96);"));
        label_3 = new QLabel(MendModePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 280, 191, 41));
        label_3->setStyleSheet(QString::fromUtf8("border:0px;\n"
"color:red;\n"
"font:17px;"));
        btnMendOk = new QPushButton(MendModePage);
        btnMendOk->setObjectName(QString::fromUtf8("btnMendOk"));
        btnMendOk->setGeometry(QRect(470, 205, 81, 41));
        btnMendOk->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"color:rgb(0, 32, 96);"));
        btnMend = new QPushButton(MendModePage);
        btnMend->setObjectName(QString::fromUtf8("btnMend"));
        btnMend->setGeometry(QRect(240, 140, 281, 61));
        labelMendInfo = new QLabel(MendModePage);
        labelMendInfo->setObjectName(QString::fromUtf8("labelMendInfo"));
        labelMendInfo->setGeometry(QRect(150, 200, 511, 50));
        labelMendInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font:22px;\n"
"color:red;"));
        labelMendInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnBack = new QPushButton(MendModePage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        labelMendInfo->raise();
        labelMendIcon->raise();
        btnMendCancel->raise();
        label_3->raise();
        btnMendOk->raise();
        btnMend->raise();
        btnBack->raise();

        retranslateUi(MendModePage);

        QMetaObject::connectSlotsByName(MendModePage);
    } // setupUi

    void retranslateUi(QWidget *MendModePage)
    {
        MendModePage->setWindowTitle(QApplication::translate("MendModePage", "Form", 0, QApplication::UnicodeUTF8));
        labelMendIcon->setText(QString());
        btnMendCancel->setText(QApplication::translate("MendModePage", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MendModePage", "1.\346\243\200\344\277\256\346\250\241\345\274\217\344\270\213\347\246\201\346\255\242\345\215\207\345\274\223\n"
"2.\345\215\201\345\210\206\351\222\237\345\206\205\347\246\201\346\255\242\346\223\215\344\275\2342\346\254\241", 0, QApplication::UnicodeUTF8));
        btnMendOk->setText(QApplication::translate("MendModePage", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnMend->setText(QApplication::translate("MendModePage", "\350\277\233\345\205\245\346\243\200\344\277\256\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        labelMendInfo->setText(QApplication::translate("MendModePage", "      \350\257\267\347\241\256\344\277\235\345\210\227\350\275\246\345\244\204\344\272\216\351\231\215\345\274\223\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("MendModePage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MendModePage: public Ui_MendModePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENDMODEPAGE_H

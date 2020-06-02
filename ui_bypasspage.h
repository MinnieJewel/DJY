/********************************************************************************
** Form generated from reading UI file 'bypasspage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BYPASSPAGE_H
#define UI_BYPASSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ByPassPage
{
public:
    QLabel *labelDeadman1;
    QLabel *labelDoorCtrl1;
    QLabel *labelATC1;
    QLabel *labelZeroSpeed1;
    QLabel *labelZeroSpeed2;
    QLabel *labelDeadman2;
    QLabel *labelATC2;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *ByPassPage)
    {
        if (ByPassPage->objectName().isEmpty())
            ByPassPage->setObjectName(QString::fromUtf8("ByPassPage"));
        ByPassPage->resize(800, 350);
        ByPassPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"border-radius:10px;\n"
"border:1px solid black;\n"
"font:12px black \"SimHei\";\n"
"}"));
        labelDeadman1 = new QLabel(ByPassPage);
        labelDeadman1->setObjectName(QString::fromUtf8("labelDeadman1"));
        labelDeadman1->setGeometry(QRect(70, 70, 130, 45));
        labelDeadman1->setStyleSheet(QString::fromUtf8(""));
        labelDoorCtrl1 = new QLabel(ByPassPage);
        labelDoorCtrl1->setObjectName(QString::fromUtf8("labelDoorCtrl1"));
        labelDoorCtrl1->setGeometry(QRect(590, 220, 130, 45));
        labelDoorCtrl1->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        labelATC1 = new QLabel(ByPassPage);
        labelATC1->setObjectName(QString::fromUtf8("labelATC1"));
        labelATC1->setGeometry(QRect(70, 120, 130, 45));
        labelATC1->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        labelZeroSpeed1 = new QLabel(ByPassPage);
        labelZeroSpeed1->setObjectName(QString::fromUtf8("labelZeroSpeed1"));
        labelZeroSpeed1->setGeometry(QRect(70, 170, 130, 45));
        labelZeroSpeed1->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        labelZeroSpeed2 = new QLabel(ByPassPage);
        labelZeroSpeed2->setObjectName(QString::fromUtf8("labelZeroSpeed2"));
        labelZeroSpeed2->setGeometry(QRect(590, 170, 130, 45));
        labelZeroSpeed2->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        labelDeadman2 = new QLabel(ByPassPage);
        labelDeadman2->setObjectName(QString::fromUtf8("labelDeadman2"));
        labelDeadman2->setGeometry(QRect(590, 70, 130, 45));
        labelDeadman2->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        labelATC2 = new QLabel(ByPassPage);
        labelATC2->setObjectName(QString::fromUtf8("labelATC2"));
        labelATC2->setGeometry(QRect(590, 120, 130, 45));
        labelATC2->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        label_13 = new QLabel(ByPassPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(220, 90, 350, 5));
        label_13->setStyleSheet(QString::fromUtf8("border:0px;"));
        label_15 = new QLabel(ByPassPage);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(220, 140, 350, 5));
        label_15->setStyleSheet(QString::fromUtf8("border:0px;"));
        label_16 = new QLabel(ByPassPage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(220, 190, 350, 5));
        label_16->setStyleSheet(QString::fromUtf8("border:0px;"));
        label_19 = new QLabel(ByPassPage);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(305, 80, 170, 25));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(ByPassPage);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(300, 230, 170, 25));
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(ByPassPage);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(305, 130, 170, 25));
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(ByPassPage);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(305, 180, 170, 25));
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"border:0px;\n"
"font:20px ,\"SimHei\";\n"
"color:white;"));
        label_22->setAlignment(Qt::AlignCenter);
        label = new QLabel(ByPassPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 240, 100, 5));
        label->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));
        label_2 = new QLabel(ByPassPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(480, 190, 100, 5));
        label_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));
        label_3 = new QLabel(ByPassPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(480, 140, 100, 5));
        label_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));
        label_4 = new QLabel(ByPassPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(480, 90, 100, 5));
        label_4->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));
        label_5 = new QLabel(ByPassPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 90, 100, 5));
        label_5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));
        label_6 = new QLabel(ByPassPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 140, 100, 5));
        label_6->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));
        label_7 = new QLabel(ByPassPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 190, 100, 5));
        label_7->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;"));

        retranslateUi(ByPassPage);

        QMetaObject::connectSlotsByName(ByPassPage);
    } // setupUi

    void retranslateUi(QWidget *ByPassPage)
    {
        ByPassPage->setWindowTitle(QApplication::translate("ByPassPage", "Form", 0, QApplication::UnicodeUTF8));
        labelDeadman1->setText(QString());
        labelDoorCtrl1->setText(QString());
        labelATC1->setText(QString());
        labelZeroSpeed1->setText(QString());
        labelZeroSpeed2->setText(QString());
        labelDeadman2->setText(QString());
        labelATC2->setText(QString());
        label_13->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_19->setText(QApplication::translate("ByPassPage", "Deadman\346\234\252\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ByPassPage", "\351\227\250\347\216\257\350\267\257\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ByPassPage", "ATC\345\210\207\351\231\244", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ByPassPage", "\351\233\266\351\200\237\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ByPassPage: public Ui_ByPassPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BYPASSPAGE_H

/********************************************************************************
** Form generated from reading UI file 'setwheelpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETWHEELPAGE_H
#define UI_SETWHEELPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetWheelPage
{
public:
    QPushButton *btnM1Wheel1;
    QPushButton *btnM1Wheel2;
    QPushButton *btnNPWheel2;
    QPushButton *btnNPWheel1;
    QPushButton *btnM2Wheel2;
    QPushButton *btnM2Wheel1;
    QLabel *labelRemind;
    QLabel *labelInfo;
    QLabel *labelWheel1;
    QLabel *labelWheel2;
    QLabel *labelWheel3;
    QLabel *labelWheel4;
    QLabel *labelWheel5;
    QLabel *labelWheel6;
    QLabel *labelWheel1_2;
    QLabel *labelWheel1_3;

    void setupUi(QWidget *SetWheelPage)
    {
        if (SetWheelPage->objectName().isEmpty())
            SetWheelPage->setObjectName(QString::fromUtf8("SetWheelPage"));
        SetWheelPage->resize(800, 350);
        SetWheelPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px;\n"
"font:25px \"SimHei\";\n"
"color:black;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"font:25px, \"SimHei\";\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled\n"
"{\n"
"outline:none;\n"
"border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(180, 180, 180);\n"
"border-radius:2px;\n"
"}"));
        btnM1Wheel1 = new QPushButton(SetWheelPage);
        btnM1Wheel1->setObjectName(QString::fromUtf8("btnM1Wheel1"));
        btnM1Wheel1->setGeometry(QRect(80, 72, 100, 35));
        btnM1Wheel1->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnM1Wheel2 = new QPushButton(SetWheelPage);
        btnM1Wheel2->setObjectName(QString::fromUtf8("btnM1Wheel2"));
        btnM1Wheel2->setGeometry(QRect(195, 72, 100, 35));
        btnM1Wheel2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnNPWheel2 = new QPushButton(SetWheelPage);
        btnNPWheel2->setObjectName(QString::fromUtf8("btnNPWheel2"));
        btnNPWheel2->setGeometry(QRect(440, 72, 100, 35));
        btnNPWheel2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnNPWheel1 = new QPushButton(SetWheelPage);
        btnNPWheel1->setObjectName(QString::fromUtf8("btnNPWheel1"));
        btnNPWheel1->setGeometry(QRect(320, 72, 100, 35));
        btnNPWheel1->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnM2Wheel2 = new QPushButton(SetWheelPage);
        btnM2Wheel2->setObjectName(QString::fromUtf8("btnM2Wheel2"));
        btnM2Wheel2->setGeometry(QRect(690, 72, 100, 35));
        btnM2Wheel2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnM2Wheel1 = new QPushButton(SetWheelPage);
        btnM2Wheel1->setObjectName(QString::fromUtf8("btnM2Wheel1"));
        btnM2Wheel1->setGeometry(QRect(570, 72, 100, 35));
        btnM2Wheel1->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        labelRemind = new QLabel(SetWheelPage);
        labelRemind->setObjectName(QString::fromUtf8("labelRemind"));
        labelRemind->setGeometry(QRect(520, 120, 241, 20));
        labelRemind->setStyleSheet(QString::fromUtf8("color:white;\n"
"font:20px;"));
        labelInfo = new QLabel(SetWheelPage);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(260, 170, 351, 31));
        labelInfo->setStyleSheet(QString::fromUtf8("color:red;\n"
"font:17px;\n"
""));
        labelWheel1 = new QLabel(SetWheelPage);
        labelWheel1->setObjectName(QString::fromUtf8("labelWheel1"));
        labelWheel1->setGeometry(QRect(80, 35, 100, 35));
        labelWheel1->setStyleSheet(QString::fromUtf8(""));
        labelWheel1->setAlignment(Qt::AlignCenter);
        labelWheel2 = new QLabel(SetWheelPage);
        labelWheel2->setObjectName(QString::fromUtf8("labelWheel2"));
        labelWheel2->setGeometry(QRect(195, 35, 100, 35));
        labelWheel2->setStyleSheet(QString::fromUtf8(""));
        labelWheel2->setAlignment(Qt::AlignCenter);
        labelWheel3 = new QLabel(SetWheelPage);
        labelWheel3->setObjectName(QString::fromUtf8("labelWheel3"));
        labelWheel3->setGeometry(QRect(320, 35, 100, 35));
        labelWheel3->setStyleSheet(QString::fromUtf8(""));
        labelWheel3->setAlignment(Qt::AlignCenter);
        labelWheel4 = new QLabel(SetWheelPage);
        labelWheel4->setObjectName(QString::fromUtf8("labelWheel4"));
        labelWheel4->setGeometry(QRect(440, 35, 100, 35));
        labelWheel4->setStyleSheet(QString::fromUtf8(""));
        labelWheel4->setAlignment(Qt::AlignCenter);
        labelWheel5 = new QLabel(SetWheelPage);
        labelWheel5->setObjectName(QString::fromUtf8("labelWheel5"));
        labelWheel5->setGeometry(QRect(570, 35, 100, 35));
        labelWheel5->setStyleSheet(QString::fromUtf8(""));
        labelWheel5->setAlignment(Qt::AlignCenter);
        labelWheel6 = new QLabel(SetWheelPage);
        labelWheel6->setObjectName(QString::fromUtf8("labelWheel6"));
        labelWheel6->setGeometry(QRect(690, 35, 100, 35));
        labelWheel6->setStyleSheet(QString::fromUtf8(""));
        labelWheel6->setAlignment(Qt::AlignCenter);
        labelWheel1_2 = new QLabel(SetWheelPage);
        labelWheel1_2->setObjectName(QString::fromUtf8("labelWheel1_2"));
        labelWheel1_2->setGeometry(QRect(0, 35, 71, 35));
        labelWheel1_2->setStyleSheet(QString::fromUtf8("font:23px;"));
        labelWheel1_2->setAlignment(Qt::AlignCenter);
        labelWheel1_3 = new QLabel(SetWheelPage);
        labelWheel1_3->setObjectName(QString::fromUtf8("labelWheel1_3"));
        labelWheel1_3->setGeometry(QRect(0, 72, 71, 35));
        labelWheel1_3->setStyleSheet(QString::fromUtf8("font:23px;"));
        labelWheel1_3->setAlignment(Qt::AlignCenter);

        retranslateUi(SetWheelPage);

        QMetaObject::connectSlotsByName(SetWheelPage);
    } // setupUi

    void retranslateUi(QWidget *SetWheelPage)
    {
        SetWheelPage->setWindowTitle(QApplication::translate("SetWheelPage", "Form", 0, QApplication::UnicodeUTF8));
        btnM1Wheel1->setText(QString());
        btnM1Wheel2->setText(QString());
        btnNPWheel2->setText(QString());
        btnNPWheel1->setText(QString());
        btnM2Wheel2->setText(QString());
        btnM2Wheel1->setText(QString());
        labelRemind->setText(QApplication::translate("SetWheelPage", "\350\275\256\345\276\204\350\214\203\345\233\264\357\274\210530\357\275\236690\357\274\211mm", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QString());
        labelWheel1->setText(QString());
        labelWheel2->setText(QString());
        labelWheel3->setText(QString());
        labelWheel4->setText(QString());
        labelWheel5->setText(QString());
        labelWheel6->setText(QString());
        labelWheel1_2->setText(QApplication::translate("SetWheelPage", "\345\275\223\345\211\215\345\200\274", 0, QApplication::UnicodeUTF8));
        labelWheel1_3->setText(QApplication::translate("SetWheelPage", "\350\256\276\345\256\232\345\200\274", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetWheelPage: public Ui_SetWheelPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWHEELPAGE_H

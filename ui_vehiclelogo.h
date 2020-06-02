/********************************************************************************
** Form generated from reading UI file 'vehiclelogo.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLELOGO_H
#define UI_VEHICLELOGO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleLogo
{
public:
    QLabel *labelM1;
    QLabel *labelM2;
    QLabel *labelC1;
    QLabel *labelC2;
    QLabel *labelNp;
    QLabel *labelLeftHead;
    QLabel *labelRightHead;
    QLabel *labelPan;
    QLabel *labelLfitDirection;
    QLabel *labelRightDirection;
    QLabel *labelCurrentStation;
    QLabel *labelNextStation;
    QLabel *labelDoor9;
    QLabel *label9;
    QLabel *labelDoor10;
    QLabel *label10;
    QLabel *labelDoor1;
    QLabel *label2;
    QLabel *label1;
    QLabel *labelDoor2;
    QLabel *labelDoor6;
    QLabel *label5;
    QLabel *labelDoor5;
    QLabel *label6;
    QLabel *labelDoor4;
    QLabel *labelDoor3;
    QLabel *label3;
    QLabel *label4;
    QLabel *label8;
    QLabel *labelDoor7;
    QLabel *labelDoor8;
    QLabel *label7;
    QLabel *label12;
    QLabel *labelDoor11;
    QLabel *labelDoor12;
    QLabel *label11;

    void setupUi(QWidget *VehicleLogo)
    {
        if (VehicleLogo->objectName().isEmpty())
            VehicleLogo->setObjectName(QString::fromUtf8("VehicleLogo"));
        VehicleLogo->resize(800, 100);
        VehicleLogo->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"QLabel\n"
"{\n"
"	border:1px solid black;\n"
"	font:20px;\n"
"}"));
        labelM1 = new QLabel(VehicleLogo);
        labelM1->setObjectName(QString::fromUtf8("labelM1"));
        labelM1->setGeometry(QRect(90, 35, 130, 65));
        labelM1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        labelM1->setAlignment(Qt::AlignCenter);
        labelM2 = new QLabel(VehicleLogo);
        labelM2->setObjectName(QString::fromUtf8("labelM2"));
        labelM2->setGeometry(QRect(560, 35, 130, 65));
        labelM2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        labelM2->setAlignment(Qt::AlignCenter);
        labelC1 = new QLabel(VehicleLogo);
        labelC1->setObjectName(QString::fromUtf8("labelC1"));
        labelC1->setGeometry(QRect(220, 35, 120, 65));
        labelC1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        labelC1->setAlignment(Qt::AlignCenter);
        labelC2 = new QLabel(VehicleLogo);
        labelC2->setObjectName(QString::fromUtf8("labelC2"));
        labelC2->setGeometry(QRect(440, 35, 120, 65));
        labelC2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        labelC2->setAlignment(Qt::AlignCenter);
        labelNp = new QLabel(VehicleLogo);
        labelNp->setObjectName(QString::fromUtf8("labelNp"));
        labelNp->setGeometry(QRect(340, 35, 100, 65));
        labelNp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        labelNp->setAlignment(Qt::AlignCenter);
        labelLeftHead = new QLabel(VehicleLogo);
        labelLeftHead->setObjectName(QString::fromUtf8("labelLeftHead"));
        labelLeftHead->setGeometry(QRect(55, 35, 65, 65));
        labelLeftHead->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border-radius:30px;"));
        labelRightHead = new QLabel(VehicleLogo);
        labelRightHead->setObjectName(QString::fromUtf8("labelRightHead"));
        labelRightHead->setGeometry(QRect(625, 35, 101, 65));
        labelRightHead->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border-radius:30px;"));
        labelPan = new QLabel(VehicleLogo);
        labelPan->setObjectName(QString::fromUtf8("labelPan"));
        labelPan->setGeometry(QRect(370, 0, 35, 35));
        labelPan->setStyleSheet(QString::fromUtf8("border-image: url(:/image/LowPosition.png);"));
        labelLfitDirection = new QLabel(VehicleLogo);
        labelLfitDirection->setObjectName(QString::fromUtf8("labelLfitDirection"));
        labelLfitDirection->setGeometry(QRect(10, 35, 41, 65));
        labelLfitDirection->setStyleSheet(QString::fromUtf8("border:0px;"));
        labelRightDirection = new QLabel(VehicleLogo);
        labelRightDirection->setObjectName(QString::fromUtf8("labelRightDirection"));
        labelRightDirection->setGeometry(QRect(740, 35, 41, 65));
        labelRightDirection->setStyleSheet(QString::fromUtf8("border:0px;"));
        labelCurrentStation = new QLabel(VehicleLogo);
        labelCurrentStation->setObjectName(QString::fromUtf8("labelCurrentStation"));
        labelCurrentStation->setGeometry(QRect(0, 0, 210, 30));
        labelCurrentStation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        labelNextStation = new QLabel(VehicleLogo);
        labelNextStation->setObjectName(QString::fromUtf8("labelNextStation"));
        labelNextStation->setGeometry(QRect(590, 0, 210, 30));
        labelNextStation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        labelDoor9 = new QLabel(VehicleLogo);
        labelDoor9->setObjectName(QString::fromUtf8("labelDoor9"));
        labelDoor9->setGeometry(QRect(100, 35, 20, 20));
        label9 = new QLabel(VehicleLogo);
        label9->setObjectName(QString::fromUtf8("label9"));
        label9->setGeometry(QRect(120, 36, 20, 20));
        label9->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label9->setAlignment(Qt::AlignCenter);
        labelDoor10 = new QLabel(VehicleLogo);
        labelDoor10->setObjectName(QString::fromUtf8("labelDoor10"));
        labelDoor10->setGeometry(QRect(100, 79, 20, 20));
        labelDoor10->setStyleSheet(QString::fromUtf8("font:15px;"));
        label10 = new QLabel(VehicleLogo);
        label10->setObjectName(QString::fromUtf8("label10"));
        label10->setGeometry(QRect(120, 79, 20, 20));
        label10->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label10->setAlignment(Qt::AlignCenter);
        labelDoor1 = new QLabel(VehicleLogo);
        labelDoor1->setObjectName(QString::fromUtf8("labelDoor1"));
        labelDoor1->setGeometry(QRect(230, 35, 20, 20));
        label2 = new QLabel(VehicleLogo);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(250, 79, 20, 20));
        label2->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label2->setAlignment(Qt::AlignCenter);
        label1 = new QLabel(VehicleLogo);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(250, 36, 20, 20));
        label1->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label1->setAlignment(Qt::AlignCenter);
        labelDoor2 = new QLabel(VehicleLogo);
        labelDoor2->setObjectName(QString::fromUtf8("labelDoor2"));
        labelDoor2->setGeometry(QRect(230, 79, 20, 20));
        labelDoor6 = new QLabel(VehicleLogo);
        labelDoor6->setObjectName(QString::fromUtf8("labelDoor6"));
        labelDoor6->setGeometry(QRect(445, 79, 20, 20));
        label5 = new QLabel(VehicleLogo);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(464, 36, 20, 20));
        label5->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label5->setAlignment(Qt::AlignCenter);
        labelDoor5 = new QLabel(VehicleLogo);
        labelDoor5->setObjectName(QString::fromUtf8("labelDoor5"));
        labelDoor5->setGeometry(QRect(445, 35, 20, 20));
        label6 = new QLabel(VehicleLogo);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(464, 79, 20, 20));
        label6->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label6->setAlignment(Qt::AlignCenter);
        labelDoor4 = new QLabel(VehicleLogo);
        labelDoor4->setObjectName(QString::fromUtf8("labelDoor4"));
        labelDoor4->setGeometry(QRect(315, 79, 20, 20));
        labelDoor3 = new QLabel(VehicleLogo);
        labelDoor3->setObjectName(QString::fromUtf8("labelDoor3"));
        labelDoor3->setGeometry(QRect(315, 35, 20, 20));
        label3 = new QLabel(VehicleLogo);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(295, 36, 20, 20));
        label3->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label3->setAlignment(Qt::AlignCenter);
        label4 = new QLabel(VehicleLogo);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(295, 79, 20, 20));
        label4->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label4->setAlignment(Qt::AlignCenter);
        label8 = new QLabel(VehicleLogo);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setGeometry(QRect(510, 79, 20, 20));
        label8->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label8->setAlignment(Qt::AlignCenter);
        labelDoor7 = new QLabel(VehicleLogo);
        labelDoor7->setObjectName(QString::fromUtf8("labelDoor7"));
        labelDoor7->setGeometry(QRect(530, 35, 20, 20));
        labelDoor8 = new QLabel(VehicleLogo);
        labelDoor8->setObjectName(QString::fromUtf8("labelDoor8"));
        labelDoor8->setGeometry(QRect(530, 79, 20, 20));
        label7 = new QLabel(VehicleLogo);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(510, 36, 20, 20));
        label7->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label7->setAlignment(Qt::AlignCenter);
        label12 = new QLabel(VehicleLogo);
        label12->setObjectName(QString::fromUtf8("label12"));
        label12->setGeometry(QRect(640, 79, 20, 20));
        label12->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label12->setAlignment(Qt::AlignCenter);
        labelDoor11 = new QLabel(VehicleLogo);
        labelDoor11->setObjectName(QString::fromUtf8("labelDoor11"));
        labelDoor11->setGeometry(QRect(660, 35, 20, 20));
        labelDoor12 = new QLabel(VehicleLogo);
        labelDoor12->setObjectName(QString::fromUtf8("labelDoor12"));
        labelDoor12->setGeometry(QRect(660, 79, 20, 20));
        label11 = new QLabel(VehicleLogo);
        label11->setObjectName(QString::fromUtf8("label11"));
        label11->setGeometry(QRect(640, 36, 20, 20));
        label11->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-color: rgb(255, 255, 127);\n"
"font:15px;"));
        label11->setAlignment(Qt::AlignCenter);
        labelRightHead->raise();
        labelLeftHead->raise();
        labelM1->raise();
        labelM2->raise();
        labelC1->raise();
        labelC2->raise();
        labelNp->raise();
        labelPan->raise();
        labelLfitDirection->raise();
        labelRightDirection->raise();
        labelCurrentStation->raise();
        labelNextStation->raise();
        labelDoor9->raise();
        label9->raise();
        labelDoor10->raise();
        label10->raise();
        labelDoor1->raise();
        label2->raise();
        label1->raise();
        labelDoor2->raise();
        labelDoor6->raise();
        label5->raise();
        labelDoor5->raise();
        label6->raise();
        labelDoor4->raise();
        labelDoor3->raise();
        label3->raise();
        label4->raise();
        label8->raise();
        labelDoor7->raise();
        labelDoor8->raise();
        label7->raise();
        label12->raise();
        labelDoor11->raise();
        labelDoor12->raise();
        label11->raise();

        retranslateUi(VehicleLogo);

        QMetaObject::connectSlotsByName(VehicleLogo);
    } // setupUi

    void retranslateUi(QWidget *VehicleLogo)
    {
        VehicleLogo->setWindowTitle(QApplication::translate("VehicleLogo", "Form", 0, QApplication::UnicodeUTF8));
        labelM1->setText(QApplication::translate("VehicleLogo", "M1", 0, QApplication::UnicodeUTF8));
        labelM2->setText(QApplication::translate("VehicleLogo", "M2", 0, QApplication::UnicodeUTF8));
        labelC1->setText(QApplication::translate("VehicleLogo", "C1", 0, QApplication::UnicodeUTF8));
        labelC2->setText(QApplication::translate("VehicleLogo", "C2", 0, QApplication::UnicodeUTF8));
        labelNp->setText(QApplication::translate("VehicleLogo", "NP", 0, QApplication::UnicodeUTF8));
        labelLeftHead->setText(QString());
        labelRightHead->setText(QString());
        labelPan->setText(QString());
        labelLfitDirection->setText(QString());
        labelRightDirection->setText(QString());
        labelCurrentStation->setText(QString());
        labelNextStation->setText(QString());
        labelDoor9->setText(QString());
        label9->setText(QApplication::translate("VehicleLogo", "9", 0, QApplication::UnicodeUTF8));
        labelDoor10->setText(QString());
        label10->setText(QApplication::translate("VehicleLogo", "10", 0, QApplication::UnicodeUTF8));
        labelDoor1->setText(QString());
        label2->setText(QApplication::translate("VehicleLogo", "2", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("VehicleLogo", "1", 0, QApplication::UnicodeUTF8));
        labelDoor2->setText(QString());
        labelDoor6->setText(QString());
        label5->setText(QApplication::translate("VehicleLogo", "5", 0, QApplication::UnicodeUTF8));
        labelDoor5->setText(QString());
        label6->setText(QApplication::translate("VehicleLogo", "6", 0, QApplication::UnicodeUTF8));
        labelDoor4->setText(QString());
        labelDoor3->setText(QString());
        label3->setText(QApplication::translate("VehicleLogo", "3", 0, QApplication::UnicodeUTF8));
        label4->setText(QApplication::translate("VehicleLogo", "4", 0, QApplication::UnicodeUTF8));
        label8->setText(QApplication::translate("VehicleLogo", "8", 0, QApplication::UnicodeUTF8));
        labelDoor7->setText(QString());
        labelDoor8->setText(QString());
        label7->setText(QApplication::translate("VehicleLogo", "7", 0, QApplication::UnicodeUTF8));
        label12->setText(QApplication::translate("VehicleLogo", "12", 0, QApplication::UnicodeUTF8));
        labelDoor11->setText(QString());
        labelDoor12->setText(QString());
        label11->setText(QApplication::translate("VehicleLogo", "11", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleLogo: public Ui_VehicleLogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLELOGO_H

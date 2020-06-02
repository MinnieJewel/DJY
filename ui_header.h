/********************************************************************************
** Form generated from reading UI file 'header.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADER_H
#define UI_HEADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Header
{
public:
    QLabel *label_CarNumber;
    QLabel *label_Title;
    QLabel *label_Time;
    QLabel *label_Speed;
    QLabel *labelVoltage;
    QLabel *label_icon;
    QLabel *labelDrag;
    QLabel *labelRestrictSpeed;
    QLabel *labelWashMode;
    QLabel *labelFault;
    QLabel *labelConnFault;
    QLabel *labelFaultComfirm;
    QPushButton *btnConfirm;
    QPushButton *btnConfirmAll;
    QLabel *labelMend;
    QLabel *labelTractionActive;
    QLabel *labelTalkToPassenger;
    QLabel *labelBrake;

    void setupUi(QWidget *Header)
    {
        if (Header->objectName().isEmpty())
            Header->setObjectName(QString::fromUtf8("Header"));
        Header->resize(800, 80);
        Header->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	border : 1px solid black;\n"
"	font:15px, \"SimHei\";\n"
"}"));
        label_CarNumber = new QLabel(Header);
        label_CarNumber->setObjectName(QString::fromUtf8("label_CarNumber"));
        label_CarNumber->setGeometry(QRect(0, 0, 150, 30));
        label_CarNumber->setStyleSheet(QString::fromUtf8("font:25px;"));
        label_Title = new QLabel(Header);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(150, 0, 450, 30));
        label_Title->setStyleSheet(QString::fromUtf8("font:25px;"));
        label_Title->setAlignment(Qt::AlignCenter);
        label_Time = new QLabel(Header);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(600, 0, 200, 30));
        label_Time->setStyleSheet(QString::fromUtf8("font:20px;"));
        label_Time->setAlignment(Qt::AlignCenter);
        label_Speed = new QLabel(Header);
        label_Speed->setObjectName(QString::fromUtf8("label_Speed"));
        label_Speed->setGeometry(QRect(660, 30, 140, 50));
        label_Speed->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";"));
        labelVoltage = new QLabel(Header);
        labelVoltage->setObjectName(QString::fromUtf8("labelVoltage"));
        labelVoltage->setGeometry(QRect(0, 30, 150, 50));
        labelVoltage->setStyleSheet(QString::fromUtf8("font:25px;"));
        label_icon = new QLabel(Header);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(150, 30, 511, 50));
        labelDrag = new QLabel(Header);
        labelDrag->setObjectName(QString::fromUtf8("labelDrag"));
        labelDrag->setGeometry(QRect(350, 32, 45, 45));
        labelDrag->setStyleSheet(QString::fromUtf8("border-image: url(:/image/tracking.png);"));
        labelRestrictSpeed = new QLabel(Header);
        labelRestrictSpeed->setObjectName(QString::fromUtf8("labelRestrictSpeed"));
        labelRestrictSpeed->setGeometry(QRect(550, 32, 90, 45));
        labelRestrictSpeed->setStyleSheet(QString::fromUtf8("font:20px ,\"SimHei\";\n"
"background-color: rgb(255, 255, 0);"));
        labelRestrictSpeed->setAlignment(Qt::AlignCenter);
        labelWashMode = new QLabel(Header);
        labelWashMode->setObjectName(QString::fromUtf8("labelWashMode"));
        labelWashMode->setGeometry(QRect(450, 32, 90, 45));
        labelWashMode->setStyleSheet(QString::fromUtf8("font:20px ,\"SimHei\";\n"
""));
        labelWashMode->setAlignment(Qt::AlignCenter);
        labelFault = new QLabel(Header);
        labelFault->setObjectName(QString::fromUtf8("labelFault"));
        labelFault->setGeometry(QRect(150, 32, 45, 45));
        labelFault->setStyleSheet(QString::fromUtf8("border-image: url(:/image/fault.png);"));
        labelConnFault = new QLabel(Header);
        labelConnFault->setObjectName(QString::fromUtf8("labelConnFault"));
        labelConnFault->setGeometry(QRect(100, 10, 601, 61));
        labelConnFault->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:red;\n"
"font:50px \"SimHei\";"));
        labelConnFault->setAlignment(Qt::AlignCenter);
        labelFaultComfirm = new QLabel(Header);
        labelFaultComfirm->setObjectName(QString::fromUtf8("labelFaultComfirm"));
        labelFaultComfirm->setGeometry(QRect(0, 30, 801, 51));
        labelFaultComfirm->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:red;\n"
"font:30px \"SimHei\";"));
        labelFaultComfirm->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnConfirm = new QPushButton(Header);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(580, 30, 81, 45));
        btnConfirm->setStyleSheet(QString::fromUtf8("outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnConfirmAll = new QPushButton(Header);
        btnConfirmAll->setObjectName(QString::fromUtf8("btnConfirmAll"));
        btnConfirmAll->setGeometry(QRect(670, 30, 81, 45));
        btnConfirmAll->setStyleSheet(QString::fromUtf8("outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        labelMend = new QLabel(Header);
        labelMend->setObjectName(QString::fromUtf8("labelMend"));
        labelMend->setGeometry(QRect(190, 32, 45, 45));
        labelMend->setStyleSheet(QString::fromUtf8("border-image: url(:/image/maintain.PNG);"));
        labelTractionActive = new QLabel(Header);
        labelTractionActive->setObjectName(QString::fromUtf8("labelTractionActive"));
        labelTractionActive->setGeometry(QRect(400, 32, 45, 45));
        labelTractionActive->setStyleSheet(QString::fromUtf8("border-image: url(:/image/motorAllow.gif);"));
        labelTalkToPassenger = new QLabel(Header);
        labelTalkToPassenger->setObjectName(QString::fromUtf8("labelTalkToPassenger"));
        labelTalkToPassenger->setGeometry(QRect(245, 32, 45, 45));
        labelTalkToPassenger->setStyleSheet(QString::fromUtf8("border-image: url(:/image/passageTalk.png);"));
        labelBrake = new QLabel(Header);
        labelBrake->setObjectName(QString::fromUtf8("labelBrake"));
        labelBrake->setGeometry(QRect(295, 32, 45, 45));
        labelBrake->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color:white;\n"
"font:25px;"));
        labelBrake->setAlignment(Qt::AlignCenter);
        label_CarNumber->raise();
        label_Title->raise();
        label_Time->raise();
        label_Speed->raise();
        labelVoltage->raise();
        label_icon->raise();
        labelDrag->raise();
        labelRestrictSpeed->raise();
        labelWashMode->raise();
        labelFault->raise();
        labelMend->raise();
        labelTractionActive->raise();
        labelTalkToPassenger->raise();
        labelBrake->raise();
        labelFaultComfirm->raise();
        btnConfirmAll->raise();
        btnConfirm->raise();
        labelConnFault->raise();

        retranslateUi(Header);

        QMetaObject::connectSlotsByName(Header);
    } // setupUi

    void retranslateUi(QWidget *Header)
    {
        Header->setWindowTitle(QApplication::translate("Header", "Form", 0, QApplication::UnicodeUTF8));
        label_CarNumber->setText(QString());
        label_Title->setText(QString());
        label_Time->setText(QString());
        label_Speed->setText(QString());
        labelVoltage->setText(QString());
        label_icon->setText(QString());
        labelDrag->setText(QString());
        labelRestrictSpeed->setText(QApplication::translate("Header", "\351\231\220\351\200\23740", 0, QApplication::UnicodeUTF8));
        labelWashMode->setText(QApplication::translate("Header", "\346\264\227\350\275\246\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        labelFault->setText(QString());
        labelConnFault->setText(QApplication::translate("Header", "\351\200\232\344\277\241\344\270\255\346\226\255", 0, QApplication::UnicodeUTF8));
        labelFaultComfirm->setText(QString());
        btnConfirm->setText(QApplication::translate("Header", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        btnConfirmAll->setText(QApplication::translate("Header", "\347\241\256\350\256\244\345\205\250\351\203\250", 0, QApplication::UnicodeUTF8));
        labelMend->setText(QString());
        labelTractionActive->setText(QString());
        labelTalkToPassenger->setText(QString());
        labelBrake->setText(QApplication::translate("Header", "EB", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Header: public Ui_Header {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADER_H

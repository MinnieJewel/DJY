/********************************************************************************
** Form generated from reading UI file 'networkpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKPAGE_H
#define UI_NETWORKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkPage
{
public:
    QLabel *labelCCU1;
    QLabel *labelCCU2;
    QLabel *labelHMI1;
    QLabel *labelTBCU1;
    QLabel *labelRIOM1;
    QLabel *labelRIOM2;
    QLabel *labelSwitch1;
    QLabel *labelPIS1;
    QLabel *labelEDCU10;
    QLabel *labelEDCU9;
    QLabel *labelHVAC1;
    QLabel *labelACU;
    QLabel *labelEDCU3;
    QLabel *labelEDCU2;
    QLabel *labelEDCU1;
    QLabel *labelEDCU4;
    QLabel *labelEDCU8;
    QLabel *labelEDCU6;
    QLabel *labelEDCU7;
    QLabel *labelEDCU5;
    QLabel *labelHVAC2;
    QLabel *labelEDCU12;
    QLabel *labelEDCU11;
    QLabel *labelRIOM5;
    QLabel *labelERM1;
    QLabel *labelTBCU2;
    QLabel *labelERM2;
    QLabel *labelHMI2;
    QLabel *labelSwitch4;
    QLabel *labelRIOM6;
    QLabel *labelPIS2;
    QLabel *labelATC;
    QLabel *labelBCU;
    QLabel *labelSwitch2;
    QLabel *labelSwitch3;
    QLabel *labelRIOM3;
    QLabel *labelDCDC1;
    QLabel *labelRIOM4;
    QLabel *labelMVB;
    QLabel *labelETH;
    QLabel *labelCAN;
    QLabel *labelDCDC2;

    void setupUi(QWidget *NetworkPage)
    {
        if (NetworkPage->objectName().isEmpty())
            NetworkPage->setObjectName(QString::fromUtf8("NetworkPage"));
        NetworkPage->resize(800, 350);
        NetworkPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:white;\n"
"border:1px solid black;\n"
"font:12px black \"SimHei\";\n"
"}"));
        labelCCU1 = new QLabel(NetworkPage);
        labelCCU1->setObjectName(QString::fromUtf8("labelCCU1"));
        labelCCU1->setGeometry(QRect(60, 10, 50, 26));
        labelCCU1->setAlignment(Qt::AlignCenter);
        labelCCU2 = new QLabel(NetworkPage);
        labelCCU2->setObjectName(QString::fromUtf8("labelCCU2"));
        labelCCU2->setGeometry(QRect(60, 36, 50, 26));
        labelCCU2->setAlignment(Qt::AlignCenter);
        labelHMI1 = new QLabel(NetworkPage);
        labelHMI1->setObjectName(QString::fromUtf8("labelHMI1"));
        labelHMI1->setGeometry(QRect(60, 62, 50, 26));
        labelHMI1->setAlignment(Qt::AlignCenter);
        labelTBCU1 = new QLabel(NetworkPage);
        labelTBCU1->setObjectName(QString::fromUtf8("labelTBCU1"));
        labelTBCU1->setGeometry(QRect(60, 88, 50, 26));
        labelTBCU1->setAlignment(Qt::AlignCenter);
        labelRIOM1 = new QLabel(NetworkPage);
        labelRIOM1->setObjectName(QString::fromUtf8("labelRIOM1"));
        labelRIOM1->setGeometry(QRect(60, 114, 50, 26));
        labelRIOM1->setAlignment(Qt::AlignCenter);
        labelRIOM2 = new QLabel(NetworkPage);
        labelRIOM2->setObjectName(QString::fromUtf8("labelRIOM2"));
        labelRIOM2->setGeometry(QRect(60, 140, 50, 26));
        labelRIOM2->setAlignment(Qt::AlignCenter);
        labelSwitch1 = new QLabel(NetworkPage);
        labelSwitch1->setObjectName(QString::fromUtf8("labelSwitch1"));
        labelSwitch1->setGeometry(QRect(60, 290, 50, 26));
        labelSwitch1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        labelSwitch1->setAlignment(Qt::AlignCenter);
        labelPIS1 = new QLabel(NetworkPage);
        labelPIS1->setObjectName(QString::fromUtf8("labelPIS1"));
        labelPIS1->setGeometry(QRect(60, 260, 50, 26));
        labelPIS1->setAlignment(Qt::AlignCenter);
        labelEDCU10 = new QLabel(NetworkPage);
        labelEDCU10->setObjectName(QString::fromUtf8("labelEDCU10"));
        labelEDCU10->setGeometry(QRect(155, 200, 53, 26));
        labelEDCU10->setAlignment(Qt::AlignCenter);
        labelEDCU9 = new QLabel(NetworkPage);
        labelEDCU9->setObjectName(QString::fromUtf8("labelEDCU9"));
        labelEDCU9->setGeometry(QRect(155, 120, 50, 26));
        labelEDCU9->setAlignment(Qt::AlignCenter);
        labelHVAC1 = new QLabel(NetworkPage);
        labelHVAC1->setObjectName(QString::fromUtf8("labelHVAC1"));
        labelHVAC1->setGeometry(QRect(225, 200, 50, 26));
        labelHVAC1->setAlignment(Qt::AlignCenter);
        labelACU = new QLabel(NetworkPage);
        labelACU->setObjectName(QString::fromUtf8("labelACU"));
        labelACU->setGeometry(QRect(225, 120, 50, 26));
        labelACU->setAlignment(Qt::AlignCenter);
        labelEDCU3 = new QLabel(NetworkPage);
        labelEDCU3->setObjectName(QString::fromUtf8("labelEDCU3"));
        labelEDCU3->setGeometry(QRect(290, 200, 50, 26));
        labelEDCU3->setAlignment(Qt::AlignCenter);
        labelEDCU2 = new QLabel(NetworkPage);
        labelEDCU2->setObjectName(QString::fromUtf8("labelEDCU2"));
        labelEDCU2->setGeometry(QRect(290, 120, 50, 26));
        labelEDCU2->setAlignment(Qt::AlignCenter);
        labelEDCU1 = new QLabel(NetworkPage);
        labelEDCU1->setObjectName(QString::fromUtf8("labelEDCU1"));
        labelEDCU1->setGeometry(QRect(290, 90, 50, 26));
        labelEDCU1->setAlignment(Qt::AlignCenter);
        labelEDCU4 = new QLabel(NetworkPage);
        labelEDCU4->setObjectName(QString::fromUtf8("labelEDCU4"));
        labelEDCU4->setGeometry(QRect(290, 230, 50, 26));
        labelEDCU4->setAlignment(Qt::AlignCenter);
        labelEDCU8 = new QLabel(NetworkPage);
        labelEDCU8->setObjectName(QString::fromUtf8("labelEDCU8"));
        labelEDCU8->setGeometry(QRect(445, 230, 50, 26));
        labelEDCU8->setAlignment(Qt::AlignCenter);
        labelEDCU6 = new QLabel(NetworkPage);
        labelEDCU6->setObjectName(QString::fromUtf8("labelEDCU6"));
        labelEDCU6->setGeometry(QRect(445, 120, 50, 26));
        labelEDCU6->setAlignment(Qt::AlignCenter);
        labelEDCU7 = new QLabel(NetworkPage);
        labelEDCU7->setObjectName(QString::fromUtf8("labelEDCU7"));
        labelEDCU7->setGeometry(QRect(445, 200, 50, 26));
        labelEDCU7->setAlignment(Qt::AlignCenter);
        labelEDCU5 = new QLabel(NetworkPage);
        labelEDCU5->setObjectName(QString::fromUtf8("labelEDCU5"));
        labelEDCU5->setGeometry(QRect(445, 90, 50, 26));
        labelEDCU5->setAlignment(Qt::AlignCenter);
        labelHVAC2 = new QLabel(NetworkPage);
        labelHVAC2->setObjectName(QString::fromUtf8("labelHVAC2"));
        labelHVAC2->setGeometry(QRect(505, 200, 50, 26));
        labelHVAC2->setAlignment(Qt::AlignCenter);
        labelEDCU12 = new QLabel(NetworkPage);
        labelEDCU12->setObjectName(QString::fromUtf8("labelEDCU12"));
        labelEDCU12->setGeometry(QRect(580, 200, 56, 26));
        labelEDCU12->setAlignment(Qt::AlignCenter);
        labelEDCU11 = new QLabel(NetworkPage);
        labelEDCU11->setObjectName(QString::fromUtf8("labelEDCU11"));
        labelEDCU11->setGeometry(QRect(580, 120, 56, 26));
        labelEDCU11->setAlignment(Qt::AlignCenter);
        labelRIOM5 = new QLabel(NetworkPage);
        labelRIOM5->setObjectName(QString::fromUtf8("labelRIOM5"));
        labelRIOM5->setGeometry(QRect(680, 140, 50, 26));
        labelRIOM5->setAlignment(Qt::AlignCenter);
        labelERM1 = new QLabel(NetworkPage);
        labelERM1->setObjectName(QString::fromUtf8("labelERM1"));
        labelERM1->setGeometry(QRect(680, 10, 50, 26));
        labelERM1->setAlignment(Qt::AlignCenter);
        labelTBCU2 = new QLabel(NetworkPage);
        labelTBCU2->setObjectName(QString::fromUtf8("labelTBCU2"));
        labelTBCU2->setGeometry(QRect(680, 88, 50, 26));
        labelTBCU2->setAlignment(Qt::AlignCenter);
        labelERM2 = new QLabel(NetworkPage);
        labelERM2->setObjectName(QString::fromUtf8("labelERM2"));
        labelERM2->setGeometry(QRect(680, 36, 50, 26));
        labelERM2->setAlignment(Qt::AlignCenter);
        labelHMI2 = new QLabel(NetworkPage);
        labelHMI2->setObjectName(QString::fromUtf8("labelHMI2"));
        labelHMI2->setGeometry(QRect(680, 62, 50, 26));
        labelHMI2->setAlignment(Qt::AlignCenter);
        labelSwitch4 = new QLabel(NetworkPage);
        labelSwitch4->setObjectName(QString::fromUtf8("labelSwitch4"));
        labelSwitch4->setGeometry(QRect(680, 290, 50, 26));
        labelSwitch4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        labelSwitch4->setAlignment(Qt::AlignCenter);
        labelRIOM6 = new QLabel(NetworkPage);
        labelRIOM6->setObjectName(QString::fromUtf8("labelRIOM6"));
        labelRIOM6->setGeometry(QRect(680, 114, 50, 26));
        labelRIOM6->setAlignment(Qt::AlignCenter);
        labelPIS2 = new QLabel(NetworkPage);
        labelPIS2->setObjectName(QString::fromUtf8("labelPIS2"));
        labelPIS2->setGeometry(QRect(680, 260, 50, 26));
        labelPIS2->setAlignment(Qt::AlignCenter);
        labelATC = new QLabel(NetworkPage);
        labelATC->setObjectName(QString::fromUtf8("labelATC"));
        labelATC->setGeometry(QRect(680, 200, 50, 26));
        labelATC->setAlignment(Qt::AlignCenter);
        labelBCU = new QLabel(NetworkPage);
        labelBCU->setObjectName(QString::fromUtf8("labelBCU"));
        labelBCU->setGeometry(QRect(680, 230, 50, 26));
        labelBCU->setAlignment(Qt::AlignCenter);
        labelSwitch2 = new QLabel(NetworkPage);
        labelSwitch2->setObjectName(QString::fromUtf8("labelSwitch2"));
        labelSwitch2->setGeometry(QRect(240, 290, 50, 26));
        labelSwitch2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        labelSwitch2->setAlignment(Qt::AlignCenter);
        labelSwitch3 = new QLabel(NetworkPage);
        labelSwitch3->setObjectName(QString::fromUtf8("labelSwitch3"));
        labelSwitch3->setGeometry(QRect(490, 290, 50, 26));
        labelSwitch3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);"));
        labelSwitch3->setAlignment(Qt::AlignCenter);
        labelRIOM3 = new QLabel(NetworkPage);
        labelRIOM3->setObjectName(QString::fromUtf8("labelRIOM3"));
        labelRIOM3->setGeometry(QRect(240, 40, 50, 26));
        labelRIOM3->setAlignment(Qt::AlignCenter);
        labelDCDC1 = new QLabel(NetworkPage);
        labelDCDC1->setObjectName(QString::fromUtf8("labelDCDC1"));
        labelDCDC1->setGeometry(QRect(360, 40, 50, 26));
        labelDCDC1->setAlignment(Qt::AlignCenter);
        labelRIOM4 = new QLabel(NetworkPage);
        labelRIOM4->setObjectName(QString::fromUtf8("labelRIOM4"));
        labelRIOM4->setGeometry(QRect(500, 40, 50, 26));
        labelRIOM4->setAlignment(Qt::AlignCenter);
        labelMVB = new QLabel(NetworkPage);
        labelMVB->setObjectName(QString::fromUtf8("labelMVB"));
        labelMVB->setGeometry(QRect(365, 5, 41, 17));
        labelMVB->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:16px ;\n"
"color:blue;\n"
"border:0px;"));
        labelMVB->setAlignment(Qt::AlignCenter);
        labelETH = new QLabel(NetworkPage);
        labelETH->setObjectName(QString::fromUtf8("labelETH"));
        labelETH->setGeometry(QRect(360, 310, 71, 20));
        labelETH->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:16px ;\n"
"color: rgb(255, 0, 255);\n"
"border:0px;\n"
""));
        labelETH->setAlignment(Qt::AlignCenter);
        labelCAN = new QLabel(NetworkPage);
        labelCAN->setObjectName(QString::fromUtf8("labelCAN"));
        labelCAN->setGeometry(QRect(350, 250, 81, 20));
        labelCAN->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:16px ;\n"
"color:black;\n"
"border:0px;"));
        labelCAN->setAlignment(Qt::AlignCenter);
        labelDCDC2 = new QLabel(NetworkPage);
        labelDCDC2->setObjectName(QString::fromUtf8("labelDCDC2"));
        labelDCDC2->setGeometry(QRect(360, 65, 50, 26));
        labelDCDC2->setAlignment(Qt::AlignCenter);

        retranslateUi(NetworkPage);

        QMetaObject::connectSlotsByName(NetworkPage);
    } // setupUi

    void retranslateUi(QWidget *NetworkPage)
    {
        NetworkPage->setWindowTitle(QApplication::translate("NetworkPage", "Form", 0, QApplication::UnicodeUTF8));
        labelCCU1->setText(QApplication::translate("NetworkPage", "CCU1", 0, QApplication::UnicodeUTF8));
        labelCCU2->setText(QApplication::translate("NetworkPage", "CCU2", 0, QApplication::UnicodeUTF8));
        labelHMI1->setText(QApplication::translate("NetworkPage", "HMI1", 0, QApplication::UnicodeUTF8));
        labelTBCU1->setText(QApplication::translate("NetworkPage", "TBCU1", 0, QApplication::UnicodeUTF8));
        labelRIOM1->setText(QApplication::translate("NetworkPage", "RIOM1", 0, QApplication::UnicodeUTF8));
        labelRIOM2->setText(QApplication::translate("NetworkPage", "RIOM2", 0, QApplication::UnicodeUTF8));
        labelSwitch1->setText(QApplication::translate("NetworkPage", "Swich", 0, QApplication::UnicodeUTF8));
        labelPIS1->setText(QApplication::translate("NetworkPage", "PIS", 0, QApplication::UnicodeUTF8));
        labelEDCU10->setText(QApplication::translate("NetworkPage", "EDCU10", 0, QApplication::UnicodeUTF8));
        labelEDCU9->setText(QApplication::translate("NetworkPage", "EDCU9", 0, QApplication::UnicodeUTF8));
        labelHVAC1->setText(QApplication::translate("NetworkPage", "HVAC1", 0, QApplication::UnicodeUTF8));
        labelACU->setText(QApplication::translate("NetworkPage", "ACU", 0, QApplication::UnicodeUTF8));
        labelEDCU3->setText(QApplication::translate("NetworkPage", "EDCU3", 0, QApplication::UnicodeUTF8));
        labelEDCU2->setText(QApplication::translate("NetworkPage", "EDCU2", 0, QApplication::UnicodeUTF8));
        labelEDCU1->setText(QApplication::translate("NetworkPage", "EDCU1", 0, QApplication::UnicodeUTF8));
        labelEDCU4->setText(QApplication::translate("NetworkPage", "EDCU4", 0, QApplication::UnicodeUTF8));
        labelEDCU8->setText(QApplication::translate("NetworkPage", "EDCU8", 0, QApplication::UnicodeUTF8));
        labelEDCU6->setText(QApplication::translate("NetworkPage", "EDCU6", 0, QApplication::UnicodeUTF8));
        labelEDCU7->setText(QApplication::translate("NetworkPage", "EDCU7", 0, QApplication::UnicodeUTF8));
        labelEDCU5->setText(QApplication::translate("NetworkPage", "EDCU5", 0, QApplication::UnicodeUTF8));
        labelHVAC2->setText(QApplication::translate("NetworkPage", "HVAC2", 0, QApplication::UnicodeUTF8));
        labelEDCU12->setText(QApplication::translate("NetworkPage", "EDCU12", 0, QApplication::UnicodeUTF8));
        labelEDCU11->setText(QApplication::translate("NetworkPage", "EDCU11", 0, QApplication::UnicodeUTF8));
        labelRIOM5->setText(QApplication::translate("NetworkPage", "RIOM5", 0, QApplication::UnicodeUTF8));
        labelERM1->setText(QApplication::translate("NetworkPage", "ERM1", 0, QApplication::UnicodeUTF8));
        labelTBCU2->setText(QApplication::translate("NetworkPage", "TBCU2", 0, QApplication::UnicodeUTF8));
        labelERM2->setText(QApplication::translate("NetworkPage", "ERM2", 0, QApplication::UnicodeUTF8));
        labelHMI2->setText(QApplication::translate("NetworkPage", "HMI2", 0, QApplication::UnicodeUTF8));
        labelSwitch4->setText(QApplication::translate("NetworkPage", "Switch", 0, QApplication::UnicodeUTF8));
        labelRIOM6->setText(QApplication::translate("NetworkPage", "RIOM6", 0, QApplication::UnicodeUTF8));
        labelPIS2->setText(QApplication::translate("NetworkPage", "PIS", 0, QApplication::UnicodeUTF8));
        labelATC->setText(QApplication::translate("NetworkPage", "ATC", 0, QApplication::UnicodeUTF8));
        labelBCU->setText(QApplication::translate("NetworkPage", "BCU", 0, QApplication::UnicodeUTF8));
        labelSwitch2->setText(QApplication::translate("NetworkPage", "Switch", 0, QApplication::UnicodeUTF8));
        labelSwitch3->setText(QApplication::translate("NetworkPage", "Switch", 0, QApplication::UnicodeUTF8));
        labelRIOM3->setText(QApplication::translate("NetworkPage", "RIOM3", 0, QApplication::UnicodeUTF8));
        labelDCDC1->setText(QApplication::translate("NetworkPage", "DCDC1", 0, QApplication::UnicodeUTF8));
        labelRIOM4->setText(QApplication::translate("NetworkPage", "RIOM4", 0, QApplication::UnicodeUTF8));
        labelMVB->setText(QApplication::translate("NetworkPage", "MVB", 0, QApplication::UnicodeUTF8));
        labelETH->setText(QApplication::translate("NetworkPage", "Ethernet", 0, QApplication::UnicodeUTF8));
        labelCAN->setText(QApplication::translate("NetworkPage", "CANOpen", 0, QApplication::UnicodeUTF8));
        labelDCDC2->setText(QApplication::translate("NetworkPage", "DCDC2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NetworkPage: public Ui_NetworkPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKPAGE_H

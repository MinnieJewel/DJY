/********************************************************************************
** Form generated from reading UI file 'runstatepage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNSTATEPAGE_H
#define UI_RUNSTATEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunStatePage
{
public:
    QLabel *labelM1TractionState;
    QLabel *labelM2TractionState;
    QLabel *labelM2Brake;
    QLabel *labelC1ACUState;
    QLabel *labelSuperBatteryPoint;
    QLabel *labelSignalSystem;
    QLabel *label;
    QLabel *labelCapacitor1;
    QLabel *labelCapacitor2;
    QLabel *labelCapacitor3;
    QLabel *labelInfo;
    QPushButton *btnManual;
    QPushButton *btnDCDC;
    QLabel *label1;
    QLabel *label7;
    QLabel *labelLevel4;
    QLabel *labelLevel1;
    QLabel *labelLevel3;
    QLabel *label8;
    QLabel *labelLevel2;
    QLabel *labelDCDC0;
    QLabel *labelDCDC100;
    QLabel *labelDCDC;
    QLabel *labelDCDC50;
    QLabel *labelDCDC20;
    QLabel *labelLevel0;
    QLabel *labelTract100;
    QLabel *labelBrake100;
    QLabel *labelTract80;
    QLabel *labelBrake80;
    QLabel *labelTract50;
    QLabel *labelBrake50;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label9;
    QLabel *label15;
    QLabel *label2_2;
    QLabel *label11;
    QLabel *label12;
    QLabel *label13;
    QLabel *label14;
    QLabel *labelBattery;
    QLabel *label16;
    QLabel *labelBatteryP;
    QLabel *labelBatteryN;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *labelBatteryTemperature;
    QLabel *labelLevelPoint;
    QLabel *labelSuperBatteryNumber;
    QLabel *labelLevelNumber;
    QLabel *label8_2;
    QLabel *label1_2;
    QLabel *labelHSCB;
    QLabel *labelTractionBrake1;
    QLabel *labelManuMode;
    QLabel *labeldcdcDischarge;
    QPushButton *btnLeftTurn;
    QPushButton *btnDoubleFlick;
    QPushButton *btnRightTurn;
    QLabel *labelDCDCState;
    QLabel *labelM1Brake;
    QLabel *labelNPBrake;
    QLabel *labelTractionBrake2;
    QLabel *labelTractionBrake3;

    void setupUi(QWidget *RunStatePage)
    {
        if (RunStatePage->objectName().isEmpty())
            RunStatePage->setObjectName(QString::fromUtf8("RunStatePage"));
        RunStatePage->setEnabled(true);
        RunStatePage->resize(800, 350);
        RunStatePage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"outline:none;\n"
"}\n"
""));
        labelM1TractionState = new QLabel(RunStatePage);
        labelM1TractionState->setObjectName(QString::fromUtf8("labelM1TractionState"));
        labelM1TractionState->setGeometry(QRect(160, 0, 35, 35));
        labelM1TractionState->setStyleSheet(QString::fromUtf8("border-image: url(:/image/tcuUnknown.jpg);"));
        labelM2TractionState = new QLabel(RunStatePage);
        labelM2TractionState->setObjectName(QString::fromUtf8("labelM2TractionState"));
        labelM2TractionState->setGeometry(QRect(600, 0, 35, 35));
        labelM2TractionState->setStyleSheet(QString::fromUtf8("border-image: url(:/image/tcuUnknown.jpg);"));
        labelM2Brake = new QLabel(RunStatePage);
        labelM2Brake->setObjectName(QString::fromUtf8("labelM2Brake"));
        labelM2Brake->setGeometry(QRect(560, 0, 35, 35));
        labelM2Brake->setStyleSheet(QString::fromUtf8("image: url(:/image/brakeRelease.png);"));
        labelC1ACUState = new QLabel(RunStatePage);
        labelC1ACUState->setObjectName(QString::fromUtf8("labelC1ACUState"));
        labelC1ACUState->setGeometry(QRect(282, 0, 35, 35));
        labelC1ACUState->setStyleSheet(QString::fromUtf8("image: url(:/image/acuUnknown.jpg);"));
        labelSuperBatteryPoint = new QLabel(RunStatePage);
        labelSuperBatteryPoint->setObjectName(QString::fromUtf8("labelSuperBatteryPoint"));
        labelSuperBatteryPoint->setGeometry(QRect(50, 308, 20, 20));
        labelSuperBatteryPoint->setStyleSheet(QString::fromUtf8("font:20px,\"SimHei\";\n"
"background-color: rgb(51,153,255);"));
        labelSuperBatteryPoint->setAlignment(Qt::AlignCenter);
        labelSignalSystem = new QLabel(RunStatePage);
        labelSignalSystem->setObjectName(QString::fromUtf8("labelSignalSystem"));
        labelSignalSystem->setGeometry(QRect(370, 110, 15, 15));
        labelSignalSystem->setStyleSheet(QString::fromUtf8("border-radius:7px;"));
        label = new QLabel(RunStatePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 110, 66, 17));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        labelCapacitor1 = new QLabel(RunStatePage);
        labelCapacitor1->setObjectName(QString::fromUtf8("labelCapacitor1"));
        labelCapacitor1->setGeometry(QRect(70, 120, 12, 100));
        labelCapacitor1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        labelCapacitor2 = new QLabel(RunStatePage);
        labelCapacitor2->setObjectName(QString::fromUtf8("labelCapacitor2"));
        labelCapacitor2->setGeometry(QRect(70, 220, 12, 60));
        labelCapacitor2->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        labelCapacitor3 = new QLabel(RunStatePage);
        labelCapacitor3->setObjectName(QString::fromUtf8("labelCapacitor3"));
        labelCapacitor3->setGeometry(QRect(70, 280, 12, 40));
        labelCapacitor3->setStyleSheet(QString::fromUtf8("background-color:red;"));
        labelInfo = new QLabel(RunStatePage);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(320, 140, 171, 71));
        labelInfo->setStyleSheet(QString::fromUtf8("font:20px, \"SimHei\";\n"
"background-color: rgb(255, 255, 0);"));
        btnManual = new QPushButton(RunStatePage);
        btnManual->setObjectName(QString::fromUtf8("btnManual"));
        btnManual->setEnabled(true);
        btnManual->setGeometry(QRect(290, 260, 100, 40));
        btnManual->setStyleSheet(QString::fromUtf8(""));
        btnDCDC = new QPushButton(RunStatePage);
        btnDCDC->setObjectName(QString::fromUtf8("btnDCDC"));
        btnDCDC->setEnabled(true);
        btnDCDC->setGeometry(QRect(435, 260, 100, 40));
        btnDCDC->setStyleSheet(QString::fromUtf8(""));
        label1 = new QLabel(RunStatePage);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(70, 330, 66, 17));
        label1->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        label7 = new QLabel(RunStatePage);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(600, 130, 41, 17));
        label7->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        labelLevel4 = new QLabel(RunStatePage);
        labelLevel4->setObjectName(QString::fromUtf8("labelLevel4"));
        labelLevel4->setGeometry(QRect(680, 300, 12, 20));
        labelLevel4->setStyleSheet(QString::fromUtf8("background-color:rgb(255,255,0);"));
        labelLevel1 = new QLabel(RunStatePage);
        labelLevel1->setObjectName(QString::fromUtf8("labelLevel1"));
        labelLevel1->setGeometry(QRect(680, 120, 12, 20));
        labelLevel1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        labelLevel3 = new QLabel(RunStatePage);
        labelLevel3->setObjectName(QString::fromUtf8("labelLevel3"));
        labelLevel3->setGeometry(QRect(680, 220, 12, 80));
        labelLevel3->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        label8 = new QLabel(RunStatePage);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setEnabled(true);
        label8->setGeometry(QRect(600, 290, 41, 17));
        label8->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        labelLevel2 = new QLabel(RunStatePage);
        labelLevel2->setObjectName(QString::fromUtf8("labelLevel2"));
        labelLevel2->setGeometry(QRect(680, 140, 12, 80));
        labelLevel2->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));
        labelDCDC0 = new QLabel(RunStatePage);
        labelDCDC0->setObjectName(QString::fromUtf8("labelDCDC0"));
        labelDCDC0->setGeometry(QRect(70, 320, 20, 1));
        labelDCDC0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelDCDC100 = new QLabel(RunStatePage);
        labelDCDC100->setObjectName(QString::fromUtf8("labelDCDC100"));
        labelDCDC100->setGeometry(QRect(70, 120, 20, 1));
        labelDCDC100->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelDCDC = new QLabel(RunStatePage);
        labelDCDC->setObjectName(QString::fromUtf8("labelDCDC"));
        labelDCDC->setGeometry(QRect(75, 170, 15, 1));
        labelDCDC->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelDCDC50 = new QLabel(RunStatePage);
        labelDCDC50->setObjectName(QString::fromUtf8("labelDCDC50"));
        labelDCDC50->setGeometry(QRect(75, 220, 15, 1));
        labelDCDC50->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelDCDC20 = new QLabel(RunStatePage);
        labelDCDC20->setObjectName(QString::fromUtf8("labelDCDC20"));
        labelDCDC20->setGeometry(QRect(75, 280, 15, 1));
        labelDCDC20->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelLevel0 = new QLabel(RunStatePage);
        labelLevel0->setObjectName(QString::fromUtf8("labelLevel0"));
        labelLevel0->setGeometry(QRect(672, 220, 20, 1));
        labelLevel0->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelTract100 = new QLabel(RunStatePage);
        labelTract100->setObjectName(QString::fromUtf8("labelTract100"));
        labelTract100->setGeometry(QRect(672, 120, 20, 1));
        labelTract100->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelBrake100 = new QLabel(RunStatePage);
        labelBrake100->setObjectName(QString::fromUtf8("labelBrake100"));
        labelBrake100->setGeometry(QRect(672, 320, 20, 1));
        labelBrake100->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelTract80 = new QLabel(RunStatePage);
        labelTract80->setObjectName(QString::fromUtf8("labelTract80"));
        labelTract80->setGeometry(QRect(672, 140, 20, 1));
        labelTract80->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelBrake80 = new QLabel(RunStatePage);
        labelBrake80->setObjectName(QString::fromUtf8("labelBrake80"));
        labelBrake80->setGeometry(QRect(672, 300, 20, 1));
        labelBrake80->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelTract50 = new QLabel(RunStatePage);
        labelTract50->setObjectName(QString::fromUtf8("labelTract50"));
        labelTract50->setGeometry(QRect(672, 170, 20, 1));
        labelTract50->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelBrake50 = new QLabel(RunStatePage);
        labelBrake50->setObjectName(QString::fromUtf8("labelBrake50"));
        labelBrake50->setGeometry(QRect(672, 270, 20, 1));
        labelBrake50->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label2 = new QLabel(RunStatePage);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(95, 310, 15, 15));
        label2->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label3 = new QLabel(RunStatePage);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(95, 275, 31, 16));
        label3->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label4 = new QLabel(RunStatePage);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(95, 210, 31, 16));
        label4->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label5 = new QLabel(RunStatePage);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(95, 160, 31, 16));
        label5->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label6 = new QLabel(RunStatePage);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(95, 110, 31, 16));
        label6->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label9 = new QLabel(RunStatePage);
        label9->setObjectName(QString::fromUtf8("label9"));
        label9->setGeometry(QRect(640, 110, 31, 16));
        label9->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label15 = new QLabel(RunStatePage);
        label15->setObjectName(QString::fromUtf8("label15"));
        label15->setGeometry(QRect(640, 310, 31, 16));
        label15->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label2_2 = new QLabel(RunStatePage);
        label2_2->setObjectName(QString::fromUtf8("label2_2"));
        label2_2->setGeometry(QRect(646, 135, 25, 16));
        label2_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label11 = new QLabel(RunStatePage);
        label11->setObjectName(QString::fromUtf8("label11"));
        label11->setGeometry(QRect(646, 160, 25, 16));
        label11->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label12 = new QLabel(RunStatePage);
        label12->setObjectName(QString::fromUtf8("label12"));
        label12->setGeometry(QRect(650, 210, 16, 16));
        label12->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label13 = new QLabel(RunStatePage);
        label13->setObjectName(QString::fromUtf8("label13"));
        label13->setGeometry(QRect(646, 260, 25, 16));
        label13->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label14 = new QLabel(RunStatePage);
        label14->setObjectName(QString::fromUtf8("label14"));
        label14->setGeometry(QRect(646, 290, 25, 16));
        label14->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        labelBattery = new QLabel(RunStatePage);
        labelBattery->setObjectName(QString::fromUtf8("labelBattery"));
        labelBattery->setGeometry(QRect(160, 210, 65, 60));
        labelBattery->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);\n"
"border:2px solid black;"));
        labelBattery->setAlignment(Qt::AlignCenter);
        label16 = new QLabel(RunStatePage);
        label16->setObjectName(QString::fromUtf8("label16"));
        label16->setGeometry(QRect(167, 280, 51, 17));
        label16->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        labelBatteryP = new QLabel(RunStatePage);
        labelBatteryP->setObjectName(QString::fromUtf8("labelBatteryP"));
        labelBatteryP->setGeometry(QRect(170, 190, 5, 20));
        labelBatteryP->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelBatteryN = new QLabel(RunStatePage);
        labelBatteryN->setObjectName(QString::fromUtf8("labelBatteryN"));
        labelBatteryN->setGeometry(QRect(210, 190, 5, 20));
        labelBatteryN->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_13 = new QLabel(RunStatePage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(165, 215, 16, 16));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(RunStatePage);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(202, 215, 16, 16));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        label_14->setAlignment(Qt::AlignCenter);
        labelBatteryTemperature = new QLabel(RunStatePage);
        labelBatteryTemperature->setObjectName(QString::fromUtf8("labelBatteryTemperature"));
        labelBatteryTemperature->setGeometry(QRect(175, 250, 41, 16));
        labelBatteryTemperature->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);\n"
"font: 75 11pt \"SimHei\";\n"
"border:0px;"));
        labelBatteryTemperature->setAlignment(Qt::AlignCenter);
        labelLevelPoint = new QLabel(RunStatePage);
        labelLevelPoint->setObjectName(QString::fromUtf8("labelLevelPoint"));
        labelLevelPoint->setGeometry(QRect(692, 208, 20, 20));
        labelLevelPoint->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:20px,\"SimHei\";"));
        labelLevelPoint->setAlignment(Qt::AlignCenter);
        labelSuperBatteryNumber = new QLabel(RunStatePage);
        labelSuperBatteryNumber->setObjectName(QString::fromUtf8("labelSuperBatteryNumber"));
        labelSuperBatteryNumber->setGeometry(QRect(15, 305, 37, 30));
        labelSuperBatteryNumber->setAlignment(Qt::AlignCenter);
        labelLevelNumber = new QLabel(RunStatePage);
        labelLevelNumber->setObjectName(QString::fromUtf8("labelLevelNumber"));
        labelLevelNumber->setGeometry(QRect(712, 207, 37, 30));
        labelLevelNumber->setAlignment(Qt::AlignCenter);
        label8_2 = new QLabel(RunStatePage);
        label8_2->setObjectName(QString::fromUtf8("label8_2"));
        label8_2->setGeometry(QRect(640, 310, 31, 17));
        label8_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 10pt \"SimHei\";\n"
"border:0px;"));
        label1_2 = new QLabel(RunStatePage);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));
        label1_2->setGeometry(QRect(670, 330, 31, 17));
        label1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font: 75 12pt \"SimHei\";\n"
"border:0px;"));
        labelHSCB = new QLabel(RunStatePage);
        labelHSCB->setObjectName(QString::fromUtf8("labelHSCB"));
        labelHSCB->setGeometry(QRect(440, 0, 35, 35));
        labelHSCB->setStyleSheet(QString::fromUtf8("border-image: url(:/image/HSCBclosed.png);"));
        labelHSCB->setAlignment(Qt::AlignCenter);
        labelTractionBrake1 = new QLabel(RunStatePage);
        labelTractionBrake1->setObjectName(QString::fromUtf8("labelTractionBrake1"));
        labelTractionBrake1->setGeometry(QRect(200, 40, 35, 35));
        labelTractionBrake1->setStyleSheet(QString::fromUtf8("image: url(:/image/OFFtrackbreak.png);"));
        labelManuMode = new QLabel(RunStatePage);
        labelManuMode->setObjectName(QString::fromUtf8("labelManuMode"));
        labelManuMode->setGeometry(QRect(290, 310, 111, 17));
        labelManuMode->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:15px,  \"SimHei\";\n"
"border:0px;\n"
"color:red;"));
        labeldcdcDischarge = new QLabel(RunStatePage);
        labeldcdcDischarge->setObjectName(QString::fromUtf8("labeldcdcDischarge"));
        labeldcdcDischarge->setGeometry(QRect(440, 310, 91, 17));
        labeldcdcDischarge->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:15px,  \"SimHei\";\n"
"border:0px;\n"
"color:red;"));
        btnLeftTurn = new QPushButton(RunStatePage);
        btnLeftTurn->setObjectName(QString::fromUtf8("btnLeftTurn"));
        btnLeftTurn->setEnabled(true);
        btnLeftTurn->setGeometry(QRect(240, 210, 100, 40));
        btnLeftTurn->setStyleSheet(QString::fromUtf8(""));
        btnDoubleFlick = new QPushButton(RunStatePage);
        btnDoubleFlick->setObjectName(QString::fromUtf8("btnDoubleFlick"));
        btnDoubleFlick->setEnabled(true);
        btnDoubleFlick->setGeometry(QRect(360, 210, 100, 40));
        btnDoubleFlick->setStyleSheet(QString::fromUtf8(""));
        btnRightTurn = new QPushButton(RunStatePage);
        btnRightTurn->setObjectName(QString::fromUtf8("btnRightTurn"));
        btnRightTurn->setEnabled(true);
        btnRightTurn->setGeometry(QRect(480, 210, 100, 40));
        btnRightTurn->setStyleSheet(QString::fromUtf8(""));
        labelDCDCState = new QLabel(RunStatePage);
        labelDCDCState->setObjectName(QString::fromUtf8("labelDCDCState"));
        labelDCDCState->setGeometry(QRect(360, 0, 35, 35));
        labelDCDCState->setStyleSheet(QString::fromUtf8(""));
        labelM1Brake = new QLabel(RunStatePage);
        labelM1Brake->setObjectName(QString::fromUtf8("labelM1Brake"));
        labelM1Brake->setGeometry(QRect(200, 0, 35, 35));
        labelM1Brake->setStyleSheet(QString::fromUtf8(""));
        labelNPBrake = new QLabel(RunStatePage);
        labelNPBrake->setObjectName(QString::fromUtf8("labelNPBrake"));
        labelNPBrake->setGeometry(QRect(400, 0, 35, 35));
        labelNPBrake->setStyleSheet(QString::fromUtf8(""));
        labelTractionBrake2 = new QLabel(RunStatePage);
        labelTractionBrake2->setObjectName(QString::fromUtf8("labelTractionBrake2"));
        labelTractionBrake2->setGeometry(QRect(400, 40, 35, 35));
        labelTractionBrake2->setStyleSheet(QString::fromUtf8("image: url(:/image/OFFtrackbreak.png);"));
        labelTractionBrake3 = new QLabel(RunStatePage);
        labelTractionBrake3->setObjectName(QString::fromUtf8("labelTractionBrake3"));
        labelTractionBrake3->setGeometry(QRect(600, 40, 35, 35));
        labelTractionBrake3->setStyleSheet(QString::fromUtf8("image: url(:/image/OFFtrackbreak.png);"));

        retranslateUi(RunStatePage);

        QMetaObject::connectSlotsByName(RunStatePage);
    } // setupUi

    void retranslateUi(QWidget *RunStatePage)
    {
        RunStatePage->setWindowTitle(QApplication::translate("RunStatePage", "Form", 0, QApplication::UnicodeUTF8));
        labelM1TractionState->setText(QString());
        labelM2TractionState->setText(QString());
        labelM2Brake->setText(QString());
        labelC1ACUState->setText(QString());
        labelSuperBatteryPoint->setText(QApplication::translate("RunStatePage", "\342\226\266", 0, QApplication::UnicodeUTF8));
        labelSignalSystem->setText(QString());
        label->setText(QApplication::translate("RunStatePage", "\344\277\241\345\217\267\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        labelCapacitor1->setText(QString());
        labelCapacitor2->setText(QString());
        labelCapacitor3->setText(QString());
        labelInfo->setText(QApplication::translate("RunStatePage", "\344\276\233\347\224\265\346\250\241\345\274\217\345\210\207\346\215\242\345\244\261\350\264\245\357\274\214\n"
"\350\257\267\346\211\213\345\212\250DCDC\346\224\276\347\224\265\357\274\201", 0, QApplication::UnicodeUTF8));
        btnManual->setText(QApplication::translate("RunStatePage", "\346\211\213\345\212\250\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        btnDCDC->setText(QApplication::translate("RunStatePage", "DCDC\346\224\276\347\224\265", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("RunStatePage", "\350\266\205\347\272\247\347\224\265\345\256\271", 0, QApplication::UnicodeUTF8));
        label7->setText(QApplication::translate("RunStatePage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        labelLevel4->setText(QString());
        labelLevel1->setText(QString());
        labelLevel3->setText(QString());
        label8->setText(QApplication::translate("RunStatePage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        labelLevel2->setText(QString());
        labelDCDC0->setText(QString());
        labelDCDC100->setText(QString());
        labelDCDC->setText(QString());
        labelDCDC50->setText(QString());
        labelDCDC20->setText(QString());
        labelLevel0->setText(QString());
        labelTract100->setText(QString());
        labelBrake100->setText(QString());
        labelTract80->setText(QString());
        labelBrake80->setText(QString());
        labelTract50->setText(QString());
        labelBrake50->setText(QString());
        label2->setText(QApplication::translate("RunStatePage", "0", 0, QApplication::UnicodeUTF8));
        label3->setText(QApplication::translate("RunStatePage", "20%", 0, QApplication::UnicodeUTF8));
        label4->setText(QApplication::translate("RunStatePage", "50%", 0, QApplication::UnicodeUTF8));
        label5->setText(QApplication::translate("RunStatePage", "75%", 0, QApplication::UnicodeUTF8));
        label6->setText(QApplication::translate("RunStatePage", "100%", 0, QApplication::UnicodeUTF8));
        label9->setText(QApplication::translate("RunStatePage", "100%", 0, QApplication::UnicodeUTF8));
        label15->setText(QApplication::translate("RunStatePage", "100%", 0, QApplication::UnicodeUTF8));
        label2_2->setText(QApplication::translate("RunStatePage", "80%", 0, QApplication::UnicodeUTF8));
        label11->setText(QApplication::translate("RunStatePage", "50%", 0, QApplication::UnicodeUTF8));
        label12->setText(QApplication::translate("RunStatePage", "0", 0, QApplication::UnicodeUTF8));
        label13->setText(QApplication::translate("RunStatePage", "50%", 0, QApplication::UnicodeUTF8));
        label14->setText(QApplication::translate("RunStatePage", "80%", 0, QApplication::UnicodeUTF8));
        labelBattery->setText(QApplication::translate("RunStatePage", "24.0V", 0, QApplication::UnicodeUTF8));
        label16->setText(QApplication::translate("RunStatePage", "\350\223\204\347\224\265\346\261\240", 0, QApplication::UnicodeUTF8));
        labelBatteryP->setText(QString());
        labelBatteryN->setText(QString());
        label_13->setText(QApplication::translate("RunStatePage", "+", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RunStatePage", "-", 0, QApplication::UnicodeUTF8));
        labelBatteryTemperature->setText(QApplication::translate("RunStatePage", "34\342\204\203", 0, QApplication::UnicodeUTF8));
        labelLevelPoint->setText(QApplication::translate("RunStatePage", "\342\227\200", 0, QApplication::UnicodeUTF8));
        labelSuperBatteryNumber->setText(QApplication::translate("RunStatePage", "0", 0, QApplication::UnicodeUTF8));
        labelLevelNumber->setText(QApplication::translate("RunStatePage", "100%", 0, QApplication::UnicodeUTF8));
        label8_2->setText(QApplication::translate("RunStatePage", "100%", 0, QApplication::UnicodeUTF8));
        label1_2->setText(QApplication::translate("RunStatePage", "\347\272\247\344\275\215", 0, QApplication::UnicodeUTF8));
        labelHSCB->setText(QString());
        labelTractionBrake1->setText(QString());
        labelManuMode->setText(QApplication::translate("RunStatePage", "\345\275\223\345\211\215\344\270\272\346\211\213\345\212\250\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        labeldcdcDischarge->setText(QApplication::translate("RunStatePage", "DCDC\346\224\276\347\224\265\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        btnLeftTurn->setText(QApplication::translate("RunStatePage", "\345\267\246\350\275\254\345\220\221", 0, QApplication::UnicodeUTF8));
        btnDoubleFlick->setText(QApplication::translate("RunStatePage", "\345\217\214\351\227\252", 0, QApplication::UnicodeUTF8));
        btnRightTurn->setText(QApplication::translate("RunStatePage", "\345\217\263\350\275\254\345\220\221", 0, QApplication::UnicodeUTF8));
        labelDCDCState->setText(QString());
        labelM1Brake->setText(QString());
        labelNPBrake->setText(QString());
        labelTractionBrake2->setText(QString());
        labelTractionBrake3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RunStatePage: public Ui_RunStatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNSTATEPAGE_H

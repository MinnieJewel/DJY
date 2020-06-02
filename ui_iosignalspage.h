/********************************************************************************
** Form generated from reading UI file 'iosignalspage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOSIGNALSPAGE_H
#define UI_IOSIGNALSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IOSignalsPage
{
public:
    QLabel *labelNavigator;
    QPushButton *btnRIOM1;
    QPushButton *btnRIOM2;
    QPushButton *btnRIOM3;
    QPushButton *btnRIOM4;
    QPushButton *btnRIOM5;
    QPushButton *btnRIOM6;
    QPushButton *btnPrePage;
    QPushButton *btnNextPage;
    QPushButton *btnBack;
    QLabel *labelPage;
    QLabel *labelDI1;
    QLabel *labelDI2;
    QLabel *labelDO1;
    QLabel *labelDO2;
    QLabel *labelAX;
    QPushButton *btnERM1;
    QPushButton *btnERM2;
    QLabel *labelPWM;
    QLabel *labelERMDO;
    QLabel *labelAIO;
    QLabel *labelERMDI;

    void setupUi(QWidget *IOSignalsPage)
    {
        if (IOSignalsPage->objectName().isEmpty())
            IOSignalsPage->setObjectName(QString::fromUtf8("IOSignalsPage"));
        IOSignalsPage->resize(800, 520);
        IOSignalsPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:white;\n"
"border:1px solid black;\n"
"font:12px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background-color: rgb(51,153,255);\n"
"border:3px solid white;\n"
"color:white;\n"
"outline: none;\n"
"}\n"
"\n"
"QTableWidget\n"
"{\n"
"background-color: white;\n"
"font:12px \"SimHei\";\n"
"  color:black;\n"
"}\n"
"\n"
"QTableWidget::item\n"
"{\n"
"	border-right:1px solid black ;\n"
"}"));
        labelNavigator = new QLabel(IOSignalsPage);
        labelNavigator->setObjectName(QString::fromUtf8("labelNavigator"));
        labelNavigator->setGeometry(QRect(0, 460, 800, 60));
        labelNavigator->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);"));
        btnRIOM1 = new QPushButton(IOSignalsPage);
        btnRIOM1->setObjectName(QString::fromUtf8("btnRIOM1"));
        btnRIOM1->setGeometry(QRect(5, 468, 90, 45));
        btnRIOM1->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";\n"
"color:black;\n"
"background-color:white;\n"
""));
        btnRIOM2 = new QPushButton(IOSignalsPage);
        btnRIOM2->setObjectName(QString::fromUtf8("btnRIOM2"));
        btnRIOM2->setGeometry(QRect(105, 468, 90, 45));
        btnRIOM2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        btnRIOM3 = new QPushButton(IOSignalsPage);
        btnRIOM3->setObjectName(QString::fromUtf8("btnRIOM3"));
        btnRIOM3->setGeometry(QRect(205, 468, 90, 45));
        btnRIOM3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        btnRIOM4 = new QPushButton(IOSignalsPage);
        btnRIOM4->setObjectName(QString::fromUtf8("btnRIOM4"));
        btnRIOM4->setGeometry(QRect(305, 468, 90, 45));
        btnRIOM4->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        btnRIOM5 = new QPushButton(IOSignalsPage);
        btnRIOM5->setObjectName(QString::fromUtf8("btnRIOM5"));
        btnRIOM5->setGeometry(QRect(405, 468, 90, 45));
        btnRIOM5->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        btnRIOM6 = new QPushButton(IOSignalsPage);
        btnRIOM6->setObjectName(QString::fromUtf8("btnRIOM6"));
        btnRIOM6->setGeometry(QRect(505, 468, 90, 45));
        btnRIOM6->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        btnPrePage = new QPushButton(IOSignalsPage);
        btnPrePage->setObjectName(QString::fromUtf8("btnPrePage"));
        btnPrePage->setGeometry(QRect(400, 400, 98, 35));
        btnPrePage->setStyleSheet(QString::fromUtf8("font:20px \"SimHei\";\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"color:black;\n"
"border:0px;"));
        btnNextPage = new QPushButton(IOSignalsPage);
        btnNextPage->setObjectName(QString::fromUtf8("btnNextPage"));
        btnNextPage->setGeometry(QRect(570, 400, 98, 35));
        btnNextPage->setStyleSheet(QString::fromUtf8("font:20px \"SimHei\";\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"color:black;\n"
"border:0px;"));
        btnBack = new QPushButton(IOSignalsPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(680, 400, 98, 35));
        btnBack->setStyleSheet(QString::fromUtf8("font:20px \"SimHei\";\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"color:black;\n"
"border:0px;"));
        labelPage = new QLabel(IOSignalsPage);
        labelPage->setObjectName(QString::fromUtf8("labelPage"));
        labelPage->setGeometry(QRect(507, 400, 51, 31));
        labelPage->setStyleSheet(QString::fromUtf8("background-color: rgb(51,153,255);\n"
"font:20px \"SimHei\";\n"
"border:0px;"));
        labelPage->setAlignment(Qt::AlignCenter);
        labelDI1 = new QLabel(IOSignalsPage);
        labelDI1->setObjectName(QString::fromUtf8("labelDI1"));
        labelDI1->setGeometry(QRect(10, 10, 66, 17));
        labelDI1->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelDI1->setAlignment(Qt::AlignCenter);
        labelDI2 = new QLabel(IOSignalsPage);
        labelDI2->setObjectName(QString::fromUtf8("labelDI2"));
        labelDI2->setGeometry(QRect(80, 10, 66, 17));
        labelDI2->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelDI2->setAlignment(Qt::AlignCenter);
        labelDO1 = new QLabel(IOSignalsPage);
        labelDO1->setObjectName(QString::fromUtf8("labelDO1"));
        labelDO1->setGeometry(QRect(150, 10, 66, 17));
        labelDO1->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelDO1->setAlignment(Qt::AlignCenter);
        labelDO2 = new QLabel(IOSignalsPage);
        labelDO2->setObjectName(QString::fromUtf8("labelDO2"));
        labelDO2->setGeometry(QRect(220, 10, 66, 17));
        labelDO2->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelDO2->setAlignment(Qt::AlignCenter);
        labelAX = new QLabel(IOSignalsPage);
        labelAX->setObjectName(QString::fromUtf8("labelAX"));
        labelAX->setGeometry(QRect(290, 10, 66, 17));
        labelAX->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelAX->setAlignment(Qt::AlignCenter);
        btnERM1 = new QPushButton(IOSignalsPage);
        btnERM1->setObjectName(QString::fromUtf8("btnERM1"));
        btnERM1->setGeometry(QRect(605, 468, 90, 45));
        btnERM1->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        btnERM2 = new QPushButton(IOSignalsPage);
        btnERM2->setObjectName(QString::fromUtf8("btnERM2"));
        btnERM2->setGeometry(QRect(705, 468, 90, 45));
        btnERM2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"font: 20pt \"SimHei\";"));
        labelPWM = new QLabel(IOSignalsPage);
        labelPWM->setObjectName(QString::fromUtf8("labelPWM"));
        labelPWM->setGeometry(QRect(570, 10, 66, 17));
        labelPWM->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelPWM->setAlignment(Qt::AlignCenter);
        labelERMDO = new QLabel(IOSignalsPage);
        labelERMDO->setObjectName(QString::fromUtf8("labelERMDO"));
        labelERMDO->setGeometry(QRect(430, 10, 66, 17));
        labelERMDO->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelERMDO->setAlignment(Qt::AlignCenter);
        labelAIO = new QLabel(IOSignalsPage);
        labelAIO->setObjectName(QString::fromUtf8("labelAIO"));
        labelAIO->setGeometry(QRect(500, 10, 66, 17));
        labelAIO->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelAIO->setAlignment(Qt::AlignCenter);
        labelERMDI = new QLabel(IOSignalsPage);
        labelERMDI->setObjectName(QString::fromUtf8("labelERMDI"));
        labelERMDI->setGeometry(QRect(360, 10, 66, 17));
        labelERMDI->setStyleSheet(QString::fromUtf8("background-color:rgb(225,250,251);\n"
"color:black;"));
        labelERMDI->setAlignment(Qt::AlignCenter);

        retranslateUi(IOSignalsPage);

        QMetaObject::connectSlotsByName(IOSignalsPage);
    } // setupUi

    void retranslateUi(QWidget *IOSignalsPage)
    {
        IOSignalsPage->setWindowTitle(QApplication::translate("IOSignalsPage", "Form", 0, QApplication::UnicodeUTF8));
        labelNavigator->setText(QString());
        btnRIOM1->setText(QApplication::translate("IOSignalsPage", "RIOM1", 0, QApplication::UnicodeUTF8));
        btnRIOM2->setText(QApplication::translate("IOSignalsPage", "RIOM2", 0, QApplication::UnicodeUTF8));
        btnRIOM3->setText(QApplication::translate("IOSignalsPage", "RIOM3", 0, QApplication::UnicodeUTF8));
        btnRIOM4->setText(QApplication::translate("IOSignalsPage", "RIOM4", 0, QApplication::UnicodeUTF8));
        btnRIOM5->setText(QApplication::translate("IOSignalsPage", "RIOM5", 0, QApplication::UnicodeUTF8));
        btnRIOM6->setText(QApplication::translate("IOSignalsPage", "RIOM6", 0, QApplication::UnicodeUTF8));
        btnPrePage->setText(QApplication::translate("IOSignalsPage", "\344\270\212\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btnNextPage->setText(QApplication::translate("IOSignalsPage", "\344\270\213\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("IOSignalsPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        labelPage->setText(QApplication::translate("IOSignalsPage", "1/2", 0, QApplication::UnicodeUTF8));
        labelDI1->setText(QApplication::translate("IOSignalsPage", "DI1", 0, QApplication::UnicodeUTF8));
        labelDI2->setText(QApplication::translate("IOSignalsPage", "DI2", 0, QApplication::UnicodeUTF8));
        labelDO1->setText(QApplication::translate("IOSignalsPage", "DO1", 0, QApplication::UnicodeUTF8));
        labelDO2->setText(QApplication::translate("IOSignalsPage", "DO2", 0, QApplication::UnicodeUTF8));
        labelAX->setText(QApplication::translate("IOSignalsPage", "AX", 0, QApplication::UnicodeUTF8));
        btnERM1->setText(QApplication::translate("IOSignalsPage", "ERM1", 0, QApplication::UnicodeUTF8));
        btnERM2->setText(QApplication::translate("IOSignalsPage", "ERM2", 0, QApplication::UnicodeUTF8));
        labelPWM->setText(QApplication::translate("IOSignalsPage", "PWM", 0, QApplication::UnicodeUTF8));
        labelERMDO->setText(QApplication::translate("IOSignalsPage", "DO", 0, QApplication::UnicodeUTF8));
        labelAIO->setText(QApplication::translate("IOSignalsPage", "AIO", 0, QApplication::UnicodeUTF8));
        labelERMDI->setText(QApplication::translate("IOSignalsPage", "DI", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IOSignalsPage: public Ui_IOSignalsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOSIGNALSPAGE_H

/********************************************************************************
** Form generated from reading UI file 'settimepage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIMEPAGE_H
#define UI_SETTIMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetTimePage
{
public:
    QPushButton *btnYear;
    QPushButton *btnMonth;
    QPushButton *btnDay;
    QPushButton *btnHour;
    QPushButton *btnMinute;
    QPushButton *btnSecond;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *labelInfo;

    void setupUi(QWidget *SetTimePage)
    {
        if (SetTimePage->objectName().isEmpty())
            SetTimePage->setObjectName(QString::fromUtf8("SetTimePage"));
        SetTimePage->resize(800, 450);
        SetTimePage->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"font:25px, \"SimHei\";\n"
"}\n"
"\n"
"/*QPushButton:disabled\n"
"{\n"
"outline:none;\n"
"border:1px solid white;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(180, 180, 180);\n"
"}*/"));
        btnYear = new QPushButton(SetTimePage);
        btnYear->setObjectName(QString::fromUtf8("btnYear"));
        btnYear->setGeometry(QRect(50, 110, 110, 60));
        btnYear->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnMonth = new QPushButton(SetTimePage);
        btnMonth->setObjectName(QString::fromUtf8("btnMonth"));
        btnMonth->setGeometry(QRect(200, 110, 110, 60));
        btnMonth->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnDay = new QPushButton(SetTimePage);
        btnDay->setObjectName(QString::fromUtf8("btnDay"));
        btnDay->setGeometry(QRect(350, 110, 110, 60));
        btnDay->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnHour = new QPushButton(SetTimePage);
        btnHour->setObjectName(QString::fromUtf8("btnHour"));
        btnHour->setGeometry(QRect(50, 240, 110, 60));
        btnHour->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnMinute = new QPushButton(SetTimePage);
        btnMinute->setObjectName(QString::fromUtf8("btnMinute"));
        btnMinute->setGeometry(QRect(200, 240, 110, 60));
        btnMinute->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnSecond = new QPushButton(SetTimePage);
        btnSecond->setObjectName(QString::fromUtf8("btnSecond"));
        btnSecond->setGeometry(QRect(350, 240, 110, 60));
        btnSecond->setStyleSheet(QString::fromUtf8("border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        label = new QLabel(SetTimePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 70, 30, 30));
        label_2 = new QLabel(SetTimePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 70, 30, 30));
        label_3 = new QLabel(SetTimePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 70, 30, 30));
        label_4 = new QLabel(SetTimePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 200, 30, 30));
        label_5 = new QLabel(SetTimePage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 200, 30, 30));
        label_6 = new QLabel(SetTimePage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 200, 30, 30));
        labelInfo = new QLabel(SetTimePage);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(70, 350, 391, 22));
        labelInfo->setStyleSheet(QString::fromUtf8("color:red;\n"
"font:20px;"));

        retranslateUi(SetTimePage);

        QMetaObject::connectSlotsByName(SetTimePage);
    } // setupUi

    void retranslateUi(QWidget *SetTimePage)
    {
        SetTimePage->setWindowTitle(QApplication::translate("SetTimePage", "Form", 0, QApplication::UnicodeUTF8));
        btnYear->setText(QString());
        btnMonth->setText(QString());
        btnDay->setText(QString());
        btnHour->setText(QString());
        btnMinute->setText(QString());
        btnSecond->setText(QString());
        label->setText(QApplication::translate("SetTimePage", "\345\271\264", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SetTimePage", "\346\227\245", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SetTimePage", "\346\234\210", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SetTimePage", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SetTimePage", "\346\227\266", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SetTimePage", "\345\210\206", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetTimePage: public Ui_SetTimePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIMEPAGE_H

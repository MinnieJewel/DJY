/********************************************************************************
** Form generated from reading UI file 'eventpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTPAGE_H
#define UI_EVENTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventPage
{
public:
    QPushButton *btnCurrentPage;
    QPushButton *btnHistoryPage;
    QPushButton *btnLevel12;
    QPushButton *btnLevel3;
    QPushButton *btnTotal;
    QPushButton *btnPre;
    QPushButton *btnNext;
    QLabel *labelPage;
    QLabel *labelDetail;
    QLabel *label_3;

    void setupUi(QWidget *EventPage)
    {
        if (EventPage->objectName().isEmpty())
            EventPage->setObjectName(QString::fromUtf8("EventPage"));
        EventPage->resize(800, 450);
        EventPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:1px solid black;\n"
"font:12px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}\n"
""));
        btnCurrentPage = new QPushButton(EventPage);
        btnCurrentPage->setObjectName(QString::fromUtf8("btnCurrentPage"));
        btnCurrentPage->setGeometry(QRect(705, 10, 90, 40));
        btnCurrentPage->setStyleSheet(QString::fromUtf8(""));
        btnHistoryPage = new QPushButton(EventPage);
        btnHistoryPage->setObjectName(QString::fromUtf8("btnHistoryPage"));
        btnHistoryPage->setGeometry(QRect(705, 60, 90, 40));
        btnLevel12 = new QPushButton(EventPage);
        btnLevel12->setObjectName(QString::fromUtf8("btnLevel12"));
        btnLevel12->setGeometry(QRect(705, 110, 90, 40));
        btnLevel3 = new QPushButton(EventPage);
        btnLevel3->setObjectName(QString::fromUtf8("btnLevel3"));
        btnLevel3->setGeometry(QRect(705, 160, 90, 40));
        btnTotal = new QPushButton(EventPage);
        btnTotal->setObjectName(QString::fromUtf8("btnTotal"));
        btnTotal->setGeometry(QRect(705, 210, 90, 40));
        btnPre = new QPushButton(EventPage);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setGeometry(QRect(705, 260, 40, 40));
        btnNext = new QPushButton(EventPage);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(755, 260, 40, 40));
        labelPage = new QLabel(EventPage);
        labelPage->setObjectName(QString::fromUtf8("labelPage"));
        labelPage->setGeometry(QRect(715, 300, 70, 20));
        labelPage->setStyleSheet(QString::fromUtf8("border:0px;\n"
"font:15px;"));
        labelPage->setAlignment(Qt::AlignCenter);
        labelDetail = new QLabel(EventPage);
        labelDetail->setObjectName(QString::fromUtf8("labelDetail"));
        labelDetail->setGeometry(QRect(15, 330, 771, 111));
        labelDetail->setStyleSheet(QString::fromUtf8("border:5px solid white;\n"
"border-radius:10px;\n"
"font:20px;"));
        label_3 = new QLabel(EventPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(25, 310, 101, 41));
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"border:0px;\n"
"font:25px;"));

        retranslateUi(EventPage);

        QMetaObject::connectSlotsByName(EventPage);
    } // setupUi

    void retranslateUi(QWidget *EventPage)
    {
        EventPage->setWindowTitle(QApplication::translate("EventPage", "Form", 0, QApplication::UnicodeUTF8));
        btnCurrentPage->setText(QApplication::translate("EventPage", "\345\275\223\345\211\215\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnHistoryPage->setText(QApplication::translate("EventPage", "\345\216\206\345\217\262\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        btnLevel12->setText(QApplication::translate("EventPage", "1\357\274\2172\347\272\247", 0, QApplication::UnicodeUTF8));
        btnLevel3->setText(QApplication::translate("EventPage", "3\347\272\247", 0, QApplication::UnicodeUTF8));
        btnTotal->setText(QApplication::translate("EventPage", "\345\205\250\351\203\250", 0, QApplication::UnicodeUTF8));
        btnPre->setText(QApplication::translate("EventPage", "\342\227\200", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("EventPage", "\342\226\266", 0, QApplication::UnicodeUTF8));
        labelPage->setText(QApplication::translate("EventPage", "2/100", 0, QApplication::UnicodeUTF8));
        labelDetail->setText(QString());
        label_3->setText(QApplication::translate("EventPage", "\346\223\215\344\275\234\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventPage: public Ui_EventPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTPAGE_H

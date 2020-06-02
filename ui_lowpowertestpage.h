/********************************************************************************
** Form generated from reading UI file 'lowpowertestpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOWPOWERTESTPAGE_H
#define UI_LOWPOWERTESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LowPowerTestPage
{
public:
    QPushButton *btnBack;
    QPushButton *btnTest1;
    QPushButton *btnTest2;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *labelT1info;
    QLabel *labelT2info;
    QLabel *label_4;

    void setupUi(QWidget *LowPowerTestPage)
    {
        if (LowPowerTestPage->objectName().isEmpty())
            LowPowerTestPage->setObjectName(QString::fromUtf8("LowPowerTestPage"));
        LowPowerTestPage->resize(800, 350);
        QFont font;
        font.setPointSize(12);
        LowPowerTestPage->setFont(font);
        LowPowerTestPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px;\n"
"font:15px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"	border-image: url(:/image/buttonUP.jpg);\n"
"font:20px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;\n"
"}"));
        btnBack = new QPushButton(LowPowerTestPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(660, 290, 100, 40));
        btnTest1 = new QPushButton(LowPowerTestPage);
        btnTest1->setObjectName(QString::fromUtf8("btnTest1"));
        btnTest1->setGeometry(QRect(120, 5, 65, 65));
        btnTest1->setStyleSheet(QString::fromUtf8("font:20px, \"SimHei\";"));
        btnTest2 = new QPushButton(LowPowerTestPage);
        btnTest2->setObjectName(QString::fromUtf8("btnTest2"));
        btnTest2->setGeometry(QRect(610, 5, 65, 65));
        btnTest2->setStyleSheet(QString::fromUtf8("font: 20px;"));
        tableWidget = new QTableWidget(LowPowerTestPage);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QBrush brush(QColor(255, 255, 255, 2));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem->setBackground(brush);
        __qtablewidgetitem->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 2, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(7, 210, 780, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        tableWidget->setFont(font1);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"outline:none;"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(2);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(260);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(35);
        tableWidget->verticalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(30);
        tableWidget->verticalHeader()->setStretchLastSection(true);
        label = new QLabel(LowPowerTestPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(7, 180, 780, 31));
        label->setStyleSheet(QString::fromUtf8("font:20px;"));
        label->setAlignment(Qt::AlignCenter);
        labelT1info = new QLabel(LowPowerTestPage);
        labelT1info->setObjectName(QString::fromUtf8("labelT1info"));
        labelT1info->setGeometry(QRect(190, 20, 121, 31));
        labelT1info->setStyleSheet(QString::fromUtf8("font:16px;\n"
"color:red;\n"
""));
        labelT1info->setAlignment(Qt::AlignCenter);
        labelT2info = new QLabel(LowPowerTestPage);
        labelT2info->setObjectName(QString::fromUtf8("labelT2info"));
        labelT2info->setGeometry(QRect(680, 20, 111, 31));
        labelT2info->setStyleSheet(QString::fromUtf8("font:16px;\n"
"color:red;\n"
""));
        labelT2info->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(LowPowerTestPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 280, 381, 51));
        label_4->setStyleSheet(QString::fromUtf8("font:16px;\n"
"color:red;\n"
""));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(LowPowerTestPage);

        QMetaObject::connectSlotsByName(LowPowerTestPage);
    } // setupUi

    void retranslateUi(QWidget *LowPowerTestPage)
    {
        LowPowerTestPage->setWindowTitle(QApplication::translate("LowPowerTestPage", "Form", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QApplication::translate("LowPowerTestPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btnTest1->setText(QApplication::translate("LowPowerTestPage", "\347\211\265\345\274\2251\n"
"\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnTest2->setText(QApplication::translate("LowPowerTestPage", "\347\211\265\345\274\2252\n"
"\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableWidget->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("LowPowerTestPage", "\351\200\237\345\272\246\357\274\2350", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->item(0, 1);
        ___qtablewidgetitem1->setText(QApplication::translate("LowPowerTestPage", "\347\211\265\345\274\225\346\211\213\346\237\204\345\234\250\346\203\260\350\241\214\344\275\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 2);
        ___qtablewidgetitem2->setText(QApplication::translate("LowPowerTestPage", "\351\235\236\347\264\247\346\200\245\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(1, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("LowPowerTestPage", "\345\217\270\346\234\272\345\256\244\346\277\200\346\264\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(1, 1);
        ___qtablewidgetitem4->setText(QApplication::translate("LowPowerTestPage", "\346\234\211\351\253\230\345\216\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(1, 2);
        ___qtablewidgetitem5->setText(QApplication::translate("LowPowerTestPage", "\344\270\273\346\226\255\351\227\255\345\220\210", 0, QApplication::UnicodeUTF8));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("LowPowerTestPage", "\346\265\213\350\257\225\345\274\200\345\247\213\346\235\241\344\273\266", 0, QApplication::UnicodeUTF8));
        labelT1info->setText(QApplication::translate("LowPowerTestPage", "M1\346\211\247\350\241\214\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        labelT2info->setText(QApplication::translate("LowPowerTestPage", "M2\346\211\247\350\241\214\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LowPowerTestPage", "1\343\200\201\346\265\213\350\257\225\350\277\207\347\250\213\344\270\255\345\246\202\346\236\234\346\265\213\350\257\225\346\235\241\344\273\266\344\270\215\346\273\241\350\266\263\345\260\206\350\207\252\345\212\250\345\201\234\346\255\242\n"
"2\343\200\201\350\247\246\345\217\221\346\265\213\350\257\22510\345\210\206\351\222\237\345\220\216\346\226\271\345\217\257\345\206\215\346\254\241\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LowPowerTestPage: public Ui_LowPowerTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOWPOWERTESTPAGE_H

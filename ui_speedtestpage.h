/********************************************************************************
** Form generated from reading UI file 'speedtestpage.ui'
**
** Created: Fri May 15 15:16:54 2020
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDTESTPAGE_H
#define UI_SPEEDTESTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpeedTestPage
{
public:
    QLabel *label1;
    QLabel *labelSpeed;
    QLabel *labelLevel;
    QLabel *label2;
    QLabel *labelTestSpeed;
    QLabel *labelTestLevel;
    QLabel *label4;
    QLabel *label3;
    QLabel *label6;
    QLabel *labelOriSpeed;
    QLabel *label5;
    QLabel *labelEndSpeed;
    QLabel *label7;
    QLabel *labelTestDistance;
    QPushButton *btnTest1;
    QPushButton *btnTest2;
    QPushButton *btnTestMinus;
    QLabel *labelInfo;
    QPushButton *btnBack;
    QLabel *label;

    void setupUi(QWidget *SpeedTestPage)
    {
        if (SpeedTestPage->objectName().isEmpty())
            SpeedTestPage->setObjectName(QString::fromUtf8("SpeedTestPage"));
        SpeedTestPage->resize(800, 450);
        SpeedTestPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(51,153,255);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"background-color:rgb(51,153,255);\n"
"border:0px solid white;\n"
"font:20px \"SimHei\";\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"outline:none;\n"
"font:25px, \"SimHei\";\n"
"}"));
        label1 = new QLabel(SpeedTestPage);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(90, 20, 90, 30));
        labelSpeed = new QLabel(SpeedTestPage);
        labelSpeed->setObjectName(QString::fromUtf8("labelSpeed"));
        labelSpeed->setGeometry(QRect(200, 20, 150, 30));
        labelLevel = new QLabel(SpeedTestPage);
        labelLevel->setObjectName(QString::fromUtf8("labelLevel"));
        labelLevel->setGeometry(QRect(510, 20, 150, 30));
        label2 = new QLabel(SpeedTestPage);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(400, 20, 90, 30));
        labelTestSpeed = new QLabel(SpeedTestPage);
        labelTestSpeed->setObjectName(QString::fromUtf8("labelTestSpeed"));
        labelTestSpeed->setGeometry(QRect(200, 60, 150, 30));
        labelTestLevel = new QLabel(SpeedTestPage);
        labelTestLevel->setObjectName(QString::fromUtf8("labelTestLevel"));
        labelTestLevel->setGeometry(QRect(510, 60, 150, 30));
        label4 = new QLabel(SpeedTestPage);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(400, 60, 90, 30));
        label3 = new QLabel(SpeedTestPage);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(90, 60, 90, 30));
        label6 = new QLabel(SpeedTestPage);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(400, 100, 90, 30));
        labelOriSpeed = new QLabel(SpeedTestPage);
        labelOriSpeed->setObjectName(QString::fromUtf8("labelOriSpeed"));
        labelOriSpeed->setGeometry(QRect(200, 100, 150, 30));
        label5 = new QLabel(SpeedTestPage);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(90, 100, 90, 30));
        labelEndSpeed = new QLabel(SpeedTestPage);
        labelEndSpeed->setObjectName(QString::fromUtf8("labelEndSpeed"));
        labelEndSpeed->setGeometry(QRect(510, 100, 150, 30));
        label7 = new QLabel(SpeedTestPage);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(90, 140, 90, 30));
        labelTestDistance = new QLabel(SpeedTestPage);
        labelTestDistance->setObjectName(QString::fromUtf8("labelTestDistance"));
        labelTestDistance->setGeometry(QRect(240, 140, 261, 30));
        btnTest1 = new QPushButton(SpeedTestPage);
        btnTest1->setObjectName(QString::fromUtf8("btnTest1"));
        btnTest1->setGeometry(QRect(80, 390, 150, 40));
        btnTest1->setStyleSheet(QString::fromUtf8("outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnTest2 = new QPushButton(SpeedTestPage);
        btnTest2->setObjectName(QString::fromUtf8("btnTest2"));
        btnTest2->setGeometry(QRect(270, 390, 150, 40));
        btnTest2->setStyleSheet(QString::fromUtf8("outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        btnTestMinus = new QPushButton(SpeedTestPage);
        btnTestMinus->setObjectName(QString::fromUtf8("btnTestMinus"));
        btnTestMinus->setGeometry(QRect(460, 390, 150, 40));
        btnTestMinus->setStyleSheet(QString::fromUtf8("outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        labelInfo = new QLabel(SpeedTestPage);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(250, 190, 251, 31));
        labelInfo->setStyleSheet(QString::fromUtf8("color:red;"));
        btnBack = new QPushButton(SpeedTestPage);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(670, 390, 100, 40));
        btnBack->setStyleSheet(QString::fromUtf8("outline:none;\n"
"border-image: url(:/image/buttonUP.jpg);\n"
"font:25px, \"SimHei\";\n"
"color:rgb(0, 32, 96);\n"
"border-radius:2px;"));
        label = new QLabel(SpeedTestPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 260, 511, 101));
        label->setStyleSheet(QString::fromUtf8("font:16px;\n"
"color:red;"));

        retranslateUi(SpeedTestPage);

        QMetaObject::connectSlotsByName(SpeedTestPage);
    } // setupUi

    void retranslateUi(QWidget *SpeedTestPage)
    {
        SpeedTestPage->setWindowTitle(QApplication::translate("SpeedTestPage", "Form", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("SpeedTestPage", "\345\210\227\350\275\246\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        labelSpeed->setText(QString());
        labelLevel->setText(QString());
        label2->setText(QApplication::translate("SpeedTestPage", "\345\210\227\350\275\246\347\272\247\344\275\215", 0, QApplication::UnicodeUTF8));
        labelTestSpeed->setText(QString());
        labelTestLevel->setText(QString());
        label4->setText(QApplication::translate("SpeedTestPage", "\346\265\213\350\257\225\347\272\247\344\275\215", 0, QApplication::UnicodeUTF8));
        label3->setText(QApplication::translate("SpeedTestPage", "\346\265\213\350\257\225\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        label6->setText(QApplication::translate("SpeedTestPage", "\346\234\253\347\272\247\344\275\215", 0, QApplication::UnicodeUTF8));
        labelOriSpeed->setText(QString());
        label5->setText(QApplication::translate("SpeedTestPage", "\345\210\235\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        labelEndSpeed->setText(QString());
        label7->setText(QApplication::translate("SpeedTestPage", "\346\265\213\350\257\225\350\267\235\347\246\273", 0, QApplication::UnicodeUTF8));
        labelTestDistance->setText(QString());
        btnTest1->setText(QApplication::translate("SpeedTestPage", "\345\212\240\351\200\237\345\272\2461\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnTest2->setText(QApplication::translate("SpeedTestPage", "\345\212\240\351\200\237\345\272\2462\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        btnTestMinus->setText(QApplication::translate("SpeedTestPage", "\345\207\217\351\200\237\345\272\246\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QString());
        btnBack->setText(QApplication::translate("SpeedTestPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpeedTestPage", "1.\350\257\267\345\234\250\345\210\227\350\275\246\351\200\237\345\272\246\344\270\2720\346\227\266\350\256\276\345\256\232\345\212\240\351\200\237\345\272\246\346\265\213\350\257\225\346\250\241\345\274\217\n"
"2.\345\212\240\351\200\237\345\272\246\346\265\213\350\257\225\350\256\276\345\256\232\345\220\216\357\274\214\347\211\265\345\274\225\346\214\207\344\273\244\346\234\211\346\225\210\346\227\266\345\274\200\345\247\213\350\256\241\347\256\227\n"
"3.\345\212\240\351\200\237\345\272\246\346\265\213\350\257\225\346\227\266\357\274\214\350\257\267\345\234\250\345\210\227\350\275\246\351\200\237\345\272\246\345\260\217\344\272\21610kmph\345\206\205\345\260\206\346\211\213\346\237\204\347\275\256\344\272\216\346\211\200\351\234\200\347\272\247\344\275\215\n"
"4.\350\266\205\350\277\20710kmph\345\220\216\347\272\247\344\275\215\345\217\230\345\214\226\346\210\226\350\276\276\345\210\260\347\233\256\346\240\207\351\200\237\345\272\246\357\274\214\345\212\240\351\200\237\345\272\246\346\265\213\350\257\225\350\207"
                        "\252\345\212\250\345\256\214\346\210\220\n"
"5.\345\207\217\351\200\237\345\272\246\346\265\213\350\257\225\350\256\276\345\256\232\345\220\216\357\274\214\345\210\266\345\212\250\346\214\207\344\273\244\346\234\211\346\225\210\346\227\266\346\265\213\350\257\225\345\274\200\345\247\213\357\274\214\345\210\227\350\275\246\345\201\234\346\255\242\346\227\266\346\265\213\350\257\225\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpeedTestPage: public Ui_SpeedTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDTESTPAGE_H

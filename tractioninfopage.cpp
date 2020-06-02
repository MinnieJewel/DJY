#include "tractioninfopage.h"
#include "ui_tractioninfopage.h"
#include <QTableWidget>
#include <QLabel>

#define _LOCAL 7, 20, 780, 350
#define _ROW 13
#define _COLUMN 3
//#define _OPEN ("outline:none; font: \"SimHei\";color: rgb(0, 32, 96);border-image: url(:/image/open.png);border-radius:2px;")
//#define _CLOSED ("outline:none; font: \"SimHei\";color: rgb(0, 32, 96);border-image: url(:/image/defect.png);border-radius:2px;")

TractionInfoPage::TractionInfoPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::TractionInfoPage)
{
    ui->setupUi(this);
    tractionTable = new QTableWidget(_ROW, _COLUMN, this);
    initialTableView(tractionTable);
    fillTableName(tractionTable);
}

TractionInfoPage::~TractionInfoPage()
{
    delete ui;
}

void TractionInfoPage::initialTableView(QTableWidget *table)
{
    if (NULL == table)
    {
        return;
    }

    table->setGeometry(_LOCAL);

    table->setStyleSheet(_TABLE);
    table->horizontalHeader()->setVisible(false);
    table->horizontalHeader()->setStretchLastSection(true);
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->verticalHeader()->setVisible(false);
    table->verticalHeader()->setStretchLastSection(true);
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    //table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setFocusPolicy(Qt::NoFocus);
    table->setColumnWidth(0, 200);
    table->setColumnWidth(1, 290);
    //table->setColumnWidth(2, 190);
    for (int row = 0; row < table->rowCount(); row ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            QTableWidgetItem *tableItem = new QTableWidgetItem("");
            //tableItem->setFlags(tableItem->flags() & ~Qt::ItemIsEnabled);
            tableItem->setFlags(Qt::ItemIsEditable);
            tableItem->setTextAlignment(Qt::AlignCenter);
            //tableItem->setBackgroundColor(Qt::white);
            //tableItem->setForeground(Qt::black);
            table->setItem(row, column, tableItem);
        }
    }
}

void TractionInfoPage::fillTableName(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }
    QList<QString> title;
    title << " " << "M1" << "M2" ;
    QList<QString> names;
    names << "断开高断命令" << "线路接触器闭合" << "牵引逆变器1正常" << "牵引逆变器2正常" << "电制动1正常" << "电制动2正常"
            << "显示线电压" << "逆变器频率" << "牵引限流" <<"制动限流" << "滑行" << "空转";

    //fill the list to table
    if (_COLUMN == table->columnCount() && _ROW == table->rowCount())
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            if (NULL == title[column])
            {
                logger()->error("title is null;");
                return;
            }
            table->item(0, column)->setText(title[column]);
            table->item(0, column)->setBackgroundColor(QColor(225,250,251));
            if (0 == column)
            {
                for (int row = 1; row < table->rowCount(); row ++)
                {
                    if (NULL == names[row-1])
                        return;
                    table->item(row, column)->setText(names[row-1]);
                    table->item(row, column)->setBackgroundColor(QColor(225,250,251));
                }
            }
        }
    }
}

void TractionInfoPage::updatePage()
{
    QList<QString> tractionString;
    tractionString << QString::number(this->database->CTTR1_CMainCBOff_B1) << QString::number(this->database->CTTR2_CMainCBOff_B1)
            << QString::number(this->database->TR1CT_ILSwClose_B1) << QString::number(this->database->TR2CT_ILSwClose_B1)
            << QString::number(this->database->TR1CT_ITraction1Ok_B1) << QString::number(this->database->TR2CT_ITraction1Ok_B1)
            << QString::number(this->database->TR1CT_ITraction2Ok_B1) << QString::number(this->database->TR2CT_ITraction2Ok_B1)
            << QString::number(this->database->TR1CT_IElecBrk1Ok_B1) << QString::number(this->database->TR2CT_IElecBrk1Ok_B1)
            << QString::number(this->database->TR1CT_IElecBrk2Ok_B1) << QString::number(this->database->TR2CT_IElecBrk2Ok_B1)
            << QString::number(this->database->TR1CT_IDispLineVoltage_U16) << QString::number(this->database->TR2CT_IDispLineVoltage_U16)
            << QString::number(this->database->TR1CT_IInvFreq_I16) << QString::number(this->database->TR2CT_IInvFreq_I16)
            << QString::number(this->database->TR1CT_ITractionCurLimOn_B1) << QString::number(this->database->TR2CT_ITractionCurLimOn_B1)
            << QString::number(this->database->TR1CT_IBrakeCurLimOn_B1) << QString::number(this->database->TR2CT_IBrakeCurLimOn_B1)
            << QString::number(this->database->TR1CT_ISlipDetect_B1) << QString::number(this->database->TR2CT_ISlipDetect_B1)
            << QString::number(this->database->TR1CT_ISlideDetect_B1) << QString::number(this->database->TR2CT_ISlideDetect_B1) ;

    for (int row = 1; row < _ROW; row++)
    {
        for (int column = 1; column < _COLUMN; column++)
        {
            tractionTable->item(row, column)->setText(tractionString[(row-1)*2+column-1]);
        }
    }
//    openOroff(1,1,this->database->CTTR1_CMainCBOff_B1);
//    openOroff(1,2,this->database->CTTR2_CMainCBOff_B1);
//    openOroff(2,1,!this->database->TR1CT_ILSwClose_B1);
//    openOroff(2,2,!this->database->TR2CT_ILSwClose_B1);
//    normalOrNot(3,1,this->database->TR1CT_ITraction1Ok_B1);
//    normalOrNot(3,2,this->database->TR2CT_ITraction1Ok_B1);
//    normalOrNot(4,1,this->database->TR1CT_ITraction2Ok_B1);
//    normalOrNot(4,2,this->database->TR2CT_ITraction2Ok_B1);
//    normalOrNot(5,1,this->database->TR1CT_IElecBrk1Ok_B1);
//    normalOrNot(5,2,this->database->TR2CT_IElecBrk1Ok_B1);
//    normalOrNot(6,1,this->database->TR1CT_IElecBrk2Ok_B1);
//    normalOrNot(6,2,this->database->TR2CT_IElecBrk2Ok_B1);
//    tractionTable->item(7,1)->setText(QString::number(this->database->TR1CT_IDispLineVoltage_U16));
//    tractionTable->item(7,2)->setText(QString::number(this->database->TR2CT_IDispLineVoltage_U16));
//    tractionTable->item(8,1)->setText(QString::number(this->database->TR1CT_IInvFreq_I16));
//    tractionTable->item(8,2)->setText(QString::number(this->database->TR2CT_IInvFreq_I16));
//    curLimOn(9,1,this->database->TR1CT_ITractionCurLimOn_B1);
//    curLimOn(9,2,this->database->TR2CT_ITractionCurLimOn_B1);
//    curLimOn(10,1,this->database->TR1CT_IBrakeCurLimOn_B1);
//    curLimOn(10,2,this->database->TR2CT_IBrakeCurLimOn_B1);
//    slip(11,1,this->database->TR1CT_ISlipDetect_B1);
//    slip(11,2,this->database->TR2CT_ISlipDetect_B1);
//    slide(12,1,this->database->TR1CT_ISlideDetect_B1);
//    slide(12,2,this->database->TR2CT_ISlideDetect_B1);

//    QList<QString> tbcuData;

//    tbcuData << QString::number(this->database->CTTR1_CMainCBOff_B1) << QString::number(this->database->CTTR2_CMainCBOff_B1)
//        << QString::number(this->database->TR1CT_ILSwClose_B1) << QString::number(this->database->TR2CT_ILSwClose_B1)
//        << QString::number(this->database->TR1CT_ITraction1Ok_B1) << QString::number(this->database->TR2CT_ITraction1Ok_B1)
//        << QString::number(this->database->TR1CT_ITraction2Ok_B1) << QString::number(this->database->TR2CT_ITraction2Ok_B1)
//        << QString::number(this->database->TR1CT_IElecBrk1Ok_B1) << QString::number(this->database->TR2CT_IElecBrk1Ok_B1)
//        << QString::number(this->database->TR1CT_IElecBrk2Ok_B1) << QString::number(this->database->TR2CT_IElecBrk2Ok_B1);

//    for (int row = 1; row < tractionTable->rowCount(); row ++)
//    {
//        for (int column = 1; column < tractionTable->columnCount(); column++)
//        {
//            tractionTable->item(row, column)->setText(tbcuData.at((row-1)*2 + column-1));
//        }
//    }
}

//void TractionInfoPage::openOroff(int row, int column, bool cut)
//{
////    QLabel *label = new QLabel("");
////    label->setAlignment(Qt::AlignHCenter);
////    if(cut)
////    {
////        label->setPixmap(QPixmap(":image/open.png").scaled(25,25));
////    }
////    else
////    {
////        label->setPixmap(QPixmap(":image/closed.png").scaled(25,25));
////    }
////    tractionTable->setCellWidget(row, column,label);
//    if (cut)
//    {
//        tractionTable->item(row, column )->setText("断开");
//    }
//    else
//    {
//        tractionTable->item(row, column)->setText("闭合");
//    }
//}

//void TractionInfoPage::normalOrNot(int row, int column, bool normal)
//{
//    if (normal)
//    {
//        //tractionTable->item(row, column)->setBackgroundColor(Qt::green);
//        tractionTable->item(row, column)->setText("正常");
//    }
//    else
//    {
//        //tractionTable->item(row, column)->setBackgroundColor(Qt::gray);
//        tractionTable->item(row, column)->setText("其他");
//    }
//}

//void TractionInfoPage::curLimOn(int row, int column, bool curLim)
//{
//    if (curLim)
//        tractionTable->item(row, column)->setText("超过限流值");
//    else
//        tractionTable->item(row, column)->setText("未超过限流值");
//}

//void TractionInfoPage::slip(int row, int column, bool slip)
//{
//    if (slip)
//    {
//        tractionTable->item(row, column)->setText("滑行");
//    }
//    else
//    {
//        tractionTable->item(row, column)->setText("未滑行");
//    }
//}

//void TractionInfoPage::slide(int row, int column, bool slip)
//{
//    if (slip)
//    {
//        tractionTable->item(row, column)->setText("空转");
//    }
//    else
//    {
//        tractionTable->item(row, column)->setText("未空转");
//    }
//}

void TractionInfoPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

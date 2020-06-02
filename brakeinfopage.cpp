#include "brakeinfopage.h"
#include "ui_brakeinfopage.h"
#include <QTableWidget>

#define _LOCAL 7, 50, 780, 230
#define _ROW 5
#define _COLUMN 4

BrakeInfoPage::BrakeInfoPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::BrakeInfoPage)
{
    ui->setupUi(this);
    this->brakeTable = new QTableWidget(_ROW, _COLUMN, this);
    this->initialTableView(this->brakeTable);
    this->fillTableName(this->brakeTable);
}

BrakeInfoPage::~BrakeInfoPage()
{
    delete ui;
}

void BrakeInfoPage::initialTableView(QTableWidget *table)
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
    table->setColumnWidth(1, 190);
    table->setColumnWidth(2, 200);
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

//QString BrakeInfoPage::brakeMode(int mode)
//{
//    if (1 == mode)
//    {
//        return "混合制动";
//    }
//    else if(2 == mode)
//    {
//       return "液压制动";
//    }
//    return "其他";
//}

void BrakeInfoPage::fillTableName(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }

    QList<QString> names;
    names << "制动模式" << "磁轨制动施加" << "制动钳压力" << "输出电流大故障" << "制动施加信号故障"
          << "安全制动时压力低" << "紧急制动时压力低" << "压力超范围" << "隔离故障" << "速度故障";

    //fill the list to table
    if (_COLUMN == table->columnCount() && _ROW == table->rowCount())
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            for (int row = 0; row < table->rowCount(); row ++)
            {
                if (0 == column % 2)
                {
                    table->item(row, column)->setText(names[column/2 * _ROW + row]);
                    table->item(row, column)->setBackgroundColor(QColor(225,250,251));
                }
            }
        }
    }
}

void BrakeInfoPage::updatePage()
{
    QList<QString> brakeInfo;
    brakeInfo << QString::number(this->database->CTHM_BrakeMode_U8) << QString::number(this->database->CTHM_ISafeBrkPressureKO_B1)
            << QString::number(this->database->CTHM_TrackBrakeOn_B1) << QString::number(this->database->CTHM_IEmerBrkPressureKO_B1)
            << QString::number(this->database->CTHM_IBrkCalliperPressure_U8) << QString::number(this->database->CTHM_ICalliperOverPressure_B1)
            << QString::number(this->database->CTHM_IMJFSignalKO_B1) << QString::number(this->database->CTHM_IIsolationFailure_B1)
            << QString::number(this->database->CTHM_IBASignalKO_B1) << QString::number(this->database->CTHM_ISpeedMajorFailure_B1);

    for (int row = 0; row < _ROW; row++)
    {
        for (int column = 0; column < _COLUMN; column++)
        {
            if (1 == column%2)
            {
                brakeTable->item(row, column)->setText(brakeInfo[row*2+column/2]);
            }
        }
    }
}

//QString BrakeInfoPage::faultOrNot(bool fault)
//{
//    if (fault)
//    {
//        return "故障";
//    }
//    else
//    {
//        return "其他";
//    }
//}

void BrakeInfoPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

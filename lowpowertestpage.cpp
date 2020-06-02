#include "lowpowertestpage.h"
#include "ui_lowpowertestpage.h"
#include <QTableWidget>
#include "utilfunction.h"

#define _LOCAL 7, 77, 780, 100
#define _ROW 4
#define _COLUMN 3

LowPowerTestPage::LowPowerTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::LowPowerTestPage)
{
    ui->setupUi(this);
    this->lowPowerTable = new QTableWidget(_ROW, _COLUMN, this);
    this->initialTableView(this->lowPowerTable);
    this->fillTableName(this->lowPowerTable);

    this->initialTestButton(ui->btnTest1);
    this->initialTestButton(ui->btnTest2);
    this->util = new UtilFunction();
}

LowPowerTestPage::~LowPowerTestPage()
{
    delete ui;
}

void LowPowerTestPage::initialTestButton(QPushButton *button)
{
    button->setCheckable(true);
    button->setChecked(false);
}

void LowPowerTestPage::initialTableView(QTableWidget *table)
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
    table->setColumnWidth(0, 120);
    table->setColumnWidth(1, 330);

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

void LowPowerTestPage::fillTableName(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }
    QList<QString> title;
    title <<"" << "M1" << "M2";
    //title << "测试步骤" << "故障代码"<< "测试开始条件" << " " ;
    QList<QString> names;
    names << "减载测试步骤" << "减载测试结果" << "减载测试完成";
    //names << "速度＝0" << "牵引手柄在惰性行位" << "非紧急制动" << "司机室激活" << "有高压" << "主断闭合";

    //fill the list to table
    for (int column = 0; column < table->columnCount(); column++)
    {
        table->item(0, column)->setText(title[column]);
        table->item(0, column)->setBackground(QColor(225,250,251));
    }

    for (int row = 1; row < table->rowCount(); row++)
    {
        table->item(row, 0)->setText(names[row-1]);
        table->item(row, 0)->setBackground(QColor(225,250,251));
    }

//    if (_COLUMN == table->columnCount() && _ROW == table->rowCount())
//    {
//        for (int column = 0; column < table->columnCount(); column ++)
//        {
//            if (NULL == title[column])
//            {
//                logger()->error("title is null;");
//                return;
//            }
//            table->item(0, column)->setText(title[column]);
//            table->item(0, column)->setBackgroundColor(QColor(191, 191, 191));
//            if (2 == column)
//            {
//                for (int row = 1; row < table->rowCount(); row ++)
//                {
//                    table->item(row, column)->setText(names[row - 1]);
//                }
//            }
//        }
//    }
}

void LowPowerTestPage::updatePage()
{
    util->showInfo(ui->labelT1info, this->database->CTHM_HMIReqFedBk05_B1);
    util->showInfo(ui->labelT2info, this->database->CTHM_HMIReqFedBk06_B1);
}



void LowPowerTestPage::on_btnBack_clicked()
{
    emit this->changeLogoPage(uVehicleLogo);
    emit this->changeMiddlePage(uSetTractionPage);
}

void LowPowerTestPage::on_btnTest1_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTest1->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_TCU1Test_B1 = true;
        this->database->HM1CT_TCU1Cancel_B1 = false;
    }
    else
    {
        ui->btnTest1->setStyleSheet(NButtonUP);
        this->database->HM1CT_TCU1Test_B1 = false;
        this->database->HM1CT_TCU1Cancel_B1 = true;
    }
}

void LowPowerTestPage::on_btnTest2_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTest2->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_TCU2Test_B1 = true;
        this->database->HM1CT_TCU2TestCancel_B1 = false;
    }
    else
    {
        ui->btnTest2->setStyleSheet(NButtonUP);
        this->database->HM1CT_TCU2Test_B1 = false;
        this->database->HM1CT_TCU2TestCancel_B1 = true;
    }
}

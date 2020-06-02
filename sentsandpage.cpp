#include "sentsandpage.h"
#include "ui_sentsandpage.h"
#include <QTableWidget>
#include "utilfunction.h"

#define _LOCAL 7, 10, 700, 220
#define _LOCAL2 7, 260, 700, 65
#define _ROW 7
#define _ROW2 2
#define _COLUMN 5


SentSandPage::SentSandPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SentSandPage)
{
    ui->setupUi(this);
    this->sandTable = new QTableWidget(_ROW, _COLUMN, this);
    this->sandTable->setGeometry(_LOCAL);
    this->localTable = new QTableWidget(_ROW2, _COLUMN, this);
    this->localTable->setGeometry(_LOCAL2);
    QList<QString> title, names, title1, names1;
    title << "显示项目(CCU->RIOM)" << "R1" << "R2" << "R5" << "R6";
    title1 << "显示项目" << "AV" << "ARR" << "ARR" << "AV";
    names  << "空压机状态(RIOM->CCU)" << "沙箱空压机工作" << "撒沙指令" << "撒沙指示灯" << "撒沙加热" << "排水指令";
    names1 << "沙箱沙位";
    this->initialTableView(sandTable);
    this->initialTableView(localTable);
    this->fillTableName(sandTable, title, names, _ROW);
    this->fillTableName(localTable, title1, names1, _ROW2);
    initialButtons(ui->btnHeat);
    initialButtons(ui->btnTest);
    initialButtons(ui->btnReset);
    this->util = new UtilFunction();
}

SentSandPage::~SentSandPage()
{
    delete ui;
}

void SentSandPage::initialButtons(QPushButton *button)
{
    button->setCheckable(true);
    button->setChecked(false);
}


void SentSandPage::initialTableView(QTableWidget *table)
{
    if (NULL == table)
    {
        return;
    }

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
    table->setColumnWidth(0, 180);
    table->setColumnWidth(1, 130);
    table->setColumnWidth(2, 130);
    table->setColumnWidth(3, 130);

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

void SentSandPage::fillTableName(QTableWidget *table, QList<QString> title, QList<QString> names, int row)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }


    //fill the list to table
    if (_COLUMN == table->columnCount() && row == table->rowCount())
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            if (NULL == title[column])
            {
                logger()->error("title is null;");
                return;
            }
            table->item(0, column)->setText(title[column]);
            table->item(0, column)->setBackgroundColor(QColor(191, 191, 191));
            if (0 == column)
            {
                for (int row = 1; row < table->rowCount(); row ++)
                {
                    if (NULL == names[row-1])
                        return;
                    table->item(row, column)->setText(names[row-1]);
                }
            }
        }
    }
}

void SentSandPage::updatePage()
{
    QList<QString> sandList;
    sandList << "--" << startOrNot(this->database->RM2CT_DX1DI16CompRunning_B1) << startOrNot(this->database->RM5CT_DX1DI16CompRunning_B1) << "--"
            << "--" << startOrNot(this->database->CTRM2_DX2DO1Comp1Ctrl_B1) << startOrNot(this->database->CTRM5_DX2DO1Comp1Ctrl_B1) << "--"
            << "--" << QString::number(this->database->CTRM2_DX2DO2SAN1Sanding_B1) << QString::number(this->database->CTRM5_DX2DO2SAN1Sanding_B1) << "--"
            << QString::number(this->database->CTRM1_DX2DO15SandLight_B1) << "--" << "--" << QString::number(this->database->CTRM6_DX2DO15SandLight_B1)
            << "--" << QString::number(this->database->CTRM2_DX2DO4SandHeating_B1) << QString::number(this->database->CTRM5_DX2DO4SandHeating_B1) << "--"
            << "--" << QString::number(this->database->CTRM2_DX2DO3DrainValve1Ctrl_B1) << QString::number(this->database->CTRM5_DX2DO3DrainValve1Ctrl_B1) << "--";

    for (int row = 1; row < _ROW; row++)
    {
        for (int column = 1; column < _COLUMN; column++)
        {
            this->sandTable->item(row, column)->setText(sandList[(row-1)*4 + column-1]);
        }
    }

    util->showInfo(ui->labelTinfo, this->database->CTHM_HMIReqFedBk12_B1);
    util->showInfo(ui->labelHinfo, this->database->CTHM_HMIReqFedBk13_B1);
}


QString SentSandPage::startOrNot(bool start)
{
    if (start)
    {
        return "启动";
    }
    else
    {
        return "未启动";
    }
}

void SentSandPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

void SentSandPage::on_btnTest_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTest->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_SandTest_B1 = true;
        this->database->HM1CT_SandTestCancel_B1 = false;
    }
    else
    {
        ui->btnTest->setStyleSheet(NButtonUP);
        this->database->HM1CT_SandTest_B1 = false;
        this->database->HM1CT_SandTestCancel_B1 = true;
    }
}

void SentSandPage::on_btnHeat_toggled(bool checked)
{
    if (checked)
    {
        ui->btnHeat->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_SandHeat_B1 = true;
        this->database->HM1CT_SandHeatCancel_B1 = false;
    }
    else
    {
        ui->btnHeat->setStyleSheet(NButtonUP);
        this->database->HM1CT_SandHeat_B1 = false;
        this->database->HM1CT_SandTestCancel_B1 = true;
    }
}

void SentSandPage::on_btnReset_toggled(bool checked)
{
    if (checked)
    {
        ui->btnReset->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_SandReset_B1 = true;
    }
    else
    {
        ui->btnReset->setStyleSheet(NButtonUP);
        this->database->HM1CT_SandReset_B1 = false;
    }
}

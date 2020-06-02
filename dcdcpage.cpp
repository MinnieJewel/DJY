#include "dcdcpage.h"
#include "ui_dcdcpage.h"
#include <QTableWidget>
#include <QTimer>

#define _LOCAL 7, 7, 780, 270
#define _ROW 11
#define _COLUMN 6


DCDCPage::DCDCPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::DCDCPage)
{
    ui->setupUi(this);
    this->dcdcTable = new QTableWidget(_ROW, _COLUMN, this);
    this->initialTableView(this->dcdcTable);
    this->fillTableName(this->dcdcTable);
    this->timer1 = new QTimer;
    this->timer2 = new QTimer;
    this->timer1->stop();
    this->timer2->stop();
    connect(this->timer1, SIGNAL(timeout()), this, SLOT(onTimer1Out()));
    connect(this->timer2, SIGNAL(timeout()), this, SLOT(onTimer2Out()));
    ui->btnDcdcCut1->setCheckable(true);
    ui->btnDcdcCut1->setChecked(false);
    ui->btnDcdcCut2->setCheckable(true);
    ui->btnDcdcCut2->setChecked(false);

    ui->btnDcdcCut1->setStyleSheet(NButtonUP);
    this->database->HM1CT_DCDC1CutOff_B1 = false;
    this->database->HM1CT_DCDC1CutOffCancel_B1 = true;

    ui->btnDcdcCut2->setStyleSheet(NButtonUP);
    this->database->HM1CT_DCDC2CutOff_B1 = false;
    this->database->HM1CT_DCDC2CutOffCancel_B1 = true;
}

DCDCPage::~DCDCPage()
{
    delete ui;
}

void DCDCPage::initialTableView(QTableWidget *table)
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
    table->setColumnWidth(0, 190);
    table->setColumnWidth(1, 100);
    table->setColumnWidth(2, 100);
    table->setColumnWidth(3, 190);
    table->setColumnWidth(4, 100);
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

void DCDCPage::fillTableName(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }
    QList<QString> title;
    title << "超能电容器和DCDC信息" << "1支路"<< "2支路" << "超能电容器和DCDC信息" << "1支路"<< "2支路" ;
    QList<QString> names;
    names << "电网电压" << "支撑电容电压" << "侧网电流" << "超级电容电压" << "DCDC生命信号" << "超级电容实时能量" << "超级电容总能量" << "超级电容KM4状态" << "放电KM3状态" << "充电KM2状态"
    << "充电KM1状态" << "放电完成" << "充电完成" << "放电工作状态" << "充电工作状态" << "隔离完成" << "DC/DC故障" << "超能电容KM5状态" << "电容组生命心跳" << "电容组故障码";

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
            table->item(0, column)->setBackgroundColor(QColor(191, 191, 191));
            if (0 == column % 3)
            {
                for (int row = 1; row < table->rowCount(); row ++)
                {
                    if (NULL == names[row-1 + column / 3 * 10])
                        return;
                    table->item(row, column)->setText(names[row-1 + column / 3 * 10]);
                }
            }
        }
    }
}

void DCDCPage::updatePage()
{
    QList<QString> dcdcDatas;

    dcdcDatas << QString::number(this->database->DC1CT_ILineVolt_U16) << QString::number(this->database->DC1CT_ISuppCapVolt_U16)
            << QString::number(this->database->DC1CT_ILineCurrent_U16) << QString::number(this->database->DC1CT_ISupercapVolt_U16)
            << QString::number(this->database->DC1CT_Ilifesignal_U16) << QString::number(this->database->DC1CT_IRealTimeEnergy_U16)
            << QString::number(this->database->DC1CT_ITotalEnergy_U16) << QString::number(this->database->DC1CT_IKM4state_B1)
            << QString::number(this->database->DC1CT_IKM3state_B1) << QString::number(this->database->DC1CT_IKM2state_B1)
            << QString::number(this->database->DC1CT_IKM1state_B1) << QString::number(this->database->DC1CT_IDisChargeFinish_B1)
            << QString::number(this->database->DC1CT_IChargeFinish_B1) << QString::number(this->database->DC1CT_IDisChargeState_B1)
            << QString::number(this->database->DC1CT_IChargeState_B1) << QString::number(this->database->DC1CT_ICutOfffinish_B1)
            << QString::number(this->database->DC1CT_Ifail_B1) << QString::number(this->database->DC1CT_IKM5state_B1)
            << QString::number(this->database->DC1CT_Ilifesignal_U8) << QString::number(this->database->DC1CT_ICapaGroupfailCode_U8)
            //dcdc2
            << QString::number(this->database->DC2CT_ILineVolt_U16) << QString::number(this->database->DC2CT_ISuppCapVolt_U16)
            << QString::number(this->database->DC2CT_ILineCurrent_U16) << QString::number(this->database->DC2CT_ISupercapVolt_U16)
            << QString::number(this->database->DC2CT_Ilifesignal_U16) << QString::number(this->database->DC2CT_IRealTimeEnergy_U16)
            << QString::number(this->database->DC2CT_ITotalEnergy_U16) << QString::number(this->database->DC2CT_IKM4state_B1)
            << QString::number(this->database->DC2CT_IKM3state_B1) << QString::number(this->database->DC2CT_IKM2state_B1)
            << QString::number(this->database->DC2CT_IKM1state_B1) << QString::number(this->database->DC2CT_IDisChargeFinish_B1)
            << QString::number(this->database->DC2CT_IChargeFinish_B1) << QString::number(this->database->DC2CT_IDisChargeState_B1)
            << QString::number(this->database->DC2CT_IChargeState_B1) << QString::number(this->database->DC2CT_ICutOfffinish_B1)
            << QString::number(this->database->DC2CT_Ifail_B1) << QString::number(this->database->DC2CT_IKM5state_B1)
            << QString::number(this->database->DC2CT_Ilifesignal_U8) << QString::number(this->database->DC2CT_ICapaGroupfailCode_U8);

    for (int row = 1; row < dcdcTable->rowCount(); row++)
    {
        dcdcTable->item(row,1)->setText(dcdcDatas[row-1]);
        dcdcTable->item(row,4)->setText(dcdcDatas[10+row-1]);
        dcdcTable->item(row,2)->setText(dcdcDatas[20+row-1]);
        dcdcTable->item(row,5)->setText(dcdcDatas[30+row-1]);
    }
}

void DCDCPage::on_btnBack_clicked()
{
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
}

void DCDCPage::onTimer1Out()
{
    this->timer1->stop();
    ui->btnDcdcReset1->setEnabled(true);
    this->database->HM1CT_DCDC1Reset_B1 = false;
}

void DCDCPage::onTimer2Out()
{
    this->timer2->stop();
    ui->btnDcdcReset2->setEnabled(true);
    this->database->HM1CT_DCDC2Reset_B1 = false;
}

void DCDCPage::on_btnDcdcReset1_clicked()
{
    if (!this->timer1->isActive())
    {
        this->timer1->start(1000);
        this->database->HM1CT_DCDC1Reset_B1 = true;
        ui->btnDcdcReset1->setEnabled(false);
    }
}

void DCDCPage::on_btnDcdcReset2_clicked()
{
    if (!this->timer2->isActive())
    {
        this->timer2->start(1000);
        this->database->HM1CT_DCDC2Reset_B1 = true;
        ui->btnDcdcReset2->setEnabled(false);
    }
}

void DCDCPage::on_btnDcdcCut1_toggled(bool checked)
{
    if (checked)
    {
        ui->btnDcdcCut1->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_DCDC1CutOff_B1 = true;
        this->database->HM1CT_DCDC1CutOffCancel_B1 = false;
    }
    else
    {
        ui->btnDcdcCut1->setStyleSheet(NButtonUP);
        this->database->HM1CT_DCDC1CutOff_B1 = false;
        this->database->HM1CT_DCDC1CutOffCancel_B1 = true;
    }
}

void DCDCPage::on_btnDcdcCut2_toggled(bool checked)
{
    if (checked)
    {
        ui->btnDcdcCut2->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_DCDC2CutOff_B1 = true;
        this->database->HM1CT_DCDC2CutOffCancel_B1 = false;
    }
    else
    {
        ui->btnDcdcCut2->setStyleSheet(NButtonUP);
        this->database->HM1CT_DCDC2CutOff_B1 = false;
        this->database->HM1CT_DCDC2CutOffCancel_B1 = true;
    }
}

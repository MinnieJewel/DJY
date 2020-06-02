#include "sivinfopage.h"
#include "ui_sivinfopage.h"
#include <QTableWidget>

#define _LOCALRIOM 20, 20, 700, 350
#define _LOCALSIV 7, 50, 750, 270

#define _ROWRIOM 10
#define _COLUMNRIOM 5
#define _ROWSIV 9
#define _COLUMNSIV 4


SIVInfoPage::SIVInfoPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SIVInfoPage)
{
    ui->setupUi(this);
    this->sivRiomTable = new QTableWidget(_ROWRIOM, _COLUMNRIOM, this);
    this->sivRiomTable->setGeometry(_LOCALRIOM);

    this->sivTable = new QTableWidget(_ROWSIV, _COLUMNSIV, this);
    this->sivTable->setGeometry(_LOCALSIV);
    this->initialTableView(this->sivRiomTable);
    this->initialTableView(this->sivTable);
    this->initialTitle();
    this->page = 1;
}

SIVInfoPage::~SIVInfoPage()
{
    delete ui;
}

void SIVInfoPage::showEvent(QShowEvent *)
{
    this->page = 1;
    this->sivRiomTable->show();
    this->sivTable->hide();
    this->turnPage();
}

//QString SIVInfoPage::normalOrNot(bool normal)
//{
//    if (normal)
//    {
//        return "正常";
//    }
//    else
//    {
//        return "其他";
//    }
//}

//QString SIVInfoPage::faultOrNot(bool fault)
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

//QString SIVInfoPage::workOrNot(bool work)
//{
//    if (work)
//    {
//        return "工作";
//    }
//    else
//    {
//        return "未工作";
//    }
//}

void SIVInfoPage::turnPage()
{
    ui->labelPage->setText(QString::number(this->page) + "/2");
}

void SIVInfoPage::initialTitle()
{/*
    table->setColumnWidth(0, 200);
    table->setColumnWidth(1, 290);*/

    QList<QString> title1, title2, names;
    title1 << "中压输出信息" << "M1" << "C1" << "C2" << "M2";
    title2 << "(RIOM)" << "R2" << "R3" << "R4" << "R5";
    names << "蓄电池熔断器正常" << "24V正常"
            << "检测到高压" << "充电机故障" << "AC1故障" << "辅助控制器故障"
            << "AC2故障" << "蓄电池电压";

    sivRiomTable->setColumnWidth(0, 180);
    sivRiomTable->setColumnWidth(1, 130);
    sivRiomTable->setColumnWidth(2, 130);
    sivRiomTable->setColumnWidth(3, 130);
    for (int i = 0; i < sivRiomTable->columnCount(); i++)
    {
        sivRiomTable->item(0, i)->setText(title1[i]);
        sivRiomTable->item(0, i)->setBackgroundColor(QColor(225,250,251));
        sivRiomTable->item(1, i)->setText(title2[i]);
        sivRiomTable->item(1, i)->setBackgroundColor(QColor(225,250,251));
    }

    for (int j = 2; j < sivRiomTable->rowCount(); j++)
    {
        sivRiomTable->item(j,0)->setText(names[j-2]);
        sivRiomTable->item(j,0)->setBackgroundColor(QColor(225,250,251));
    }


    QList<QString> sivTitle1,sivTitle2;
    sivTitle1 << "名称(ACU->CCU)"<< "辅助逆变器1输出电压" << "辅助逆变器2输出电压" << "辅助逆变器2频率" << "充电机1工作"
            << "充电机2工作" << "辅助逆变器1工作"<< "辅助逆变器2工作" <<"";
    sivTitle2 << "名称(CCU->ACU)"<< "ACE等待"<< "禁止变频中压" << "禁止定频中压" << "禁止直流供电"
            << "HVAC频率需求2" << "HVAC频率需求1" << "允许辅助逆变器1向逆变器2扩展" << "允许辅助逆变器2向逆变器1扩展";

    sivTable->setColumnWidth(0, 200);
    sivTable->setColumnWidth(1, 150);
    sivTable->setColumnWidth(2, 250);

    for (int row = 0; row < this->sivTable->rowCount(); row++)
    {
        sivTable->item(row, 0)->setText(sivTitle1[row]);
        sivTable->item(row, 0)->setBackgroundColor(QColor(225,250,251));
        sivTable->item(row, 2)->setText(sivTitle2[row]);
        sivTable->item(row, 2)->setBackgroundColor(QColor(225,250,251));
    }

}

void SIVInfoPage::initialTableView(QTableWidget *table)
{
    if (NULL == table)
    {
        return;
    }
    //table->setGeometry(_LOCALRIOM);
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


//void SIVInfoPage::fillTableName(QTableWidget *table)
//{
//    if (NULL == table)
//    {
//        logger()->error("table is null;");
//        return;
//    }
//    QList<QString> title;
//    title << " " << "C1" << "C2" ;
//    QList<QString> names;
//    names << "蓄电池熔断器正常" << "24V正常" << "辅助逆变器1正常" << "辅助逆变器2正常" << "检测到高压" << "充电机故障";

//    //fill the list to table
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
//            if (0 == column)
//            {
//                for (int row = 1; row < table->rowCount(); row ++)
//                {
//                    if (NULL == names[row-1])
//                        return;
//                    table->item(row, column)->setText(names[row-1]);
//                }
//            }
//        }
//    }
//}

void SIVInfoPage::updatePage()
{
    QList<QString> sivString1, sivString2;
    if (1 == this->page)
    {
        sivString1 << "--" << "--" << QString::number(this->database->RM4CT_DX1DI9NFuseBattOK_B1) << "--"
                << "--" << QString::number(this->database->RM3CT_DX1DI224VoltOK1_B1) << "--" << "--"
                << "--" << QString::number(this->database->RM3CT_DX1DI14HighVoltagePres1_B1) << QString::number(this->database->RM4CT_DX1DI16HvLinePres2_B1) << "--"
                << "--" << QString::number(this->database->RM3CT_DX1DI15BattChrgFail1_B1) << "--" << "--"
                << "--" << QString::number(this->database->RM3CT_DX1DI12AC1Fail_B1) << "--" << "--"
                << "--" << QString::number(this->database->RM3CT_DX1DI10CtrlUnitFail1_B1) << "--" << "--"
                << "--" << QString::number(this->database->RM3CT_DX1DI13AC2Fail_B1) << "--" << "--"
                << QString::number(this->database->RM2CT_AILVMeasure_U16) << "--" << "--" << QString::number(this->database->RM5CT_AILVMeasure_U16);

        for (int row = 2; row < _ROWRIOM; row ++)
        {
            for (int column = 1; column < _COLUMNRIOM; column ++)
            {
                sivRiomTable->item(row, column)->setText(sivString1[(row-2)*4 + column-1]);
            }
        }
    }
    else if (2 == this->page)
    {
        sivString2 << QString::number(this->database->CTDT_AXCTIINV1OutVolt_U8) << QString::number(this->database->CTAX_CACEWait_B1)
                << QString::number(this->database->CTDT_AXCTIINV2OutVolt_U8) << QString::number(this->database->CTAX_CFVProdInhibition_B1)
                << QString::number(this->database->CTDT_AXCTIINV2Frq_U8) << QString::number(this->database->CTAX_CFFProdInhibition_B1)
                << QString::number(this->database->CTDT_AXCTILVPS1Run_B1) << QString::number(this->database->CTAX_CLVProdInhibition_B1)
                << QString::number(this->database->CTDT_AXCTILVPS2Run_B1) << QString::number(this->database->CTAX_CFCRequest2_B1)
                << QString::number(this->database->CTDT_AXCTIINV1Run_B1) << QString::number(this->database->CTAX_CFCRequest1_B1)
                << QString::number(this->database->CTDT_AXCTIINV2Run_B1) << QString::number(this->database->CTAX_CAutComAC1toAc2_B1)
                << "" << QString::number(this->database->CTAX_CAutComAC2toAc1_B1);

        for (int row = 1; row < _ROWSIV; row++)
        {
            for (int column = 0; column < _COLUMNSIV; column++)
            {
                if (1 == column % 2)
                    sivTable->item(row, column)->setText(sivString2[(row-1)*2 + column/2]);
            }
        }
    }
}

void SIVInfoPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

void SIVInfoPage::on_btnPre_clicked()
{
    if(page == 1) return;
    else
    {
        page--;
        this->sivRiomTable->show();
        this->sivTable->hide();
    }
    this->turnPage();
}

void SIVInfoPage::on_btnNext_clicked()
{
    if (page == 2) return;
    else
    {
        page++;
        this->sivRiomTable->hide();
        this->sivTable->show();
    }
    this->turnPage();
}

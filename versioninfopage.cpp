#include "versioninfopage.h"
#include "ui_versioninfopage.h"
#include <QTableWidget>
#define _ROW1 8
#define _COLUMN1 2
#define _RIOMROW 7
#define _RIOMCOLUMN 5
#define _ROW2 5
#define _COLUMN2 8
#define _LOCATION1 5, 5, 790, 235
#define _LOCATION2 5, 5, 790, 200
#define _LOCATION3 5, 250, 790, 150

VersionInfoPage::VersionInfoPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VersionInfoPage)
{
    ui->setupUi(this);
    this->versionTable1 = new QTableWidget(_ROW1, _COLUMN1, this);
    this->initialTableView(this->versionTable1, false, false);
    this->fillTableName(this->versionTable1, false, false);
    this->versionTable2 = new QTableWidget(_ROW2, _COLUMN2, this);
    this->initialTableView(this->versionTable2, false, true);
    this->fillTableName(this->versionTable2, false, true);
    this->riomVersionTable = new QTableWidget(_RIOMROW, _RIOMCOLUMN, this);
    this->initialTableView(this->riomVersionTable, true, false);
    this->fillTableName(this->riomVersionTable, true, false);
    this->riomVersionTable->hide();
    this->showOther = true;
    this->page = 1;
    ui->labelPage->setText("1/2");
//    this->edcuVersionTable = new QTableWidget(_EDCUROW, _EDCUCOLUMN, this);
//    this->initialTableView(this->edcuVersionTable, false, true);
//    this->fillTableName(this->edcuVersionTable, false, true);
}

VersionInfoPage::~VersionInfoPage()
{
    delete ui;
}

void VersionInfoPage::initialTableView(QTableWidget *table, bool isRiom, bool otherTable)
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
    if (isRiom)
    {
        table->setGeometry(_LOCATION2);        
        table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    }
    else if (otherTable)
    {
        table->setGeometry(_LOCATION3);
        table->setColumnWidth(0, 60);
        table->setColumnWidth(1, 139);
        table->setColumnWidth(2, 60);
        table->setColumnWidth(3, 139);
        table->setColumnWidth(4, 60);
        table->setColumnWidth(5, 139);
        table->setColumnWidth(6, 60);
    }
    else
    {
        table->setGeometry(_LOCATION1);
//        table->setColumnWidth(0, 120);
//        table->setColumnWidth(1, 275);
//        table->setColumnWidth(2, 120);
    }
}

void VersionInfoPage::fillTableName(QTableWidget *table, bool riom, bool otherTable)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }
    QList<QString> title, names;
    if (riom)
    {
        title << " " << "GW" << "DIO1" << "DIO2" << "AX";
        names << "RIOM1" << "RIOM2" << "RIOM3" << "RIOM4" << "RIOM5" << "RIOM6";
        if (_RIOMCOLUMN == table->columnCount() && _RIOMROW == table->rowCount())
        {
            for (int column = 0; column < table->columnCount(); column ++)
            {
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

    else if (otherTable)
    {
        title << "ERM1" << "ERM2" << "HMI1" << "HMI2"<< "HVAC1" << "HVAC2"
              << "EDCU1" << "EDCU2" << "EDCU3" << "EDCU4" << "EDCU5" << "EDCU6"
              << "EDCU7" << "EDCU8"  << "EDCU9" << "EDCU10" << "EDCU11" << "EDCU12"
              << "ACU" << "PIS";
        {
            if (_COLUMN2 == table->columnCount() && _ROW2 == table->rowCount())
            {
                for (int row = 0; row < _ROW2; row++)
                {
                    for (int column = 0; column < _COLUMN2; column++)
                    {
                        if (0 == column%2)
                        {
                            if(row*4+column/2 < title.size())
                            {
                                table->item(row, column)->setText(title[row*4+column/2]);
                                table->item(row, column)->setBackgroundColor(QColor(225,250,251));
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        title << "CCU1" << "CCU2" << "BCU" << "TBCU1" << "TBCU2" << "ATC" << "DCDC1" << "DCDC2";
        if (_COLUMN1 == table->columnCount() && _ROW1 == table->rowCount())
        {
            for (int row = 0;row < _ROW1; row++)
            {
                table->item(row, 0)->setText(title[row]);
                table->item(row, 0)->setBackgroundColor(QColor(225,250,251));
            }
        }
    }
//    else if (edcu)
//    {
//        title << "EDCU1 " << "EDCU3" << "EDCU5" << "EDCU7" << "EDCU9" << "EDCU11"
//                << "EDCU2" << "EDCU4" << "EDCU6" << "EDCU8" << "EDCU10" << "EDCU12";
//        if (_EDCUCOLUMN == table->columnCount() && _EDCUROW == table->rowCount())
//        {
//            for (int column = 0; column < table->columnCount(); column++)
//            {
//                if (0 == column % 2)
//                {
//                    for (int row = 0; row < table->rowCount(); row ++ )
//                    {
//                        if (NULL == title[column*6/2+row])
//                        {
//                            logger()->error("title is null;");
//                            return;
//                        }
//                        table->item(row, column)->setText(title[column*6/2+row]);
//                        table->item(row, column)->setBackgroundColor(QColor(225,250,251));
//                    }
//                }
//            }
//        }
//    }
//    else
//    {
//        title << "CCU1" << "ERM1" << "HMI1" << "ATC" << "TBCU1" << "PIS1"<< "ACU" << "HVAC1" << "EDCU1 " << "EDCU3" << "EDCU5" << "EDCU7" << "EDCU9" << "EDCU11"
//              << "CCU2" << "ERM2" << "HMI2" << "DCDC"<< "TBCU2" << "PIS2" << "BCU" << "HVAC2" << "EDCU2" << "EDCU4" << "EDCU6" << "EDCU8" << "EDCU10" << "EDCU12";
//        if (_COLUMN == table->columnCount() && _ROW == table->rowCount())
//        {
//            for (int column = 0; column < table->columnCount(); column ++)
//            {
//                if (0 == column % 2)
//                {
//                    for (int row = 0; row < table->rowCount(); row ++ )
//                    {
//                        if (NULL == title[column*14/2+row])
//                        {
//                            logger()->error("title is null;");
//                            return;
//                        }
//                        table->item(row, column)->setText(title[column*14/2+row]);
//                        table->item(row, column)->setBackgroundColor(QColor(225,250,251));
//                    }
//                }
//            }
//        }
//    }
}

void VersionInfoPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

void VersionInfoPage::updatePage()
{    

    if (this->showOther)
    {
         QList<QString> version1, version2 ;

        version1 << "soft:"+ this->database->ccu1Version + "MVB:" + this->database->ccu1MvbVersion+ " SDB:" + this->database->ccu1SDBVersion + " vxworks:" + this->database->ccu1VxVersion
                << "soft:"+this->database->ccu2Version + "MVB:" + this->database->ccu2MvbVersion+ " SDB:" + this->database->ccu2SDBVersion + " vxworks:" + this->database->ccu2VxVersion
                << this->database->bcuVersion << "网络：" + this->database->tbcu1NetVersion + " 软件:" + this->database->tbcu1SoftVersion + "硬件:" + this->database->tbcu1HardVersion
                <<"网络：" + this->database->tbcu1NetVersion + " 软件:" + this->database->tbcu1SoftVersion + "硬件:" + this->database->tbcu1HardVersion << "ATC"
                << "软件：" + this->database->dcdc1SoftVersion + " 网关:" + this->database->dcdc1GwVersion << "软件：" + this->database->dcdc2SoftVersion + " 网关:" + this->database->dcdc2GwVersion;
        version2 << this->database->erm1Version << this->database->erm2Version << this->database->hmi1Version << this->database->hmi2Version
               << this->database->hvac1Version << this->database->hvac2Version << this->database->edcu1Version << this->database->edcu2Version
               << this->database->edcu3Version << this->database->edcu4Version << this->database->edcu5Version << this->database->edcu6Version
               << this->database->edcu7Version << this->database->edcu8Version << this->database->edcu9Version << this->database->edcu10Version
               << this->database->edcu11Version << this->database->edcu12Version << this->database->acuVersion << this->database->pisVersion;
        if (_COLUMN1 == versionTable1->columnCount() && _ROW1 == versionTable1->rowCount())
        {
            for (int row = 0; row < this->versionTable1->rowCount(); row++)
                {
                    versionTable1->item(row, 1)->setText(version1[row]);
                }
        }

        if (_COLUMN2 == versionTable2->columnCount() && _ROW2 == versionTable2->rowCount())
        {
            for (int row = 0; row < _ROW2; row++)
            {
                for (int column = 0; column < _COLUMN2; column++)
                {
                    if (1 == column%2)
                    {
                        if(row*4+(column-1)/2 < version2.size())
                        {
                            versionTable2->item(row, column)->setText(version2[row*4+(column-1)/2]);
                        }
                    }
                }
            }
        }
    }
    else
    {
        QList<QString> riomVersions;
        riomVersions << this->database->riom1gw << this->database->riom1di1 << this->database->riom1di1 << this->database->riom1ax
         << this->database->riom2gw << this->database->riom2di1 << this->database->riom2di2 << this->database->riom2ax
         << this->database->riom3gw << this->database->riom3di1 << "--" << "--"
         << this->database->riom4gw << this->database->riom4di1 << "--" << "--"
         << this->database->riom5gw << this->database->riom5di1 << this->database->riom5di2 << this->database->riom5ax
         << this->database->riom6gw << this->database->riom6di1 << this->database->riom6di2 << this->database->riom6ax;
        if (_RIOMCOLUMN == riomVersionTable->columnCount() && _RIOMROW == riomVersionTable->rowCount())
        {
            for (int row = 1; row < riomVersionTable->rowCount(); row++)
            {
                for (int column = 1; column < riomVersionTable->columnCount(); column++)
                {
                    riomVersionTable->item(row, column)->setText(riomVersions[(row-1)*4+(column-1)]);
                }
            }
        }
    }
    //    this->validStyle(0,0,this->database->CTHM_CCU1VerOK_B1);
//    this->validStyle(0,2,this->database->CTHM_CCU2VerOK_B1);
//    this->validStyle(1,0,this->database->DT1CT_ERMSWVerValid_B1);
//    this->validStyle(1,2,this->database->DT2CT_ERMSWVerValid_B1);

//    QList<QString> version ;
//    QString ccu1,ccu2;
//    ccu1 = "soft:"+ this->database->ccu1Version + "MVB:" + this->database->ccu1MvbVersion+ " SDB:" + this->database->ccu1SDBVersion + " vxworks:" + this->database->ccu1VxVersion;
//    ccu2 = "soft:"+this->database->ccu2Version + "MVB:" + this->database->ccu2MvbVersion+ " SDB:" + this->database->ccu2SDBVersion + " vxworks:" + this->database->ccu2VxVersion;
//    version << ccu1 << this->database->erm1Version << this->database->hmi1Version << "ATC" << "TBCU1" << "PIS1"
//            << this->database->acuVersion << this->database->hvac1Version << this->database->edcu1Version << this->database->edcu3Version<< this->database->edcu5Version << this->database->edcu7Version
//            << this->database->edcu9Version << this->database->edcu11Version  << ccu2 << this->database->erm2Version << this->database->hmi2Version << "DCDC"
//            << "TBCU2" << "PIS2" << "BCU" << this->database->hvac2Version << this->database->edcu2Version << this->database->edcu4Version
//            << this->database->edcu6Version << this->database->edcu8Version << this->database->edcu5Version << this->database->edcu12Version;
//    for (int column = 0; column < this->versionTable->columnCount(); column ++)
//    {
//        if (1 == column % 2)
//        {
//            for (int row = 0; row < versionTable->rowCount(); row ++ )
//            {
//                int count = (column-1)*14/2+row;
//                versionTable->item(row, column)->setText(version[(column-1)*14/2+row]);
//                //versionTable->item(row, column)->setBackgroundColor(QColor(225,250,251));
//            }
//        }
//    }
}

void VersionInfoPage::validStyle(QTableWidget *table, int row, int column, bool isValid)
{
    if (isValid)
    {
        table->item(row, column)->setBackgroundColor(QColor(255,255,255));
    }
    else
    {
        table->item(row, column)->setBackgroundColor(QColor(255,0,0));
    }
}

void VersionInfoPage::on_btnPre_clicked()
{
    if (1 == this->page)
        return;
    else
    {
        this->page = 1;
        ui->labelPage->setText("1/2");
        this->showOther = true;
        this->showTables(true);
    }
}

void VersionInfoPage::on_btnNext_clicked()
{
    if (2 == this->page)
            return;
    else
    {
        this->page = 2;
        ui->labelPage->setText("2/2");
        this->showOther = false;
        this->showTables(false);
    }
}

void VersionInfoPage::showTables(bool show)
{
    if (show)
    {
        this->versionTable1->show();
        this->versionTable2->show();
        this->riomVersionTable->hide();
    }
    else
    {
        this->versionTable1->hide();
        this->versionTable2->hide();
        this->riomVersionTable->show();
    }
}



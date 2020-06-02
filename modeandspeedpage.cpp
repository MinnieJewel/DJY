#include "modeandspeedpage.h"
#include "ui_modeandspeedpage.h"
#include <QTableWidget>

#define _LOCAL 7, 2, 780, 400
#define _ROW 18
#define _COLUMN 4

ModeAndSpeedPage::ModeAndSpeedPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ModeAndSpeedPage)
{
    ui->setupUi(this);
    modeSpeedTable = new QTableWidget(_ROW, _COLUMN, this);
    initialTableView(modeSpeedTable);
    fillTableName(modeSpeedTable);
    QFont font;
    font.setFamily("SimHei");
    font.setPixelSize(12);
    this->modeSpeedTable->setFont(font);
}

ModeAndSpeedPage::~ModeAndSpeedPage()
{
    delete ui;
}


void ModeAndSpeedPage::initialTableView(QTableWidget *table)
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
    table->setColumnWidth(0, 50);
    table->setColumnWidth(1, 150);
    table->setColumnWidth(2, 500);
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

void ModeAndSpeedPage::fillTableName(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null;");
        return;
    }
    QList<QString> title,names,directionString;
    title << "序号" << "模式" << "条件" << "状态" ;
    names << "清洁模式" << "洗车模式" << "后退模式" << "联挂模式" << "CM模式" << "电制动全部切除"
            << "直接供电模式" << "无电区" << "检修模式" <<"降级模式" << "降级模式条件1" << "降级模式条件2"
            << "降级模式条件3" << "紧急牵引模式" << "手动放电模式" <<"子系统检修模式" << "过转矩模式";

    directionString << "根据清洁模式DI信号" << "零速条件下，本侧司机室钥匙位于CM位且方向设为向前，\n洗车模式条件成立，条件成立后在本侧显示屏上设定洗车模式，则进入洗车模式" << "相对激活侧，运行方向向后时，作为后退模式，即倒车模式/退行模式" << "通过DI状态判断"
            << "任一司控器位于CM模式" << "按照设定状态判断" << "通过DI状态判断" << "通过DI状态或DCDC状态判断"
            << "在显示屏上设置了检修模式，并且通过显示屏设置了DCDC的手动放电模式， \n则列车进入检修模式。" << "三个降级条件满足任意一个" << "TBCU离线/载荷传感器故障/司控器未激活或供电异常\n牵引故障/电制动可用值不足" << "制动隔离/制动大故障"
            << "警惕隔离/紧急制动环路异常" << "两个牵引系统在线并且都进入了紧急牵引模式，即救援模式" << "激活端显示屏上设定了手动放电模式" << "无高压，零速，并且在显示屏上设置了检修模式"
            << "在零速条件下，可以从显示屏上设定过转矩模式。每次设定成功后过转矩模式持续10s。" ;
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
        }


        for (int row = 1; row < table->rowCount(); row ++)
        {
            if ((NULL == names[row-1])||(NULL == directionString[row-1]))
                return;
            table->item(row ,0)->setText(QString::number(row));
            table->item(row, 0)->setBackgroundColor(QColor(225,250,251));
            table->item(row, 1)->setText(names[row-1]);
            table->item(row, 2)->setText(directionString[row-1]);
        }
    }
}

void ModeAndSpeedPage::updatePage()
{
    QList<QString>modeSpeedString;

    modeSpeedString << QString::number(this->database->CTHM_CleanMode_B1) << QString::number(this->database->CTHM_WashMode_B1)
            << QString::number(this->database->CTHM_ModeBackup_B1) << QString::number(this->database->CTHM_Coupled_B1)
            << QString::number(this->database->CTHM_ModeCM_B1) << QString::number(this->database->CTHM_ModeAllEBCut_B1)
            << QString::number(this->database->CTHM_ModeDirectPower_B1) << QString::number(this->database->CTHM_DCDCNOHV_B1)
            << QString::number(this->database->CTHM_HMIReqFedBk15_B1) << QString::number(this->database->CTHM_ModeDegrade_B1)
            << QString::number(this->database->CTHM_ModeDegradeC1_B1) << QString::number(this->database->CTHM_ModeDegradeC2_B1)
            << QString::number(this->database->CTHM_ModeDegradeC3_B1) << QString::number(this->database->CTHM_Backward_B1)
            << QString::number(this->database->CTHM_HMIReqFedBk21_B1) << QString::number(this->database->CTHM_ModeTMM_B1)
            << QString::number(this->database->CTHM_HMIReqFedBk07_B1);

   for (int row = 1; row < this->modeSpeedTable->rowCount(); row++)
    {
        this->modeSpeedTable->item(row, 3)->setText(modeSpeedString[row - 1]);
    }
}

void ModeAndSpeedPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

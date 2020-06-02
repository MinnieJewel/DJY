#include "iosignalspage.h"
#include "ui_iosignalspage.h"
#include <QTableWidget>
#include <QButtonGroup>
#define _RIOMDOWN "background-color: rgb(51,153,255);border:3px solid white;color:white;outline: none;border-radius:10px;font: 20pt \"SimHei\";"
#define _RIOMUP "background-color: white;border:3px solid white;color:black;outline: none;border-radius:10px;font: 20pt \"SimHei\";"
//#define _TABLESTYLE "background-color: white; font:12px \"SimHei\"; color:black;border-color:black;"

#define _DIUP 35, 1, 746, 176
#define _DIMID 35, 220, 746, 176
#define _AXDOWN 35, 287, 746, 44

#define _DOUP 35, 1, 746, 88
#define _DOMID 35, 186, 746, 88
#define _DO2MID 35, 150, 746, 88

#define _DIUPLABEL 10, 1, 25, 176
#define _DIMIDLABEL 10, 220, 25, 176
#define _AXDOWNLABEL 10, 287, 30, 44

#define _DOUPLABEL 10, 1, 25, 88
#define _DOMIDLABEL 10, 186, 25, 88
#define _DO2MIDLABEL 10, 150, 25, 88

#define _ERMUPLABEL 10, 1, 25, 88
#define _ERMMIDLABEL 10, 98, 25, 66
#define _AILABEL 10, 186, 25, 44
#define _PWMLABEL 10, 240, 25, 44

#define _ERMUP 35, 1, 746, 88
#define _ERMMID 35, 98, 746, 66
#define _AIDOWN 35, 186, 746, 44
#define _PWM 35, 240, 746, 44

#define DI_LENGTH 32
#define DO_LENGTH 16
#define AX_LENGTH 4

enum RIOMS
{
    RIOM1 = 0,
    RIOM2,
    RIOM3,
    RIOM4,
    RIOM5,
    RIOM6,
    ERM1,
    ERM2,
    Back
};

IOSignalsPage::IOSignalsPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::IOSignalsPage)
{
    ui->setupUi(this);

    this->riomButtons = new QButtonGroup;
    this->riomButtons->addButton(ui->btnRIOM1, RIOM1);
    this->riomButtons->addButton(ui->btnRIOM2, RIOM2);
    this->riomButtons->addButton(ui->btnRIOM3, RIOM3);
    this->riomButtons->addButton(ui->btnRIOM4, RIOM4);
    this->riomButtons->addButton(ui->btnRIOM5, RIOM5);
    this->riomButtons->addButton(ui->btnRIOM6, RIOM6);
    this->riomButtons->addButton(ui->btnERM1, ERM1);
    this->riomButtons->addButton(ui->btnERM2, ERM2);
    this->riomButtons->addButton(ui->btnBack, Back);

    this->riomDI1InfoTable = new QTableWidget(8, 12, this);
    this->riomDI2InfoTable = new QTableWidget(8, 12, this);
    this->riomDO1InfoTable = new QTableWidget(4, 12, this);
    this->riomDO2InfoTable = new QTableWidget(4, 12, this);
    this->riomAXInfoTable = new QTableWidget(2, 6, this);

    this->ERMDITable = new QTableWidget(4,12,this);
    this->ERMDOTable = new QTableWidget(3,12,this);
    this->ERMAIOTable = new QTableWidget(2,6,this);
    this->PWMTable = new QTableWidget(2,6,this);

    this->initialView();
    this->riomDI1InfoTable->setGeometry(_DIUP);
    this->riomDI2InfoTable->setGeometry(_DIMID);
    this->riomDO1InfoTable->setGeometry(_DOUP);
    this->riomDO2InfoTable->setGeometry(_DOMID);
    this->riomAXInfoTable->setGeometry(_AXDOWN);

    ui->labelDI1->setGeometry(_DIUPLABEL);
    ui->labelDI2->setGeometry(_DIMID);
    ui->labelDO1->setGeometry(_DOUPLABEL);
    ui->labelDO2->setGeometry(_DIMIDLABEL);
    ui->labelAX->setGeometry(_AXDOWNLABEL);

    ui->labelDI1->show();
    ui->labelDI2->show();

    this->riomDI1InfoTable->show();
    this->riomDI2InfoTable->show();

    this->currentVehicle = RIOM1;

    this->listDI<< QString("IN1") << QString("IN2") << QString("IN3") << QString("IN4") << QString("IN5") << QString("IN6")
            << QString("IN7") << QString("IN8") << QString("IN9") << QString("IN10") << QString("IN11") << QString("IN12")
            << QString("IN13") << QString("IN14") << QString("IN15") << QString("IN16") << QString("IN17") << QString("IN18")
            << QString("IN19") << QString("IN20") << QString("IN21") << QString("IN22") << QString("IN23") << QString("IN24")
            << QString("IN25") << QString("IN26") << QString("IN27") << QString("IN28") << QString("IN29") << QString("IN30")
            << QString("IN31") << QString("IN32");

    this->listDO << QString("OUT1") << QString("OUT2") << QString("OUT3") << QString("OUT4") << QString("OUT5") << QString("OUT6")
            << QString("OUT7") << QString("OUT8") << QString("OUT9") << QString("OUT10") << QString("OUT11") << QString("OUT12")
            << QString("OUT13") << QString("OUT14") << QString("OUT15") << QString("OUT16");

    this->listAX<< QString("AIN1") << QString("AIN2") << QString("AIN3") << QString("AIN4");

    this->ermDI << QString("IN1") << QString("IN2") << QString("IN3") << QString("IN4") << QString("IN5") << QString("IN6")
            << QString("IN7") << QString("IN8") << QString("IN9") << QString("IN10") << QString("IN11") << QString("IN12")
            << QString("IN13") << QString("IN14");

    this->ermDO << QString("OUT1") << QString("OUT2") << QString("OUT3") << QString("OUT4") << QString("OUT5") << QString("OUT6")
            << QString("OUT7") << QString("OUT8") << QString("OUT9") << QString("OUT10");

    this->ermAIO << QString("AI1") << QString("AI2") << QString("AO1") << QString("AO2");
    this->ermPWM << QString("PWM1") << QString("PWM2") << QString("PWM3") << QString("PWM4");

    this->r1di1List << "HCM1制动施加" << "保留" << "保留" << "保留" << "按下蘑菇按钮" << "直接供电" << "门环路状态隔离" << "保留"
            << "牵引手柄在EB位" << "Deadman装置正常" << "Deadman装置未隔离" << "打开后雾灯" << "保留" << "保留" << "保留" << "施加撒沙"
            << "保留" << "保留" << "集控关门" << "保留" << "保留" << "牵引手柄供电正常" << "ATC切除" << "打开客室照明"
            << "司机钥匙在N位" << "司机钥匙在P位" << "司机钥匙在N位NM" << "司机钥匙在SM位" << "清扫钥匙在P位" << "降弓" << "升弓" << "保留";

    this->r1di2List << "选择开左侧门" << "选择开右侧门" << "门缓解" << "强迫关门" << "开右门命令" << "复位紧急解锁手柄" << "保留" << "除霜请求"
            << "挡风喷水" << "雨刷间歇模式" << "轮缘润滑命令" << "开左门命令" << "保留" << "保留" << "保留" << "隔离溜车检测"
            << "保留" << "保留" << "HCM3被隔离" << "BCU2被隔离" << "HCM1被隔离" << "保留" << "保留" << "保留"
            << "保留" << "保留" << "保留" << "保留" << "零速旁路按钮操作" << "打开司机室门" << "保留" << "保留";

    this->r6di1List << "保留" << "保留" << "保留" << "保留" << "按下蘑菇按钮" << "直接供电" << "门环路状态隔离" << "保留"
            << "牵引手柄在EB位" << "Deadman装置正常" << "Deadman装置未隔离" << "打开后雾灯" << "保留" << "保留" << "保留" << "施加撒沙"
            << "保留" << "保留" << "集控关门" << "保留" << "进入无电区" << "牵引手柄供电正常" << "ATC切除" << "打开客室照明"
            << "司机钥匙在N位" << "司机钥匙在P位" << "司机钥匙在N位NM" << "司机钥匙在SM位" << "清扫钥匙在P位" << "降弓" << "升弓" << "保留";

    this->r6di2List << "选择开左侧门" << "选择开右侧门" << "门缓解" << "强迫关门" << "开右门命令" << "复位紧急解锁手柄" << "保留" << "除霜请求"
            << "挡风喷水" << "雨刷间歇模式" << "轮缘润滑命令" << "开左门命令" << "保留" << "保留" << "保留" << "隔离溜车检测"
            << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留"
            << "保留" << "保留" << "保留" << "保留" << "零速旁路按钮操作" << "打开司机室门" << "保留" << "保留";

    this->r2di1List << "牵引列车线得电" << "前向列车线得电" << "后向列车线得电" << "被救援车安全环路建立" << "非制动列车线得电" << "保留" << "检测到溜车" << "司机室未激活"
            << "司机室激活" << "无高压故障" << "10/11门紧急手柄激活" << "9/12门紧急手柄激活" << "保留" << "保留" << "打开客室照明" << "沙箱空压机启动"
            << "保留" << "牵引手柄牵引低位" << "牵引手柄牵引高位" << "牵引手柄在非牵引位" << "牵引手柄在惰行位" << "牵引手柄在MSB位" << "浮电源供电正常" << "安全环路建立"
            << "紧急环路建立" << "站台区施加MSB" << "被救援车安全环路建立" << "保留" << "Deadman装置激活" << "Deadman装置释放监视" << "Deadman装置按压监视" << "保留";

    this->r5di1List << "BCU2无重故障" << "BCU2制动施加" << "BCU2制动缓解" << "检测到高压" << "BCU2无轻故障" << "BCU2检测到滑行" << "BCU2撒沙请求" << "司机室未激活"
            << "司机室激活" << "无高压故障" << "10/11门紧急手柄激活" << "9/12门紧急手柄激活" << "保留" << "保留" << "打开客室照明" << "沙箱空压机启动"
            << "牵引继电器得电" << "牵引手柄牵引低位" << "牵引手柄牵引高位" << "牵引手柄在非牵引位" << "牵引手柄在惰行位" << "牵引手柄在MSB位" << "站台区检测" << "安全环路建立"
            << "紧急环路建立" << "站台区施加MSB" << "门环路隔离" << "保留" << "Deadman装置激活" << "Deadman装置释放监视" << "Deadman装置按压监视" << "门环路建立";

    this->r2di2List << "磁轨制动施加" << "保留" << "保留" << "ERM零速继电器得电" << "ERM检测速度小于2km/h" << "TBCU检测速度小于2km/h" << "保留" << "司机室空调制冷/热正常"
            << "ERM磁轨制动继电器得电" << "保留" << "联挂端" << "司机室空调通风正常" << "信号系统请求最大常用制动" << "保留" << "TBCU检测速度大于13km/h" << "HCM制动缓解"
            << "HCM1/HCM3制动隔离" << "保留" << "被救援车制动全缓解" << "保留" << "HCM1/HCM3无重大故障" << "TCMS控制HCM" << "保留" << "保留"
            << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留";

    this->r5di2List << "磁轨制动施加" << "磁轨制动施加" << "保留" << "ERM零速继电器得电" << "ERM检测速度小于2km/h" << "TBCU检测速度小于2km/h" << "ERM工作正常" << "司机室空调制冷/热正常"
            << "ERM磁轨制动继电器得电" << "施加轮缘润滑" << "联挂端" << "司机室空调通风正常" << "信号系统请求最大常用制动" << "保留" << "TBCU检测速度大于13km/h" << "HCM制动缓解"
            << "HCM1/HCM3制动隔离" << "BCU2制动隔离" << "被救援车制动全缓解" << "保留" << "HCM1/HCM3无重大故障" << "TCMS控制HCM" << "保留" << "HCM3制动施加"
            << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留";

    this->r3diList << "手动施加磁轨制动" << "24V正常" << "保留" << "保留" << "库插位" << "保留" << "保留" << "保留"
            << "保留" << "控制器故障" << "AC2正常" << "AC1故障" << "AC2故障" << "检测到高压" << "充电机故障" << "AC1正常"
            << "保留" << "MIP开门请求" << "门控器供电正常" << "客室1/2通风正常" << "客室1/2空调正常" << "4/5门紧急手柄激活" << "3/6门紧急手柄激活" << "保留"
            << "保留" << "保留" << "保留" << "2/7门紧急手柄激活" << "1/8门紧急手柄激活" << "保留" << "保留" << "保留";

    this->r4diList << "HSCB闭合" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留"
            << "蓄电池熔断器正常" << "受电弓升起" << "受电弓降下" << "受电弓锁闭" << "火警" << "检测到高压" << "冲电机故障" << "检测到高压"
            << "站台区检测" << "MIP开门请求" << "门控器供电正常" << "客室1/2通风正常" << "客室1/2空调正常" << "4/5门紧急手柄激活" << "3/6门紧急手柄激活" << "保留"
            << "保留" << "保留" << "保留" << "2/7门紧急手柄激活" << "1/8门紧急手柄激活" << "保留" << "保留" << "保留";

    this->r1do1List << "保留" << "保留" << "保留" << "保留" << "高压指示灯亮" << "车头右转向灯" << "车头左转向灯" << "雾灯亮指示"
            << "车头/车侧左转向" << "左侧门开指示灯" << "强迫关门指示灯" << "右侧门开指示灯" << "轮缘润滑指示灯亮" << "门开指示灯亮" << "保留" << "DDU报警";

    this->r6do1List << "保留" << "保留" << "保留" << "保留" << "高压指示灯亮" << "车头右转向灯" << "车头左转向灯" << "雾灯亮指示"
            << "车头/车侧左转向" << "左侧门开指示灯" << "强迫关门指示灯" << "右侧门开指示灯" << "轮缘润滑指示灯亮" << "门开指示灯亮" << "保留" << "DDU报警";

    this->r1do2List << "车头/车侧右转向" << "延迟休眠指示灯亮" << "降弓指示灯亮" << "限速指示灯亮" << "保留" << "保留" << "保留" << "保留"
            << "保留" << "保留" << "右转向" << "左转向" << "雨刷控制" << "除雾指令" << "撒沙指示灯亮" << "保留";

    this->r6do2List << "车头/车侧右转向" << "延迟休眠指示灯亮" << "降弓指示灯亮" << "限速指示灯亮" << "保留" << "保留" << "保留" << "保留"
            << "保留" << "保留" << "右转向" << "左转向" << "雨刷控制" << "除雾指令" << "撒沙指示灯亮" << "保留";

    this->r2do1List << "客室灯减载" << "打开客室灯照明" << "保留" << "断开HSCB" << "保留" << "保留" << "HSCB闭合指令" << "保留"
            << "保留" << "保留" << "保留" << "后视镜加热" << "牵引允许" << "超速报警" << "门紧急解锁报警" << "保留";

    this->r5do1List << "客室灯减载" << "打开客室灯照明" << "保留" << "保留" << "受电弓操作允许" << "保留" << "HSCB闭合指令" << "轮缘润滑施加"
            << "保留" << "保留" << "保留" << "后视镜加热" << "牵引允许" << "超速报警" << "门紧急解锁报警" << "保留";

    this->r2do2List << "沙箱空压机工作" << "撒沙指令" << "沙箱空压机排水阀工作" << "撒沙加热" << "制动指令线1得电" << "制动指令线2得电" << "制动指令线3得电" << "制动指令线4得电"
            << "保留" << "保留" << "保留" << "保留" << "保留" << "司机室空调关闭" << "保留" << "列车制动大故障指示灯";

    this->r5do2List << "沙箱空压机工作" << "撒沙指令" << "沙箱空压机排水阀工作" << "撒沙加热" << "制动指令线1得电" << "制动指令线2得电" << "制动指令线3得电" << "制动指令线4得电"
            << "保留" << "保留" << "保留" << "保留" << "磁轨制动施加" << "司机室空调关闭" << "保留" << "列车制动大故障指示灯";

    this->r3doList << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留"
            << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "MIP指示灯亮" << "保留";

    this->r4doList << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留" << "保留"
            << "升弓指令" << "降弓指令" << "保留" << "保留" << "保留" << "保留" << "MIP指示灯亮" << "保留";

    this->ax1List << "司控器级位信号" << "保留" << "保留" << "保留" ;
    this->ax2List << "蓄电池电压" << "列车载荷" << "保留" << "保留" ;

    this->ermdiList << "" << "" << "" << "" << "" << "" << "" << ""
            << "" << "" << "" << "" << "" << "" ;
    this->ermdoList << "" << "" << "" << "" << "" << "" << "" << ""
            << "" << "";
    this->ermaxList << "" << "" << "" << "" ;
    this->ermPwmList << "" << "" << "" << "" ;

    connect(this->riomButtons, SIGNAL(buttonClicked(int)), this, SLOT(onRiomBtnClicked(int)));
    this->onRiomBtnClicked(RIOM1);

    this->page = 1;
    this->totalPage = 2;
    this->setIONavigatorStyle(false, true, this->totalPage, this->page);
    this->updateButtons(RIOM1);
}

IOSignalsPage::~IOSignalsPage()
{
    delete ui;
}

void IOSignalsPage::updateButtons(int currentVehicle)
{
    this->riomButtons->button(RIOM1)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(RIOM2)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(RIOM3)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(RIOM4)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(RIOM5)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(RIOM6)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(ERM1)->setStyleSheet(_RIOMUP);
    this->riomButtons->button(ERM2)->setStyleSheet(_RIOMUP);

   if (this->riomButtons->button(currentVehicle))
   {
    this->riomButtons->button(currentVehicle)->setStyleSheet(_RIOMDOWN);
   }
   else
   {
    //_LOG  << "is not in the group;";
   }
}

/**
@brief:setNavigator style.
@param:
enablePre:true: enable preButton; false: disable preButton;
enableNext:like enablePre;
totalPage:total pages;
page:set page number;
*/
void IOSignalsPage::setIONavigatorStyle(bool enablePre, bool enableNext, int totalPage, int page)
{
    ui->btnNextPage->setEnabled(enableNext);
    ui->btnPrePage->setEnabled(enablePre);
    ui->labelPage->setText(QString::number(page) + "/" + QString::number(totalPage));
}


bool IOSignalsPage::ifValid(QTableWidget *table, QList<QString> channelNoList, QList<QString> channelNameList)
{
    if (NULL == table)
    {
        //_LOG << "table is null or list size is not 32 or 16 :IOSignals_setTableView;";
        return false;
    }
    else if (channelNoList.size() != channelNameList.size())
    {
        //_LOG << "table is null or list size is not 32 or 16 :IOSignals_setTableView;";
        return false;
    }
    else if (channelNoList.size()!= 32 && channelNoList.size()!= 16 && channelNoList.size()!= 14 && channelNoList.size()!= 10)
    {
       // _LOG << "table is null or list size is not 32 or 16 or 14 or 10 :IOSignals_setTableView;";
        return false;
    }
    else
        return true;
}

void IOSignalsPage::setAxTableView(QTableWidget *table, QList<QString> channelNoList, QList<QString> axListName)
{
    int tempColumn = 0;
    for (int columnNo = 0; columnNo < table->columnCount(); columnNo ++)
    {
        tempColumn = columnNo % 3;
        switch (tempColumn)
        {
        case 0:
            table->setColumnWidth(columnNo, 50);
            break;

        case 1:
            table->setColumnWidth(columnNo, 175);
            break;

        case 2:
            table->setColumnWidth(columnNo, 130);
            break;

        default:
            logger()->error("table columns fault : IOSignals_setAxTableView; " + tempColumn);
            break;
        }
    }
    for (int row = 0; row < table->rowCount(); row ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            int itemColumn = column % 3;
            int itemChannel = column / 3;
            int listIndex = row * 2 + itemChannel;
            if (listIndex >= channelNoList.size())
                return;

            switch (itemColumn)
            {
            case 0:
                table->item(row, column)->setText(QString(channelNoList.at(listIndex)));
                break;

            case 1:
                table->item(row, column)->setText(QString(axListName.at(listIndex)));
                break;

            case 2:
                break;
            default:
                logger()->error("table columns fault :" + column);
            }
        }
    }
}

void IOSignalsPage::setTableView(QTableWidget *table, QList<QString> channelNoList, QList<QString> channelNameList)
{
    if (!this->ifValid(table, channelNoList, channelNameList))

    {
        logger()->error("table is null or list size is not 32 or 16 :IOSignals_setTableView;");
        return;
    }
    //display di tables
    if (channelNoList.size() == 32
        //erm di
        || channelNoList.size() == 14)
    {
        for (int columnNo = 0; columnNo < table->columnCount(); columnNo ++)
        {
            int tempColumn = columnNo % 3;
            switch (tempColumn)
            {
            case 0:
                table->setColumnWidth(columnNo, 45);
                break;

            case 1:
                table->setColumnWidth(columnNo, 120);
                break;

            case 2:
                table->setColumnWidth(columnNo, 21);
                break;

            default:
                logger()->error("table columns fault : IOSignals_setTableView;" + tempColumn);
            }
        }
    }
    //display DO tables
    else if (channelNoList.size() == 16
             //erm do list
             || channelNoList.size() == 10)
    {
        // set table columns width
        for (int columnNo = 0; columnNo < table->columnCount(); columnNo ++)
        {
            int tempColumn = columnNo % 3;
            switch (tempColumn)
            {
            case 0:
                table->setColumnWidth(columnNo, 49);
                break;

            case 1:
                table->setColumnWidth(columnNo, 116);
                break;

            case 2:
                table->setColumnWidth(columnNo, 19);
                break;
            default:
                logger()->error("table conlumns fault : IOSignals_setTableView;" + tempColumn);
            }
        }
    }

    // set rows' width and insert channel NO. and channel name
    for (int rows = 0; rows < table->rowCount(); rows ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            int itemColumn = column % 3;
            int itemChannel = column / 3;
            int listIndex = rows * 4 + itemChannel;

            if (listIndex >= channelNoList.size())
                return;
            if (NULL == table->item(rows, column))
            {
                logger()->info("table items at %1 and %2 is null at setTableView", rows, column);
                return;
            }

            switch (itemColumn)
            {
            case 0:
                table->item(rows, column)->setText(QString(channelNoList.at(listIndex)));
                break;

            case 1:
                table->item(rows, column)->setText(QString(channelNameList.at(listIndex)));
                break;

            case 2:
                break;
            default:
                logger()->error("table columns fault '%1':" , column);
            }
        }
    }
}

void IOSignalsPage::onRiomBtnClicked(int riomId)
{
    switch(riomId)
    {
    case Back:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uRecondition);
        emit this->changeNavigatorPage(uNavigator);
        break;

      case RIOM1:
        this->updateButtons(RIOM1);
        this->hideAllTable();
        this->currentVehicle = RIOM1;
        this->riomDI1InfoTable->setGeometry(_DIUP);
        this->riomDI2InfoTable->setGeometry(_DIMID);
        this->riomDO1InfoTable->setGeometry(_DOUP);
        this->riomDO2InfoTable->setGeometry(_DO2MID);
        this->riomAXInfoTable->setGeometry(_AXDOWN);

        ui->labelDI1->setGeometry(_DIUPLABEL);
        ui->labelDI2->setGeometry(_DIMIDLABEL);
        ui->labelDO1->setGeometry(_DOUPLABEL);
        ui->labelDO2->setGeometry(_DO2MIDLABEL);
        ui->labelAX->setGeometry(_AXDOWNLABEL);

        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r1di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r1di2List);
//        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r1do1List);
//        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r1do2List);
//        this->setAxTableView(this->ax1List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();

        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;

    case RIOM2:
        this->updateButtons(RIOM2);
        this->hideAllTable();
        this->currentVehicle = RIOM2;

        this->riomDI1InfoTable->setGeometry(_DIUP);
        this->riomDI2InfoTable->setGeometry(_DIMID);
        this->riomDO1InfoTable->setGeometry(_DOUP);
        this->riomDO2InfoTable->setGeometry(_DO2MID);
        this->riomAXInfoTable->setGeometry(_AXDOWN);

        ui->labelDI1->setGeometry(_DIUPLABEL);
        ui->labelDI2->setGeometry(_DIMIDLABEL);
        ui->labelDO1->setGeometry(_DOUPLABEL);
        ui->labelDO2->setGeometry(_DO2MIDLABEL);
        ui->labelAX->setGeometry(_AXDOWNLABEL);

        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r2di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r2di2List);

//        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r2do1List);
//        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r2do2List);
//        this->setAxTableView(this->ax2List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();

        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;

    case RIOM3:
        this->riomDI1InfoTable->setGeometry(_DIUP);
        this->riomDO1InfoTable->setGeometry(_DOMID);

        ui->labelDI1->setGeometry(_DIUPLABEL);
        ui->labelDO1->setGeometry(_DOMIDLABEL);

        this->updateButtons(RIOM3);
        this->hideAllTable();
        this->currentVehicle = RIOM3;
        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r3diList);
        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r3doList);

        this->riomDI1InfoTable->show();
        this->riomDO1InfoTable->show();

        ui->labelDI1->show();
        ui->labelDO1->show();

        this->setIONavigatorStyle(false, false, 1, 1);
        this->page = 1;
        break;

    case RIOM4:
        this->riomDI1InfoTable->setGeometry(_DIUP);
        this->riomDO1InfoTable->setGeometry(_DOMID);

        ui->labelDI1->setGeometry(_DIUPLABEL);
        ui->labelDO1->setGeometry(_DOMIDLABEL);

        this->updateButtons(RIOM4);
        this->hideAllTable();
        this->currentVehicle = RIOM4;
        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r4diList);
        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r4doList);

        this->riomDI1InfoTable->show();
        this->riomDO1InfoTable->show();

        ui->labelDI1->show();
        ui->labelDO1->show();

        this->setIONavigatorStyle(false, false, 1, 1);
        this->page = 1;
        break;

    case RIOM5:
        this->updateButtons(RIOM5);
        this->hideAllTable();
        this->currentVehicle = RIOM5;

        this->riomDI1InfoTable->setGeometry(_DIUP);
        this->riomDI2InfoTable->setGeometry(_DIMID);
        this->riomDO1InfoTable->setGeometry(_DOUP);
        this->riomDO2InfoTable->setGeometry(_DO2MID);
        this->riomAXInfoTable->setGeometry(_AXDOWN);

        ui->labelDI1->setGeometry(_DIUPLABEL);
        ui->labelDI2->setGeometry(_DIMIDLABEL);
        ui->labelDO1->setGeometry(_DOUPLABEL);
        ui->labelDO2->setGeometry(_DO2MIDLABEL);
        ui->labelAX->setGeometry(_AXDOWNLABEL);

        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r5di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r5di2List);

//        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r5do1List);
//        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r5do2List);
//        this->setAxTableView(this->ax2List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();

        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;

    case RIOM6:
        this->updateButtons(RIOM6);
        this->hideAllTable();
        this->currentVehicle = RIOM6;
        this->riomDI1InfoTable->setGeometry(_DIUP);
        this->riomDI2InfoTable->setGeometry(_DIMID);
        this->riomDO1InfoTable->setGeometry(_DOUP);
        this->riomDO2InfoTable->setGeometry(_DO2MID);
        this->riomAXInfoTable->setGeometry(_AXDOWN);

        ui->labelDI1->setGeometry(_DIUPLABEL);
        ui->labelDI2->setGeometry(_DIMIDLABEL);
        ui->labelDO1->setGeometry(_DOUPLABEL);
        ui->labelDO2->setGeometry(_DO2MIDLABEL);
        ui->labelAX->setGeometry(_AXDOWNLABEL);

        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r6di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r6di2List);
//        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r6do1List);
//        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r6do2List);
//        this->setAxTableView(this->ax1List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();

        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;
    case ERM1:

        this->ERMDITable->setGeometry(_ERMUP);
        this->ERMDOTable->setGeometry(_ERMMID);
        this->ERMAIOTable->setGeometry(_AIDOWN);
        this->PWMTable->setGeometry(_PWM);

        ui->labelERMDI->setGeometry(_ERMUPLABEL);
        ui->labelERMDO->setGeometry(_ERMMIDLABEL);
        ui->labelAIO->setGeometry(_AILABEL);
        ui->labelPWM->setGeometry(_PWMLABEL);

        this->updateButtons(ERM1);
        this->hideAllTable();
        this->currentVehicle = ERM1;
        this->setTableView(this->ERMDITable, this->ermDI, this->ermdiList);
        this->setTableView(this->ERMDOTable, this->ermDO, this->ermdoList);
        this->setAxTableView(this->ERMAIOTable, this->ermAIO, this->ermaxList);
        this->setAxTableView(this->PWMTable, this->ermPWM, this->ermPwmList);

        this->ERMDITable->show();
        this->ERMDOTable->show();
        this->ERMAIOTable->show();
        this->PWMTable->show();

        ui->labelERMDI->show();
        ui->labelERMDO->show();
        ui->labelAIO->show();
        ui->labelPWM->show();



        this->setIONavigatorStyle(false, false, 1, 1);
        this->page = 1;
        break;
    case ERM2:

        this->ERMDITable->setGeometry(_ERMUP);
        this->ERMDOTable->setGeometry(_ERMMID);
        this->ERMAIOTable->setGeometry(_AIDOWN);
        this->PWMTable->setGeometry(_PWM);

        ui->labelERMDI->setGeometry(_ERMUPLABEL);
        ui->labelERMDO->setGeometry(_ERMMIDLABEL);
        ui->labelAIO->setGeometry(_AILABEL);
        ui->labelPWM->setGeometry(_PWMLABEL);

        this->updateButtons(ERM2);
        this->hideAllTable();
        this->currentVehicle = ERM2;
        this->setTableView(this->ERMDITable, this->ermDI, this->ermdiList);
        this->setTableView(this->ERMDOTable, this->ermDO, this->ermdoList);
        this->setAxTableView(this->ERMAIOTable, this->ermAIO, this->ermaxList);
        this->setAxTableView(this->PWMTable, this->ermPWM, this->ermPwmList);

        this->ERMDITable->show();
        this->ERMDOTable->show();
        this->ERMAIOTable->show();
        this->PWMTable->show();

        ui->labelERMDI->show();
        ui->labelERMDO->show();
        ui->labelAIO->show();
        ui->labelPWM->show();

        this->setIONavigatorStyle(false, false, 1, 1);
        this->page = 1;
        break;
    default:break;
    }
}

void IOSignalsPage::initialView()
{
    this->initialTableView(this->riomDI1InfoTable);
    this->initialTableView(this->riomDI2InfoTable);
    this->initialTableView(this->riomDO1InfoTable);
    this->initialTableView(this->riomDO2InfoTable);
    this->initialTableView(this->riomAXInfoTable);
    this->initialTableView(this->ERMDITable);
    this->initialTableView(this->ERMDOTable);
    this->initialTableView(this->ERMAIOTable);
    this->initialTableView(this->PWMTable);
    this->hideAllTable();
}

void IOSignalsPage::hideAllTable()
{
    this->riomDI1InfoTable->hide();
    this->riomDI2InfoTable->hide();
    this->riomDO1InfoTable->hide();
    this->riomDO2InfoTable->hide();
    this->riomAXInfoTable->hide();
    this->ERMDITable->hide();
    this->ERMDOTable->hide();
    this->ERMAIOTable->hide();
    this->PWMTable->hide();

    ui->labelDI1->hide();
    ui->labelDI2->hide();
    ui->labelDO1->hide();
    ui->labelDO2->hide();
    ui->labelAX->hide();
    ui->labelERMDI->hide();
    ui->labelERMDO->hide();
    ui->labelAIO->hide();
    ui->labelPWM->hide();

    this->cleanContent(this->riomDI1InfoTable);
    this->cleanContent(this->riomDI2InfoTable);
    this->cleanContent(this->riomDO1InfoTable);
    this->cleanContent(this->riomDO2InfoTable);
    this->cleanContent(this->riomAXInfoTable);
    this->cleanContent(this->ERMDITable);
    this->cleanContent(this->ERMDOTable);
    this->cleanContent(this->ERMAIOTable);
    this->cleanContent(this->PWMTable);
}

void IOSignalsPage::cleanContent(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null in IOSignals::cleanContent;");
        return;
    }

    for (int row = 0; row < table->rowCount(); row ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            if (NULL == table->item(row, column))
            {
                logger()->error("tableItem at '%1', '%2' is null in IOSignalsPage::cleanContent",row ,column);
                return;
            }
            table->item(row, column)->setText("");
        }
    }
}

void IOSignalsPage::initialTableView(QTableWidget *table)
{
    if (NULL == table)
    {
        logger()->error("table is null in IOSignalsPage::initialTableView;");
        return;
    }

    table->hide();
    table->horizontalHeader()->hide();
    table->verticalHeader()->hide();
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->horizontalHeader()->setStretchLastSection(true);
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->verticalHeader()->setStretchLastSection(true);
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    table->setFocusPolicy(Qt::NoFocus);

    for (int row = 0; row < table->rowCount(); row ++)
    {
        for (int column = 0; column < table->columnCount(); column ++)
        {
            QTableWidgetItem* tableItem = new QTableWidgetItem("");
            tableItem->setFlags(Qt::ItemIsEditable);
            table->setItem(row, column ,tableItem);
        }
    }
    //table->setStyleSheet(_TABLESTYLE);
}

void IOSignalsPage::updatePage(){
    QList<bool> states;
    QList<QString> axStates;

    if (RIOM1 == this->currentVehicle)
    {
        //riom1 di1
        states << this->database->RM1CT_DX1DI1BCE1BrkAppl_B1 << false << false << false
                << this->database->RM1CT_DX1DI5MushroomSB_B1 << this->database->RM1CT_DX1DI6DirectPwrSplySw_B1 << this->database->RM1CT_DX1DI7DrsCtrIsolSw_B1 << false
                << this->database->RM1CT_DX1DI9EBHandle_B1 << this->database->RM1CT_DX1DI10DdManCtrl_B1 << this->database->RM1CT_DX1DI11DdManActive_B1 << this->database->RM1CT_DX1DI12PbRearFogLight_B1
                << false << false << false << this->database->RM1CT_DX1DI16PbSand_B1
                << false << false << this->database->RM1CT_DX1DI19PbDoorClosing_B1 << false
                << false << this->database->RM1CT_DX1DI22McContactCBOK_B1 << this->database->RM1CT_DX1DI23ATCCutoff_B1 << this->database->RM1CT_DX1DI24PBLightRoom1_B1
                << this->database->RM1CT_DX1DI25DrvSwPosN_B1 << this->database->RM1CT_DX1DI26DrvSwPosP_B1 << this->database->RM1CT_DX1DI27DrvSwPosNM_B1 << this->database->RM1CT_DX1DI28DrvSwPosSM_B1
                << this->database->RM1CT_DX1DI29PrpClean_B1 << this->database->RM1CT_DX1DI30LowPantoPB_B1 << this->database->RM1CT_DX1DI31RaisePantoPB_B1 << false;
        this->updateDio(this->riomDI1InfoTable, states);
        states.clear();

        //riom1 di2
        states << this->database->RM1CT_DX2DI1PbLftSideSlt_B1 << this->database->RM1CT_DX2DI2PbRgtSideSlt_B1 << this->database->RM1CT_DX2DI3PbRelease_B1 << this->database->RM1CT_DX2DI4PbForcedClosure_B1
               << this->database->RM1CT_DX2DI5PBRightOpen_B1 << this->database->RM1CT_DX2DI6PBResetUnlockHdl_B1 << false << this->database->RM1CT_DX2DI8PbDefrost_B1
               << this->database->RM1CT_DX2DI9PbWasher_B1 << this->database->RM1CT_DX2DI10SwIntermittent_B1 << this->database->RM1CT_DX2DI11PbLubr_B1 << this->database->RM1CT_DX2DI12PBLeftOpen_B1
               << false << false << false << this->database->RM1CT_DX2DI16RollbackSw_B1
               << false << false << this->database->RM1CT_DX2DI19BCE3BrkIsoCtrl_B1 << this->database->RM1CT_DX2DI20BCE2BrkIsoCtrl_B1
               << this->database->RM1CT_DX2DI21BCE1BrkIsoCtrl_B1 << false << false << false
               << false << false << false << false
               << this->database->RM1CT_DX2DI29Zerospeedbypass_B1 << this->database->RM1CT_DX2DI30PbDrvDoorOpening_B1 << false << false;
        this->updateDio(this->riomDI2InfoTable, states);
        states.clear();

        //riom1 do1
        states << false << false << false << false
               << this->database->CTRM1_DX1DO5HvPresLight_B1 << this->database->CTRM1_DX1DO6RightTurnWhite_B1 << this->database->CTRM1_DX1DO7LeftTurnWhite_B1 << this->database->CTRM1_DX1DO8CmdRearFogLight_B1
               << this->database->CTRM1_DX1DO9LeftTurn_B1 << this->database->CTRM1_DX1DO10LeftOpenLight_B1 << this->database->CTRM1_DX1DO11ForcedClosure_B1 << this->database->CTRM1_DX1DO12RightOpenLight_B1
               << this->database->CTRM1_DX1DO13RqstLightOn_B1 << this->database->CTRM1_DX1DO14DoorOpenLight_B1 << false << this->database->CTRM1_DX1DO16DDUAlarm2_B1;
        this->updateDio(this->riomDO1InfoTable, states);
        states.clear();

        //riom1 do2
        states << this->database->CTRM1_DX2DO1RightTurn_B1 << this->database->CTRM1_DX2DO2DDePrpLight_B1 << this->database->CTRM1_DX2DO3LowPantoLight_B1 << this->database->CTRM1_DX2DO4SpeedLimitLight_B1
               << false << false << false << false
               << false << false << this->database->CTRM1_DX2DO11RightTurnCam_B1 << this->database->CTRM1_DX2DO12LeftTurnCam_B1
               << this->database->CTRM1_DX2DO13CmdWiper_B1 << this->database->CTRM1_DX2DO14CmdDefrost_B1 << this->database->CTRM1_DX2DO15SandLight_B1 << false;
        this->updateDio(this->riomDO2InfoTable, states);
        states.clear();

        //riom1 AX
        axStates << QString::number(this->database->RM1CT_AIMCEffort_U16) << "0" << "0" << "0";
        this->updateAx(this->riomAXInfoTable, axStates);
        axStates.clear();
    }
    else if (RIOM2 == this->currentVehicle)
    {
        //riom2 di1
        states << this->database->RM2CT_DX1DI1TractionTL_B1 << this->database->RM2CT_DX1DI2ForwardTL_B1 << this->database->RM2CT_DX1DI3ReverseTL_B1 << this->database->RM2CT_DX1DI4RlySBMUTP1_B1
               << this->database->RM2CT_DX1DI5NoBrakeTL_B1 << false << this->database->RM2CT_DX1DI7RollBack_B1 << this->database->RM2CT_DX1DI8NeutralisedCab_B1
               << this->database->RM2CT_DX1DI9CabInServ_B1 << this->database->RM2CT_DX1DI10NoHvErr_B1 << this->database->RM2CT_DX1DI11DCU10UnLockDoorHdl_B1 << this->database->RM2CT_DX1DI12DCU09UnLockDoorHdl_B1
               << false << false << this->database->RM2CT_DX2DI15TrBrTbs_B1 << this->database->RM2CT_DX1DI16CompRunning_B1
               << false << this->database->RM2CT_DX1DI18McTorqLow_B1 << this->database->RM2CT_DX1DI19McTorqHigh_B1 << this->database->RM2CT_DX1DI20McNoTraction_B1
               << this->database->RM2CT_DX1DI21McNeutral_B1 << this->database->RM2CT_DX1DI22McMaxBrake_B1 << this->database->RM2CT_DX1DI23FloatPwrSplyOK_B1 << this->database->RM2CT_DX1DI24RlySB_B1
               << this->database->RM2CT_DX1DI25RlyEB_B1 << this->database->RM2CT_DX1DI26MSBInPlatZone_B1 << this->database->RM2CT_DX1DI27RlySBMUTP2_B1 << false
               << this->database->RM2CT_DX1DI29DdManNoEmer_B1 << this->database->RM2CT_DX1DI30DdManRls_B1 << this->database->RM2CT_DX1DI31DdManApply_B1 << false;
        this->updateDio(this->riomDI1InfoTable, states);
        states.clear();

        //riom2 di2
        states << this->database->RM2CT_DX2DI1ApplTrBrk1Or3_B1 << false << false << this->database->RM2CT_DX2DI40kmhTmr_B1
               << this->database->RM2CT_DX2DI53kmhTmr_B1 << this->database->RM2CT_DX2DI63kmhTbs_B1 << false << this->database->RM2CT_DX2DI8VACCabOK_B1
               << this->database->RM2CT_DX2DI9TrBrTmr_B1 << false << this->database->RM2CT_DX2DI11CoupledCab_B1 << this->database->RM2CT_DX2DI12VACCabVentOK_B1
               << this->database->RM2CT_DX2DI13ATCMaxBr_B1 << false << this->database->RM2CT_DX2DI15TrBrTbs_B1 << this->database->RM2CT_DX2DI16BCE1BrkRel_B1
               << this->database->RM2CT_DX2DI17BCE1Or3BrkIsoLated_B1 << false << this->database->RM2CT_DX2DI19TowPushBrkIsol_B1 << false
               << this->database->RM2CT_DX2DI21BCE1Or3NoMajFltFc1_B1 << this->database->RM2CT_DX2DI22BCE1RedundBrkCtrl_B1 << false << false
               << false << false << false << false
               << false << false << false << false;
        this->updateDio(this->riomDI2InfoTable, states);
        states.clear();

        //riom2 do1
        states << this->database->CTRM2_DX1DO1ReducLightRoom_B1 << this->database->CTRM2_DX1DO2CompLightRoom_B1 << false << this->database->CTRM2_DX1DO4OpenHSCB_B1
               << false << false << this->database->CTRM2_DX1DO7CloseHSCB_B1 << false
               << false << false << false << this->database->CTRM2_DX1DO12BCAMHeating_B1
               << this->database->CTRM2_DX1DO13TractionAuth_B1 << this->database->CTRM2_DX1DO14OverSpeed_B1 << this->database->CTRM2_DX1DO15DoorUnlock_B1 << false;
        this->updateDio(this->riomDO1InfoTable, states);
        states.clear();
        // riom2 do2
        states << this->database->CTRM2_DX2DO1Comp1Ctrl_B1 << this->database->CTRM2_DX2DO2SAN1Sanding_B1 << this->database->CTRM2_DX2DO3DrainValve1Ctrl_B1 << this->database->CTRM2_DX2DO4SandHeating_B1
               << this->database->CTRM2_DX2DO5BCE1B1BrkSetPoint_B1 << this->database->CTRM2_DX2DO6BCE1B2BrkSetPoint_B1 << this->database->CTRM2_DX2DO7BCE1B3BrkSetPoint_B1 << this->database->CTRM2_DX2DO8BCE1B4BrkSetPoint_B1
               << false << false << false << false
               << false << this->database->CTRM2_DX2DO14CabClimOnOff_B1 << false << this->database->CTRM2_DX2DO16BrkMajFltLight_B1;
        this->updateDio(this->riomDO2InfoTable, states);
        states.clear();

        //riom2 ax
        axStates << QString::number(this->database->RM2CT_AILVMeasure_U16) << QString::number(this->database->RM2CT_AIBog1Load_U16) << "0" << "0";
        this->updateAx(this->riomAXInfoTable, axStates);
        axStates.clear();
    }
    else if (RIOM3 == this->currentVehicle)
    {
        //riom3 di1
        states << this->database->RM3CT_DX1DI1ManCtrTrBrk_B1 << this->database->RM3CT_DX1DI224VoltOK1_B1 << false << false
               << false << false << false << false
               << false << this->database->RM3CT_DX1DI10CtrlUnitFail1_B1 << this->database->RM3CT_DX1DI11AC2OK_B1 << this->database->RM3CT_DX1DI12AC1Fail_B1
               << this->database->RM3CT_DX1DI13AC2Fail_B1 << false << false << this->database->RM3CT_DX1DI16400VAFail1_B1
               << false << this->database->RM3CT_DX1DI18MIP1PbRequest_B1 << this->database->RM3CT_DX1DI19DCUPowerSupply1OK_B1 << this->database->RM3CT_DX1DI20RoomVentil1OK_B1
               << this->database->RM3CT_DX1DI21RoomHVAOK_B1 << this->database->RM3CT_DX1DI22DCU04UnLockDoorHdl_B1 << this->database->RM3CT_DX1DI23DCU03UnLockDoorHdl_B1 << false
               << false << false << false << this->database->RM3CT_DX1DI28DCUxUnLockDoorHdl_B1
               << this->database->RM3CT_DX1DI29DCUxUnLockDoorHdl_B1 << false << false << false;
        this->updateDio(this->riomDI1InfoTable, states);
        states.clear();

        //riom3 do1
        states << false << false << false << false
               << false << false << false << false
               << false << false << false << false
               << false << false << this->database->CTRM3_DX1DO15MIPLight_B1 << false;
        this->updateDio(this->riomDO1InfoTable, states);
        states.clear();

    }
    else if (RIOM4 == this->currentVehicle)
    {
        //riom4 di1
        states << this->database->RM4CT_DX1DI1HSCBClosed_B1 << false << false << false
               << this->database->RM4CT_DX1DI5AuxIsoSW_B1 << false << false << false
               << this->database->RM4CT_DX1DI9NFuseBattOK_B1 << this->database->RM4CT_DX1DI10PantoUp_B1 << this->database->RM4CT_DX1DI11PantoDown_B1 << this->database->RM4CT_DX1DI12PantoLocked_B1
               << this->database->RM4CT_DX1DI13DCDCFire_B1 << false << false << this->database->RM4CT_DX1DI16HvLinePres2_B1
               << this->database->RM4CT_DX1DI17PlatZone2_B1 << this->database->RM4CT_DX1DI18MIP1PbRequest_B1 << this->database->RM4CT_DX1DI19DCUPowerSupply1OK_B1 << this->database->RM4CT_DX1DI20RoomVentil1OK_B1
               << this->database->RM4CT_DX1DI21RoomHVAOK_B1 << this->database->RM4CT_DX1DI22DCU04UnLockDoorHdl_B1 << this->database->RM4CT_DX1DI23DCU03UnLockDoorHdl_B1 << false
               << false << false << false << this->database->RM4CT_DX1DI28DCUxUnLockDoorHdl_B1
               << this->database->RM4CT_DX1DI29DCUxUnLockDoorHdl_B1 << false << false << false;
        this->updateDio(this->riomDI1InfoTable, states);
        states.clear();

        //riom3 do1
        states << false << false << false << false
               << false << false << false << false
               << this->database->CTRM4_DX1DO9PantoRaising_B1 << this->database->CTRM4_DX1DO10PantoLowering_B1 << false << false
               << false << false << this->database->CTRM4_DX1DO15MIPLight_B1 << false;
        this->updateDio(this->riomDO1InfoTable, states);
        states.clear();
    }
    else if (RIOM5 == this->currentVehicle)
    {
        //riom5 di1
        states << this->database->RM5CT_DX1DI1BCE2NoMajFlt_B1 << this->database->RM5CT_DX1DI2BCE2BrkAppl_B1 << this->database->RM5CT_DX1DI3BCE2BrkRel_B1 << this->database->RM5CT_DX1DI4HvLinePres1_B1
               << this->database->RM5CT_DX1DI5BCE2NoMinFlt_B1 << this->database->RM5CT_DX1DI6BCE2Sliding_B1 << this->database->RM5CT_DX1DI7BCE2SandingRequrest_B1 << this->database->RM5CT_DX1DI8NeutralisedCab_B1
               << this->database->RM5CT_DX1DI9CabInServ_B1 << this->database->RM5CT_DX1DI10NoHvErr_B1 << this->database->RM5CT_DX1DI11DCU10UnLockDoorHdl_B1 << this->database->RM5CT_DX1DI12DCU09UnLockDoorHdl_B1
               << false << false << this->database->RM5CT_DX2DI15TrBrTbs_B1 << this->database->RM5CT_DX1DI16CompRunning_B1
               << this->database->RM5CT_DX1DI17TractionRly_B1 << this->database->RM5CT_DX1DI18McTorqLow_B1 << this->database->RM5CT_DX1DI19McTorqHigh_B1 << this->database->RM5CT_DX1DI20McNoTraction_B1
               << this->database->RM5CT_DX1DI21McNeutral_B1 << this->database->RM5CT_DX1DI22McMaxBrake_B1 << this->database->RM5CT_DX1DI23PlatZone1_B1 << this->database->RM2CT_DX1DI24RlySB_B1
               << this->database->RM5CT_DX1DI25RlyEB_B1 << this->database->RM5CT_DX1DI26MSBInPlatZone_B1 << this->database->RM5CT_DX1DI27DrsIsolRly_B1 << false
               << this->database->RM5CT_DX1DI29DdManNoEmer_B1 << this->database->RM5CT_DX1DI30DdManRls_B1 << this->database->RM5CT_DX1DI31DdManApply_B1 << this->database->RM5CT_DX1DI32DrsLoopRelay_B1;
        this->updateDio(this->riomDI1InfoTable, states);
        states.clear();

        //riom5 di2
        states << this->database->RM5CT_DX2DI1ApplTrBrk1Or3_B1 << this->database->RM5CT_DX2DI2ApplTrBrk2_B1 << false << this->database->RM5CT_DX2DI40kmhTmr_B1
               << this->database->RM5CT_DX2DI53kmhTmr_B1 << this->database->RM5CT_DX2DI63kmhTbs_B1 << this->database->RM5CT_DX2DI7TachoOK_B1 << this->database->RM5CT_DX2DI8VACCabOK_B1
               << this->database->RM5CT_DX2DI9TrBrTmr_B1 << this->database->RM5CT_DX2DI10CtrlLubrOn_B1 << this->database->RM5CT_DX2DI11CoupledCab_B1 << this->database->RM5CT_DX2DI12VACCabVentOK_B1
               << this->database->RM5CT_DX2DI13ATCMaxBr_B1 << false << this->database->RM5CT_DX2DI15TrBrTbs_B1 << this->database->RM5CT_DX2DI16BCE1BrkRel_B1
               << this->database->RM5CT_DX2DI17BCE1Or3BrkIsoLated_B1 << this->database->RM5CT_DX2DI18BCE2BrkIsoLated_B1 << this->database->RM5CT_DX2DI19TowPushBrkIsol_B1 << false
               << this->database->RM5CT_DX2DI21BCE1Or3NoMajFltFc1_B1 << this->database->RM5CT_DX2DI22BCE1RedundBrkCtrl_B1 << false << this->database->RM5CT_DX2DI24BCE3BrkAppl_B1
               << false << false << false << false
               << false << false << false << false;
        this->updateDio(this->riomDI2InfoTable, states);
        states.clear();

        //riom5 do1
        states << this->database->CTRM5_DX1DO1ReducLightRoom_B1 << this->database->CTRM5_DX1DO2CompLightRoom_B1 << false << false
               << this->database->CTRM5_DX1DO5AuthPanto_B1 << false << this->database->CTRM5_DX1DO7CloseHSCB_B1 << this->database->CTRM5_DX1DO8LubrOn_B1
               << false << false << false << this->database->CTRM5_DX1DO12BCAMHeating_B1
               << this->database->CTRM5_DX1DO13TractionAuth_B1 << this->database->CTRM5_DX1DO14OverSpeed_B1 << this->database->CTRM5_DX1DO15DoorUnlock_B1 << false;
        this->updateDio(this->riomDO1InfoTable, states);
        states.clear();
        // riom5 do2
        states << this->database->CTRM5_DX2DO1Comp1Ctrl_B1 << this->database->CTRM5_DX2DO2SAN1Sanding_B1 << this->database->CTRM5_DX2DO3DrainValve1Ctrl_B1 << this->database->CTRM5_DX2DO4SandHeating_B1
               << this->database->CTRM5_DX2DO5BCE1B1BrkSetPoint_B1 << this->database->CTRM5_DX2DO6BCE1B2BrkSetPoint_B1 << this->database->CTRM5_DX2DO7BCE1B3BrkSetPoint_B1 << this->database->CTRM5_DX2DO8BCE1B4BrkSetPoint_B1
               << false << false << false << false
               << this->database->CTRM5_DX2DO13BCE2ApplTrBrk_B1 << this->database->CTRM5_DX2DO14CabClimOnOff_B1 << false << this->database->CTRM5_DX2DO16BrkMajFltLight_B1;
        this->updateDio(this->riomDO2InfoTable, states);
        states.clear();

        //riom2 ax
        axStates << QString::number(this->database->RM5CT_AILVMeasure_U16) << QString::number(this->database->RM5CT_AIBog1Load_U16) << "0" << "0";
        this->updateAx(this->riomAXInfoTable, axStates);
        axStates.clear();
    }
    else if (RIOM6 == this->currentVehicle)
    {
        //riom6 di1
        states << false << false << false << false
                << this->database->RM6CT_DX1DI5MushroomSB_B1 << this->database->RM6CT_DX1DI6DirectPwrSplySw_B1 << this->database->RM6CT_DX1DI7DrsCtrIsolSw_B1 << false
                << this->database->RM6CT_DX1DI9EBHandle_B1 << this->database->RM6CT_DX1DI10DdManCtrl_B1 << this->database->RM6CT_DX1DI11DdManActive_B1 << this->database->RM6CT_DX1DI12PbRearFogLight_B1
                << false << false << false << this->database->RM6CT_DX1DI16PbSand_B1
                << false << false << this->database->RM6CT_DX1DI19PbDoorClosing_B1 << false
                << this->database->RM6CT_DX1DI21NoZone_B1 << this->database->RM6CT_DX1DI22McContactCBOK_B1 << this->database->RM6CT_DX1DI23ATCCutoff_B1 << this->database->RM6CT_DX1DI24PBLightRoom1_B1
                << this->database->RM6CT_DX1DI25DrvSwPosN_B1 << this->database->RM6CT_DX1DI26DrvSwPosP_B1 << this->database->RM6CT_DX1DI27DrvSwPosNM_B1 << this->database->RM6CT_DX1DI28DrvSwPosSM_B1
                << this->database->RM6CT_DX1DI29PrpClean_B1 << this->database->RM6CT_DX1DI30LowPantoPB_B1 << this->database->RM6CT_DX1DI31RaisePantoPB_B1 << false;

        this->updateDio(this->riomDI1InfoTable, states);
        states.clear();

        //riom6 di2
        states << this->database->RM6CT_DX2DI1PbLftSideSlt_B1 << this->database->RM6CT_DX2DI2PbRgtSideSlt_B1 << this->database->RM6CT_DX2DI3PbRelease_B1 << this->database->RM6CT_DX2DI4PbForcedClosure_B1
               << this->database->RM6CT_DX2DI5PBRightOpen_B1 << this->database->RM6CT_DX2DI6PBResetUnlockHdl_B1 << false << this->database->RM6CT_DX2DI8PbDefrost_B1
               << this->database->RM6CT_DX2DI9PbWasher_B1 << this->database->RM6CT_DX2DI10SwIntermittent_B1 << this->database->RM6CT_DX2DI11PbLubr_B1 << this->database->RM6CT_DX2DI12PBLeftOpen_B1
               << false << false << false << this->database->RM6CT_DX2DI16RollbackSw_B1
               << false << false << false << false
               << false << false << false << false
               << false << false << false << false
               << this->database->RM6CT_DX2DI29Zerospeedbypass_B1 << this->database->RM6CT_DX2DI30PbDrvDoorOpening_B1 << false << false;
        this->updateDio(this->riomDI2InfoTable, states);
        states.clear();

        //riom6 do1
        states << false << false << false << false
               << this->database->CTRM6_DX1DO5HvPresLight_B1 << this->database->CTRM6_DX1DO6RightTurnWhite_B1 << this->database->CTRM6_DX1DO7LeftTurnWhite_B1 << this->database->CTRM6_DX1DO8CmdRearFogLight_B1
               << this->database->CTRM6_DX1DO9LeftTurn_B1 << this->database->CTRM6_DX1DO10LeftOpenLight_B1 << this->database->CTRM6_DX1DO11ForcedClosure_B1 << this->database->CTRM6_DX1DO12RightOpenLight_B1
               << this->database->CTRM6_DX1DO13RqstLightOn_B1 << this->database->CTRM6_DX1DO14DoorOpenLight_B1 << false << this->database->CTRM6_DX1DO16DDUAlarm2_B1;
        this->updateDio(this->riomDO1InfoTable, states);
        states.clear();

        //riom6 do2
        states << this->database->CTRM6_DX2DO1RightTurn_B1 << this->database->CTRM6_DX2DO2DDePrpLight_B1 << this->database->CTRM6_DX2DO3LowPantoLight_B1 << this->database->CTRM6_DX2DO4SpeedLimitLight_B1
               << false << false << false << false
               << false << false << this->database->CTRM6_DX2DO11RightTurnCam_B1 << this->database->CTRM6_DX2DO12LeftTurnCam_B1
               << this->database->CTRM6_DX2DO13CmdWiper_B1 << this->database->CTRM6_DX2DO14CmdDefrost_B1 << this->database->CTRM6_DX2DO15SandLight_B1 << false;
        this->updateDio(this->riomDO2InfoTable, states);
        states.clear();

        //riom1 AX
        axStates << QString::number(this->database->RM6CT_AIMCEffort_U16) << "0" << "0" << "0";
        this->updateAx(this->riomAXInfoTable, axStates);
        axStates.clear();        
    }

    else if (ERM1 == this->currentVehicle)
    {
        //erm1

        states << this->database->DT1CT_ERMDI01_B1 << this->database->DT1CT_ERMDI02_B1 << this->database->DT1CT_ERMDI03_B1 << this->database->DT1CT_ERMDI04_B1
                << this->database->DT1CT_ERMDI05_B1 << this->database->DT1CT_ERMDI06_B1 << this->database->DT1CT_ERMDI07_B1 << this->database->DT1CT_ERMDI08_B1
                << this->database->DT1CT_ERMDI09_B1 << this->database->DT1CT_ERMDI10_B1 << this->database->DT1CT_ERMDI11_B1 << this->database->DT1CT_ERMDI12_B1
                << this->database->DT1CT_ERMDI13_B1 << this->database->DT1CT_ERMDI14_B1;
        this->updateDio(this->ERMDITable, states);
        states.clear();

        states << this->database->DT1CT_ERMDO01_B1 << this->database->DT1CT_ERMDO02_B1 << this->database->DT1CT_ERMDO03_B1 << this->database->DT1CT_ERMDO04_B1
                << this->database->DT1CT_ERMDO05_B1 << this->database->DT1CT_ERMDO06_B1 << this->database->DT1CT_ERMDO07_B1 << this->database->DT1CT_ERMDO08_B1
                << this->database->DT1CT_ERMDO09_B1 << this->database->DT1CT_ERMDO10_B1;
        this->updateDio(this->ERMDOTable, states);
        states.clear();

        axStates << QString::number(this->database->DT1CT_ERMAI1_U16) << QString::number(this->database->DT1CT_ERMAI2_U16)
                << QString::number(this->database->DT1CT_ERMAO1FedBk_U16) << QString::number(this->database->DT1CT_ERMAO2FedBk_U16);
        this->updateAx(this->ERMAIOTable, axStates);
        axStates.clear();

        axStates << QString::number(this->database->DT1CT_ERMPWM1_U16) << QString::number(this->database->DT1CT_ERMPWM2_U16)
                << QString::number(this->database->DT1CT_ERMPWM3_U16) << QString::number(this->database->DT1CT_ERMPWM4_U16);
        this->updateAx(this->PWMTable, axStates);
        axStates.clear();
    }
    else if (ERM2 == this->currentVehicle)
    {

        //erm2

        states << this->database->DT2CT_ERMDI01_B1 << this->database->DT2CT_ERMDI02_B1 << this->database->DT2CT_ERMDI03_B1 << this->database->DT2CT_ERMDI04_B1
                << this->database->DT2CT_ERMDI05_B1 << this->database->DT2CT_ERMDI06_B1 << this->database->DT2CT_ERMDI07_B1 << this->database->DT2CT_ERMDI08_B1
                << this->database->DT2CT_ERMDI09_B1 << this->database->DT2CT_ERMDI10_B1 << this->database->DT2CT_ERMDI11_B1 << this->database->DT2CT_ERMDI12_B1
                << this->database->DT2CT_ERMDI13_B1 << this->database->DT2CT_ERMDI14_B1;
        this->updateDio(this->ERMDITable, states);
        states.clear();

        states << this->database->DT2CT_ERMDO01_B1 << this->database->DT2CT_ERMDO02_B1 << this->database->DT2CT_ERMDO03_B1 << this->database->DT2CT_ERMDO04_B1
                << this->database->DT2CT_ERMDO05_B1 << this->database->DT2CT_ERMDO06_B1 << this->database->DT2CT_ERMDO07_B1 << this->database->DT2CT_ERMDO08_B1
                << this->database->DT2CT_ERMDO09_B1 << this->database->DT2CT_ERMDO10_B1;
        this->updateDio(this->ERMDOTable, states);
        states.clear();

        axStates << QString::number(this->database->DT2CT_ERMAI1_U16) << QString::number(this->database->DT2CT_ERMAI2_U16)
                << QString::number(this->database->DT2CT_ERMAO1FedBk_U16) << QString::number(this->database->DT2CT_ERMAO2FedBk_U16);
        this->updateAx(this->ERMAIOTable, axStates);
        axStates.clear();

        axStates << QString::number(this->database->DT2CT_ERMPWM1_U16) << QString::number(this->database->DT2CT_ERMPWM2_U16)
                << QString::number(this->database->DT2CT_ERMPWM3_U16) << QString::number(this->database->DT2CT_ERMPWM4_U16);
        this->updateAx(this->PWMTable, axStates);
        axStates.clear();
    }
}

void IOSignalsPage::updateDio(QTableWidget *table, QList<bool> &state)
{
    int tableRow, tableColumn;
    for(int i = 0; i < state.length(); i++)
    {
        tableRow = i / 4;
        tableColumn = 3*(i % 4) + 2;

        if (state.at(i))
        {
            table->item(tableRow, tableColumn)->setTextAlignment(Qt::AlignLeft);
            table->item(tableRow, tableColumn)->setTextColor(QColor(0 ,0, 0));
            table->item(tableRow, tableColumn)->setBackgroundColor(QColor(0 ,255, 0));
            table->item(tableRow, tableColumn)->setText(QString("1"));
        }
        else
        {
            table->item(tableRow, tableColumn)->setBackgroundColor(QColor(0 ,0, 0));
            table->item(tableRow, tableColumn)->setText(QString("0"));
        }

    }
}

void IOSignalsPage::updateAx(QTableWidget *table, QList<QString> &state)
{
    if (state.length() != AX_LENGTH)
    {
        logger()->info("the length ax not equal to %1", AX_LENGTH);

        return;
    }
    int tableRow, tableColumn;

    for(int i = 0; i < state.length(); i++)
    {
        tableRow = i / 2;
        tableColumn = 3*(i % 2) + 2;
        table->item(tableRow, tableColumn)->setText(state.at(i));
    }
}

void IOSignalsPage::on_btnPrePage_clicked()
{
    switch (this->currentVehicle)
    {
    case RIOM1:
        this->hideAllTable();
        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r1di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r1di2List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();
        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;

    case RIOM2:
        this->hideAllTable();
        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r2di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r2di2List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();
        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;

    case RIOM5:
        this->hideAllTable();
        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r5di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r5di2List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();
        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;

    case RIOM6:
        this->hideAllTable();
        this->setTableView(this->riomDI1InfoTable, this->listDI, this->r6di1List);
        this->setTableView(this->riomDI2InfoTable, this->listDI, this->r6di2List);

        this->riomDI1InfoTable->show();
        this->riomDI2InfoTable->show();

        ui->labelDI1->show();
        ui->labelDI2->show();

        this->setIONavigatorStyle(false, true, 2, 1);
        this->page = 1;
        break;    

    default:
        break;
    }
}

void IOSignalsPage::on_btnNextPage_clicked()
{
    switch (this->currentVehicle)
    {
    case RIOM1:
        this->hideAllTable();
        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r1do1List);
        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r1do2List);
        //this->setAxTableView(this->ax1List);
        this->setAxTableView(this->riomAXInfoTable, this->listAX, this->ax1List);
        this->riomDO1InfoTable->show();
        this->riomDO2InfoTable->show();
        this->riomAXInfoTable->show();

        ui->labelDO1->show();
        ui->labelDO2->show();
        ui->labelAX->show();
        this->setIONavigatorStyle(true, false, 2, 2);
        this->page = 2;
        break;
    case RIOM2:
        this->hideAllTable();
        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r2do1List);
        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r2do2List);
        //this->setAxTableView(this->ax2List);
        this->setAxTableView(this->riomAXInfoTable, this->listAX, this->ax2List);
        this->riomDO1InfoTable->show();
        this->riomDO2InfoTable->show();
        this->riomAXInfoTable->show();

        ui->labelDO1->show();
        ui->labelDO2->show();
        ui->labelAX->show();
        this->setIONavigatorStyle(true, false, 2, 2);
        this->page = 2;
        break;

    case RIOM5:
        this->hideAllTable();
        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r5do1List);
        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r5do2List);
        //this->setAxTableView(this->ax2List);
        this->setAxTableView(this->riomAXInfoTable, this->listAX, this->ax2List);

        this->riomDO1InfoTable->show();
        this->riomDO2InfoTable->show();
        this->riomAXInfoTable->show();

        ui->labelDO1->show();
        ui->labelDO2->show();
        ui->labelAX->show();
        this->setIONavigatorStyle(true, false, 2, 2);
        this->page = 2;
        break;

    case RIOM6:
        this->hideAllTable();
        this->setTableView(this->riomDO1InfoTable, this->listDO, this->r6do1List);
        this->setTableView(this->riomDO2InfoTable, this->listDO, this->r6do2List);
        //this->setAxTableView(this->ax1List);
        this->setAxTableView(this->riomAXInfoTable, this->listAX, this->ax1List);
        this->riomDO1InfoTable->show();
        this->riomDO2InfoTable->show();
        this->riomAXInfoTable->show();

        ui->labelDO1->show();
        ui->labelDO2->show();
        ui->labelAX->show();
        this->setIONavigatorStyle(true, false, 2, 2);
        this->page = 2;
        break;
    default:
        break;
    }
}


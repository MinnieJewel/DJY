#include "widget.h"
#include "ui_widget.h"
#include "crrcmvb.h"
#include "crrcfault.h"
#include "mybase.h"
#include "database.h"
#include "navigator.h"
#include "QTimer"
#include "header.h"
#include "runstatepage.h"
#include "vehiclelogo.h"
#include "networkpage.h"
#include "reconditionpage.h"
#include "loginpage.h"
#include "iosignalspage.h"
#include "bypasspage.h"
#include "settingpage.h"
#include "eventpage.h"
#include "settimepage.h"
#include "setairconditioner.h"
#include "dcdcpage.h"
#include "setvehicleno.h"
#include "settractionpage.h"
#include "tractioninfopage.h"
#include "sivinfopage.h"
#include "brakeinfopage.h"
//#include "airconditionerpage.h"
#include "versioninfopage.h"
#include "modifypwdpage.h"
#include "setwheelpage.h"
#include "sentsandpage.h"
#include "cumulatedatapage.h"
#include "lowpowertestpage.h"
#include "portdatapage.h"
#include "broadcastpage.h"
#include "speedtestpage.h"
#include "setvehiclelight.h"
#include "runstatehelppage.h"
#include "networkhelppage.h"
#include "setairconditionerhelp.h"
#include "h8.h"
#include "bypasshelppage.h"
#include "simulation.h"
#include "modeandspeedpage.h"
#include "mendmodepage.h"
#include "washmodepage.h"
#include "overtractpage.h"
#include "factorysetpage.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QDesktopWidget *desktop = QApplication::desktop();

    if (800 == desktop->width() && 600 == desktop->height())
    {
        this->showFullScreen();
    }
    else
    {
        this->move((desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2);
    }

    this->database = new Database();
    MyBase::database = this->database;
    crrcMvb = CrrcMvb::getCrrcMvb();

    this->timer = new QTimer;
    connect(timer, SIGNAL(timeout()),this, SLOT(updatePage()));
    if (CrrcFault::initCrrcFault("fault_type_DJY.db","fault_DB_DJY.db"))
    {
        crrcFault = CrrcFault::getCrrcFault();
    }
    else
    {
        logger()->error("故障文件初始化错误");
    }

    //add Widget objects for every page
    this->header = new Header(this);
    this->header->setMyBase(uTop, QString(""));
    this->header->installCrrcFault(crrcFault);

    this->navigator = new Navigator(this);
    this->navigator->setMyBase(uBottom, QString(""));

    this->runstateHelpPage = new RunstateHelpPage(this);
    this->runstateHelpPage->setMyBase(uMiddle, QString("帮助"));

    this->runStatePage = new RunStatePage(this);
    this->runStatePage->setMyBase(uWithVehicleMiddle, QString("运行"), uRunstateHelpPage);

    this->vehicleLogo = new VehicleLogo(this);
    this->vehicleLogo->setMyBase(uMiddle, QString(""));

    this->networkPage = new NetworkPage(this);
    this->networkPage->setMyBase(uWithVehicleMiddle, QString("网络"),uNetworkHelpPage);

    this->networkHelpPage = new NetworkHelpPage(this);
    this->networkHelpPage->setMyBase(uMiddle, QString("帮助"));


    this->reconditionPage = new ReconditionPage(this);
    this->reconditionPage->setMyBase(uMiddle, QString("检修"));

    this->loginPage = new LoginPage(this);
    this->loginPage->setMyBase(uMiddle, QString("登录"));

    this->ioSignalsPage = new IOSignalsPage(this);
    this->ioSignalsPage->setMyBase(uMiddle, QString("I/O"));

    this->byPassPage = new ByPassPage(this);
    this->byPassPage->setMyBase(uWithVehicleMiddle, QString("旁路"), uByPassHelpPage);

    this->byPassHelpPage = new ByPassHelpPage(this);
    this->byPassHelpPage->setMyBase(uMiddle, QString("帮助"));

    this->settingPage = new SettingPage(this);
    this->settingPage->setMyBase(uMiddle, QString("设置"));

    this->eventPage = new EventPage(this);
    this->eventPage->setMyBase(uMiddle, QString("事件"));
    this->eventPage->GetcrrcFaultInfo(crrcFault);

    this->setTimePage = new SetTimePage(this);
    this->setTimePage->setMyBase(uMiddle, QString("时间设置"));

    this->setAirconditioner = new SetAirconditioner(this);
    this->setAirconditioner->setMyBase(uWithVehicleMiddle, QString("空调设置"), uSetAirconditionerHelp);

    this->setAirconditionerHelp = new SetAirconditionerHelp(this);
    this->setAirconditionerHelp->setMyBase(uMiddle, QString("帮助"));

    this->dcdcPage = new DCDCPage(this);
    this->dcdcPage->setMyBase(uWithVehicleMiddle, QString("DCDC"));

    this->setVehicleNo = new SetVehicleNo(this);
    this->setVehicleNo->setMyBase(uMiddle, QString("车号线路号设置"));

    this->setTractionPage = new SetTractionPage(this);
    this->setTractionPage->setMyBase(uWithVehicleMiddle, QString("牵引设置"));

    this->tractionInfoPage = new TractionInfoPage(this);
    this->tractionInfoPage->setMyBase(uMiddle, QString("牵引信息"));

    this->sivInfoPage = new SIVInfoPage(this);
    this->sivInfoPage->setMyBase(uMiddle, QString("辅助信息"));

    this->brakeInfoPage = new BrakeInfoPage(this);
    this->brakeInfoPage->setMyBase(uMiddle, QString("制动信息"));

    //this->airConditionerPage = new AirConditionerPage(this);
    //this->airConditionerPage->setMyBase(uMiddle, QString("空调信息"));

    this->versionInfoPage = new VersionInfoPage(this);
    this->versionInfoPage->setMyBase(uMiddle, QString("版本信息"));

    this->modifyPwdPage = new ModifyPwdPage(this);
    this->modifyPwdPage->setMyBase(uMiddle, QString("修改密码"));

    this->setWheelPage = new SetWheelPage(this);
    this->setWheelPage->setMyBase(uWithVehicleMiddle, QString("轮径设置"));

    this->sentSandPage = new SentSandPage(this);
    this->sentSandPage->setMyBase(uMiddle, QString("撒沙"));

    this->cumulateDataPage = new CumulateDataPage(this);
    this->cumulateDataPage->setMyBase(uMiddle, QString("累积数据"));

    this->lowPowerTestPage = new LowPowerTestPage(this);
    this->lowPowerTestPage->setMyBase(uWithVehicleMiddle, QString("低功率测试"));

    this->portDataPage = new PortDataPage(this);
    this->portDataPage->setMyBase(uHuge, QString("端口数据"));
    this->portDataPage->installMvb(crrcMvb);

    this->broadcastPage = new BroadcastPage(this);
    this->broadcastPage->setMyBase(uMiddle, QString("PIS测试"));

    this->speedTestPage = new SpeedTestPage(this);
    this->speedTestPage->setMyBase(uMiddle, QString("加减速度测试"));

    this->setVehicleLight = new SetVehicleLight(this);
    this->setVehicleLight->setMyBase(uMiddle, QString("亮度设置"));

    this->networkHelpPage = new NetworkHelpPage(this);
    this->networkHelpPage->setMyBase(uMiddle, QString("帮助"));

    this->modeAndSpeedPage = new ModeAndSpeedPage(this);
    this->modeAndSpeedPage->setMyBase(uMiddle, QString("模式/限速"));

    this->mendModePage = new MendModePage(this);
    this->mendModePage->setMyBase(uMiddle, QString("检修模式"));

    this->washModePage = new WashModePage(this);
    this->washModePage->setMyBase(uMiddle, QString("洗车模式"));

    this->overTractPage = new OverTractPage(this);
    this->overTractPage->setMyBase(uMiddle, QString("过牵引模式"));

    this->factorySetPage = new FactorySetPage(this);
    this->factorySetPage->setMyBase(uMiddle, QString("出厂设置"));

    //init H8 config
    H8::initH8("/dev/ttyUSB_SC");
    H8::getH8()->setBrightness(0);

    this->simulation = new Simulation();
    this->simulation->hide();

    this->headerpages.insert(uHeader, this->header);
    this->navigatorPages.insert(uNavigator, this->navigator);
    this->vehicleLogoPages.insert(uVehicleLogo, this->vehicleLogo);
    this->middlePages.insert(uRunStatePage, this->runStatePage);
    this->middlePages.insert(uNetworkPage, this->networkPage);
    this->middlePages.insert(uRecondition, this->reconditionPage);
    this->middlePages.insert(uLoginPage, this->loginPage);
    this->middlePages.insert(uIOSignalsPage, this->ioSignalsPage);
    this->middlePages.insert(uByPassPage, this->byPassPage);
    this->middlePages.insert(uSettingPage, this->settingPage);
    this->middlePages.insert(uEventPage, this->eventPage);
    this->middlePages.insert(uSetTimePage, this->setTimePage);
    this->middlePages.insert(uSetAirconditioner, this->setAirconditioner);
    this->middlePages.insert(uDCDCPage, this->dcdcPage);
    this->middlePages.insert(uSetVehicleNo, this->setVehicleNo);
    this->middlePages.insert(uSetTractionPage, this->setTractionPage);
    this->middlePages.insert(uTractionInfoPage, this->tractionInfoPage);
    this->middlePages.insert(uSIVInfoPage, this->sivInfoPage);
    this->middlePages.insert(uBrakeInfoPage, this->brakeInfoPage);
    //this->middlePages.insert(uAirConditionerPage, this->airConditionerPage);
    this->middlePages.insert(uVersionInfoPage, this->versionInfoPage);
    this->middlePages.insert(uModifyPwdPage, this->modifyPwdPage);
    this->middlePages.insert(uSetWheelPage, this->setWheelPage);
    this->middlePages.insert(uSentSandPage, this->sentSandPage);
    this->middlePages.insert(uCumulateDataPage, this->cumulateDataPage);
    this->middlePages.insert(uLowPowerTestPage, this->lowPowerTestPage);
    this->middlePages.insert(uPortDataPage, this->portDataPage);
    this->middlePages.insert(uBroadcastPage, this->broadcastPage);
    this->middlePages.insert(uSpeedTestPage, this->speedTestPage);
    this->middlePages.insert(uSetVehicleLight, this->setVehicleLight);
    this->middlePages.insert(uRunstateHelpPage, this->runstateHelpPage);
    this->middlePages.insert(uNetworkHelpPage, this->networkHelpPage);
    this->middlePages.insert(uSetAirconditionerHelp, this->setAirconditionerHelp);
    this->middlePages.insert(uByPassHelpPage, this->byPassHelpPage);
    this->middlePages.insert(uModeAndSpeedPage, this->modeAndSpeedPage);
    this->middlePages.insert(uMendModePage, this->mendModePage);
    this->middlePages.insert(uWashModePage, this->washModePage);
    this->middlePages.insert(uOverTractPage, this->overTractPage);
    this->middlePages.insert(uFactorySetPage, this->factorySetPage);

    if (MainGetDefaultPara::configureValid())
    {
#ifndef WINDOWS_MODE
        if (1 == database->HMIPosition)
        {
            system("ifconfig eth0 192.168.1.203");
            if (!crrcMvb->initializeMvb(0x31))
            {
                logger()->error("MVB板卡初始化失败");
            }
            //HMI-CCU
        }
        else if (2 == database->HMIPosition)
        {
            system("ifconfig eth0 192.168.1.231");
            if (!crrcMvb->initializeMvb(0x32))
            {
                logger()->error("MVB板卡初始化失败");
            }
        }
        //add ports
        {
            this->initialPorts(this->database->HMIPosition);
        }
#endif

        if (crrcMvb->setMvbOperation())
        {
            logger()->error("MVB板卡设置操作模式失败");
        }
        timer->start(333);
    }
    else
    {
        logger()->error("configure.ini 文件错误");
        _LOG << "fail to read configure file.";
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{

    if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if (event->key() == Qt::Key_S)
    {
        QDesktopWidget *desktop = QApplication::desktop();

        // show a window uesd to manipulate the mvb ports and change page

        simulation->move((desktop->width() - simulation->width()) / 2, (desktop->height() - simulation->height()) / 2);
        simulation->show();
    }
}

void Widget::synchronizeTimeWithCcu()
{
    QDateTime currentDatetime = QDateTime::currentDateTime();
    if (this->database->hmiCcuOnlineState)
    {
        //auto synchronize time with CCU every 10s
        VCUtime2HMI10s();
        QDate date( this->database->CTAL_SysTimeYear_U8+2000,this->database->CTAL_SysTimeMonth_U8,this->database->CTAL_SysTimeDay_U8  );
        QTime time( this->database->CTAL_SysTimeHour_U8, this->database->CTAL_SysTimeMinute_U8, this->database->CTAL_SysTimeSecond_U8);

        if (QDate::isValid(this->database->CTAL_SysTimeYear_U8+2000,this->database->CTAL_SysTimeMonth_U8,this->database->CTAL_SysTimeDay_U8)
            &&QTime::isValid(this->database->CTAL_SysTimeHour_U8, this->database->CTAL_SysTimeMinute_U8, this->database->CTAL_SysTimeSecond_U8))
            {
            currentDatetime.setDate(date);
            currentDatetime.setTime(time);
        }
    }

    this->crrcFault->getLocalDateTime(currentDatetime);
}

void Widget::updatePage()
{
    static QTime timeStart(QTime::currentTime());

    static int counter = 1;

    if (uInvalid != MyBase::currentHeaderPage){this->headerpages[MyBase::currentHeaderPage]->updatePage();}
    if (uInvalid != MyBase::currentMiddlePage){this->middlePages[MyBase::currentMiddlePage]->updatePage();}
    if (uInvalid != MyBase::currentNavigatorPage){this->navigatorPages[MyBase::currentNavigatorPage]->updatePage();}
    if (uInvalid != MyBase::currentVehicleLogoPage){this->vehicleLogoPages[MyBase::currentVehicleLogoPage]->updatePage();}

    // refresh the mvb port every 0.66 second, the code which occupies cpu time a lot should not execute at the same cycle
    if (counter % 2 == 0)
    {
        this->crrcMvb->synchronizeMvbData();
        this->database->updateDatabase(crrcMvb);
        this->simulation->installMvb(crrcMvb);
    }

    synchronizeTimeWithCcu();

    // refresh the fault list every 2/3 second, the code which occupies cpu time a lot should not execute at the same cycle
    static int faultdelaycnt = 0;//0;
    // fault scan delay 15s, then start thread!!

    if ((45 == faultdelaycnt++)
#ifndef USER_DEBUG_MODE
        && this->database->hmiCcuOnlineState
#endif
       )
    {
        crrcFault->start();
        // 开启故障滚动
        this->header->startRollingFault(true);

    }
    faultdelaycnt >= 100 ? (faultdelaycnt = 46) : (faultdelaycnt ++);
    counter >= 100 ? (counter = 1) : (counter ++);

    if (timeStart.msecsTo(QTime::currentTime()) > 500)
    {
        _LOG << "update page time out fault" << timeStart.msecsTo(QTime::currentTime()) << ", please check it";
    }

    timeStart = QTime::currentTime();
}

void Widget::VCUtime2HMI10s()
{
    static int count10stimer = 0;
    QDateTime dateTimeSystem;
    QDateTime dateTimeCcu;
    QDate date( this->database->CTAL_SysTimeYear_U8+2000, this->database->CTAL_SysTimeMonth_U8, this->database->CTAL_SysTimeDay_U8);
    QTime time( this->database->CTAL_SysTimeHour_U8, this->database->CTAL_SysTimeMinute_U8, this->database->CTAL_SysTimeSecond_U8);
    dateTimeCcu.setDate(date);
    dateTimeCcu.setTime(time);
//    qDebug()<< "CCU TIME: " <<dateTimeCcu.date().year()<<dateTimeCcu.date().month()<<dateTimeCcu.date().day() << dateTimeCcu.toTime_t()
//            << "IDU TIME: " << dateTimeSystem.currentDateTime().date().year()<<dateTimeSystem.currentDateTime().date().month()<<dateTimeSystem.currentDateTime().date().day()
//            << dateTimeSystem.currentDateTime().toTime_t();

    if((bool(dateTimeCcu.date().year() > 1999) && bool(dateTimeCcu.date().year() < 2038)))
    {
        int timeDiff = ( dateTimeCcu.toTime_t()-dateTimeSystem.currentDateTime().toTime_t());



        if(bool(bool(timeDiff<-6 )||bool(timeDiff>6))  )
        {
            if(count10stimer > 0)
            {
                if(count10stimer++ >30)
                {
                    count10stimer = 0;
                }
            }else
            {
                logger()->info("执行自动校时，与CCU时间差为: "+QString::number(timeDiff)+" s");

                count10stimer = 1;
#ifndef USER_DEBUG_MODE
                systimeset(this->database->CTAL_SysTimeYear_U8+2000,this->database->CTAL_SysTimeMonth_U8,this->database->CTAL_SysTimeDay_U8
                           ,this->database->CTAL_SysTimeHour_U8,this->database->CTAL_SysTimeMinute_U8,this->database->CTAL_SysTimeSecond_U8);
#endif
            }
        }else
        {
            count10stimer = 0;
        }

    }
}

bool Widget::systimeset(unsigned short int year,unsigned short int month,unsigned short int day,
                             unsigned short int hour,unsigned short int minute,unsigned short int second)
{
#ifndef WINDOWS_MODE

    time_t t;
    struct tm nowtime;
    nowtime.tm_sec = second; // second
    nowtime.tm_min = minute; ///*       Minutes.[0-59]
    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
    nowtime.tm_mday = day;   ///*       Day.[1-31]
    nowtime.tm_mon = month - 1; ///*       Month.   [0-11]
    nowtime.tm_year = year - 1900; ///*       Year-       1900.
    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
    t = mktime(&nowtime);
    stime(&t);

    QDate date( year, month, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);
#endif
    return true;
}

void Widget::changeHeaderPage(int page)
{
    foreach (int key, this->headerpages.keys())
    {
        if (key == page)
        {
            //MyBase::currentHeaderPage = key;
            this->headerpages[key]->show();
            _LOG << "change page to " << this->headerpages[key]->name;
        }
        else
        {
            this->headerpages[key]->hide();
        }
    }
}

void Widget::changeMiddlePage(int page)
{
    foreach (int key, this->middlePages.keys())
    {
        if (key == page)
        {
            MyBase::currentMiddlePage = key;
            this->header->setPageName(this->middlePages[key]->name);
            this->middlePages[key]->show();
            this->navigator->setHelpPage(this->middlePages[key]->helpPageNo);
            _LOG << "change page to" << this->middlePages[key]->name;
        }
        else
        {
            this->middlePages[key]->hide();
        }
    }
}

void Widget::changeNavigatorPage(int page)
{
    foreach (int key, this->navigatorPages.keys())
    {
        if (key == page)
        {
            //MyBase::currentNavigatorPage = key;
            this->navigatorPages[key]->show();
            _LOG << "change page to" <<this->navigatorPages[key]->name;
        }
        else
        {
            this->navigatorPages[key]->hide();
        }
    }
}

void Widget::changeLogoPage(int page)
{
    foreach (int key, this->vehicleLogoPages.keys())
    {
        if (key == page)
        {
            //MyBase::currentVehicleLogoPage = key;
            this->vehicleLogoPages[key]->show();
            _LOG << "change page to" <<this->vehicleLogoPages[key]->name;
        }
        else
        {
            this->vehicleLogoPages[key]->hide();
        }
    }
}

/**
  @brief: initial the show
  */
void Widget::showEvent(QShowEvent *)
{
    if (0 != this->middlePages.size())
    {
        foreach(int key, this->middlePages.keys())
        {
            if (NULL == this->middlePages[key])
            {
                logger()->error("the widget is null in middlePages list: " + key);
                return;
            }
            this->middlePages[key]->hide();
        }

        this->headerpages[uHeader]->show();
        this->vehicleLogoPages[uVehicleLogo]->show();
        this->middlePages[uRunStatePage]->show();
        this->navigator->setHelpPage(uRunstateHelpPage);
        this->navigatorPages[uNavigator]->show();

    }
}



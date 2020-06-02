#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QMap>
#include <QWidget>
#include "log4qt/logger.h"
#include "global.h"

namespace Ui {
    class Widget;
}

class MyBase;
class CrrcMvb;
class CrrcFault;
class Database;
class Header;
class Navigator;
class RunStatePage;
class VehicleLogo;
class NetworkPage;
class LoginPage;
class ReconditionPage;
class LoginPage;
class IOSignalsPage;
class ByPassPage;
class SettingPage;
class EventPage;
class SetTimePage;
class SetAirconditioner;
class DCDCPage;
class SetVehicleNo;
class SetTractionPage;
class TractionInfoPage;
class SIVInfoPage;
class BrakeInfoPage;
//class AirConditionerPage;
class VersionInfoPage;
class ModifyPwdPage;
class SetWheelPage;
class SentSandPage;
class CumulateDataPage;
class LowPowerTestPage;
class PortDataPage;
class BroadcastPage;
class SpeedTestPage;
class SetVehicleLight;
class RunstateHelpPage;
class NetworkHelpPage;
class SetAirconditionerHelp;
class ByPassHelpPage;
class Simulation;
class ModeAndSpeedPage;
class MendModePage;
class WashModePage;
class OverTractPage;
class FactorySetPage;

class QTimer;

class Widget : public QWidget
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER
public:
    explicit Widget(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *);
    void showEvent(QShowEvent *);
    QMap<int, MyBase *> headerpages, middlePages, navigatorPages, vehicleLogoPages;
    ~Widget();
    void synchronizeTimeWithCcu();
    void VCUtime2HMI10s();
    bool systimeset(unsigned short int year,unsigned short int month,unsigned short int day,
                     unsigned short int hour,unsigned short int min,unsigned short int sec);

    void initialPorts(int position);
public slots:
    void changeMiddlePage(int page);
    void changeHeaderPage(int page);
    void changeNavigatorPage(int page);
    void changeLogoPage(int page);
    void updatePage();


private:
    Ui::Widget *ui;
    Database* database;
    QTimer* timer;
    CrrcMvb* crrcMvb;
    CrrcFault* crrcFault;
    Header* header;
    Navigator* navigator;
    RunStatePage *runStatePage;
    VehicleLogo* vehicleLogo;
    NetworkPage* networkPage;
    LoginPage* loginPage;
    ReconditionPage* reconditionPage;
    IOSignalsPage* ioSignalsPage;
    ByPassPage* byPassPage;
    SettingPage* settingPage;
    EventPage* eventPage;
    SetTimePage* setTimePage;
    SetAirconditioner* setAirconditioner;
    DCDCPage* dcdcPage;
    SetVehicleNo* setVehicleNo;
    SetTractionPage* setTractionPage;
    TractionInfoPage* tractionInfoPage;
    SIVInfoPage* sivInfoPage;
    BrakeInfoPage* brakeInfoPage;
    //AirConditionerPage* airConditionerPage;
    VersionInfoPage* versionInfoPage;
    ModifyPwdPage* modifyPwdPage;
    SetWheelPage* setWheelPage;
    SentSandPage* sentSandPage;
    CumulateDataPage* cumulateDataPage;
    LowPowerTestPage* lowPowerTestPage;
    PortDataPage* portDataPage;
    BroadcastPage* broadcastPage;
    SpeedTestPage* speedTestPage;
    SetVehicleLight* setVehicleLight;
    RunstateHelpPage* runstateHelpPage;
    NetworkHelpPage* networkHelpPage;
    SetAirconditionerHelp* setAirconditionerHelp;
    ByPassHelpPage* byPassHelpPage;
    Simulation* simulation;
    ModeAndSpeedPage* modeAndSpeedPage;
    MendModePage* mendModePage;
    WashModePage* washModePage;
    OverTractPage* overTractPage;
    FactorySetPage* factorySetPage;
};

#endif // WIDGET_H

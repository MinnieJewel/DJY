#ifndef GLOBAL_H
#define GLOBAL_H

#define _HMI_VERSION_MAIN 1
#define _HMI_VERSION_MINOR 0
#define USER_DEBUG_MODE
#define NButtonUP    "outline:none; font: \"SimHei\";color: rgb(0, 32, 96);border-image: url(:/image/buttonUP.jpg);border-radius:2px;"
#define NButtonDOWN  "outline:none; font: \"SimHei\";color: white;border-image: url(:/image/buttonDOWN.jpg);border-radius:2px;"
#define NButtonDISABLE "outline:none;font:\"SimHei\";border-image: url(:/image/buttonUP.jpg);color:rgb(180, 180, 180);border-radius:2px;"

#define NButtonUPNUMBER  "outline:none;background-color: rgb(51,153,255);border:3px solid white;color:white;"
#define NButtonDOWNNUMBER  "outline:none;background-color: white;border:3px solid white;color:rgb(51,153,255);"
#define NBUttonDISABLENUMBER "outline:none;background-color: rgb(51,153,255);border:3px solid white;color:rgb(180, 180, 180);"

#define _WHITECOLOR QColor(255, 255, 255)
#define _BLACK ("background-color: black;")
#define _WHITE ("background-color: white;")
#define _TABLE ("gridline-color: black; font:16px,\"SimHei\";color:black; background-color:white;")
#define _GRAY ("background-color:rgb(191, 191, 191);")
#define _GREEN ("background-color:rgb(0, 255, 0);")
#define _RED ("background-color:rgb(255, 0, 0);")
#define _YELLOW ("background-color:rgb(255, 255, 0);")
#define _BACKGROUND ("border:0px; background-color:rgb(51,153,255);")
#include <stdlib.h>

#ifndef WINDOWS_MODE
#include <PixyMvbLib.h>
#include <PixyTypes.h>
#include <QDebug>
#include <QDateTime>
#endif

enum pagePosition
{
    uTop = 0,
    uMiddle,
    uWithVehicleMiddle,
    uBottom,
    uHuge,
    uLargeMiddle
};

enum pageIndex
{
    uInvalid = 0,
    uRunStatePage,
    uHeader,
    uNavigator,
    uVehicleLogo,
    uNetworkPage,
    uLoginPage,
    uRecondition,
    uIOSignalsPage,
    uByPassPage,
    uSettingPage,
    uEventPage,
    uSetTimePage,
    uSetAirconditioner,
    uDCDCPage,
    uSetVehicleNo,
    uSetTractionPage,
    uTractionInfoPage,
    uSIVInfoPage,
    uBrakeInfoPage,
    //uAirConditionerPage,
    uVersionInfoPage,
    uModifyPwdPage,
    uSetWheelPage,
    uSentSandPage,
    uCumulateDataPage,
    uLowPowerTestPage,
    uPortDataPage,
    uBroadcastPage,
    uSpeedTestPage,
    uSetVehicleLight,
    uRunstateHelpPage,
    uNetworkHelpPage,
    uSetAirconditionerHelp,
    uByPassHelpPage,
    uModeAndSpeedPage,
    uMendModePage,
    uWashModePage,
    uOverTractPage,
    uFactorySetPage
};

#define _LOG qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") << __FILE__ << __LINE__

#endif // GLOBAL_H

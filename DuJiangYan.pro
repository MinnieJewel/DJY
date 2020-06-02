#-------------------------------------------------
#
# Project created by QtCreator 2019-11-02T11:34:01
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
LIBS += -lPixyMvb
TARGET = DuJiangYan
TEMPLATE = app
LIBS += -lsqlite3
DEPENDPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia
INCLUDEPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia

SOURCES += main.cpp\
        widget.cpp \
    log4qt/writerappender.cpp \
    log4qt/ttcclayout.cpp \
    log4qt/simplelayout.cpp \
    log4qt/rollingfileappender.cpp \
    log4qt/propertyconfigurator.cpp \
    log4qt/patternlayout.cpp \
    log4qt/ndc.cpp \
    log4qt/mdc.cpp \
    log4qt/logmanager.cpp \
    log4qt/loggingevent.cpp \
    log4qt/loggerrepository.cpp \
    log4qt/logger.cpp \
    log4qt/log4qt.cpp \
    log4qt/level.cpp \
    log4qt/layout.cpp \
    log4qt/hierarchy.cpp \
    log4qt/fileappender.cpp \
    log4qt/dailyrollingfileappender.cpp \
    log4qt/consoleappender.cpp \
    log4qt/basicconfigurator.cpp \
    log4qt/appenderskeleton.cpp \
    log4qt/helpers/properties.cpp \
    log4qt/helpers/patternformatter.cpp \
    log4qt/helpers/optionconverter.cpp \
    log4qt/helpers/logobjectptr.cpp \
    log4qt/helpers/logobject.cpp \
    log4qt/helpers/logerror.cpp \
    log4qt/helpers/initialisationhelper.cpp \
    log4qt/helpers/factory.cpp \
    log4qt/helpers/datetime.cpp \
    log4qt/helpers/configuratorhelper.cpp \
    log4qt/helpers/classlogger.cpp \
    log4qt/varia/stringmatchfilter.cpp \
    log4qt/varia/nullappender.cpp \
    log4qt/varia/listappender.cpp \
    log4qt/varia/levelrangefilter.cpp \
    log4qt/varia/levelmatchfilter.cpp \
    log4qt/varia/denyallfilter.cpp \
    log4qt/varia/debugappender.cpp \
    log4qt/spi/filter.cpp \
    crrcmvb.cpp \
    crrcfaultmapper.cpp \
    crrcfault.cpp \
    database.cpp \
    MainGetDefaultPara.cpp \
    mybase.cpp \
    header.cpp \
    navigator.cpp \
    faulttypebean.cpp \
    faultbean.cpp \
    runstatepage.cpp \
    vehiclelogo.cpp \
    networkpage.cpp \
    loginpage.cpp \
    numberbuttons.cpp \
    reconditionpage.cpp \
    iosignalspage.cpp \
    bypasspage.cpp \
    settingpage.cpp \
    eventpage.cpp \
    settimepage.cpp \
    setairconditioner.cpp \
    dcdcpage.cpp \
    setvehicleno.cpp \
    settractionpage.cpp \
    tractioninfopage.cpp \
    sivinfopage.cpp \
    brakeinfopage.cpp \
    airconditionerpage.cpp \
    versioninfopage.cpp \
    modifypwdpage.cpp \
    setwheelpage.cpp \
    sentsandpage.cpp \
    cumulatedatapage.cpp \
    lowpowertestpage.cpp \
    portdatapage.cpp \
    Ports.cpp \
    initialHmiSignals.cpp \
    initialRiomSignals.cpp \
    broadcastpage.cpp \
    initialCcuSignals.cpp \
    horizontalbuttons.cpp \
    initialERMSignals.cpp \
    speedtestpage.cpp \
    initialTBCUSignals.cpp \
    initialDCDCSignals.cpp \
    intialHVACSignals.cpp \
    runstatehelppage.cpp \
    runstatehelppage2.cpp \
    setvehiclelight.cpp \
    h8.cpp \
    command.c \
    serial.c \
    networkhelppage.cpp \
    setairconditionerhelp.cpp \
    bypasshelppage.cpp \
    simulation.cpp \
    modeandspeedpage.cpp \
    mendmodepage.cpp \
    washmodepage.cpp \
    overtractpage.cpp \
    utilfunction.cpp \
    factorysetpage.cpp

HEADERS  += widget.h \
    log4qt/writerappender.h \
    log4qt/ttcclayout.h \
    log4qt/simplelayout.h \
    log4qt/rollingfileappender.h \
    log4qt/propertyconfigurator.h \
    log4qt/patternlayout.h \
    log4qt/ndc.h \
    log4qt/mdc.h \
    log4qt/logmanager.h \
    log4qt/loggingevent.h \
    log4qt/loggerrepository.h \
    log4qt/logger.h \
    log4qt/log4qt.h \
    log4qt/level.h \
    log4qt/layout.h \
    log4qt/hierarchy.h \
    log4qt/fileappender.h \
    log4qt/dailyrollingfileappender.h \
    log4qt/consoleappender.h \
    log4qt/basicconfigurator.h \
    log4qt/appenderskeleton.h \
    log4qt/appender.h \
    log4qt/helpers/properties.h \
    log4qt/helpers/patternformatter.h \
    log4qt/helpers/optionconverter.h \
    log4qt/helpers/logobjectptr.h \
    log4qt/helpers/logobject.h \
    log4qt/helpers/logerror.h \
    log4qt/helpers/initialisationhelper.h \
    log4qt/helpers/factory.h \
    log4qt/helpers/datetime.h \
    log4qt/helpers/configuratorhelper.h \
    log4qt/helpers/classlogger.h \
    log4qt/spi/filter.h \
    log4qt/varia/stringmatchfilter.h \
    log4qt/varia/nullappender.h \
    log4qt/varia/listappender.h \
    log4qt/varia/levelrangefilter.h \
    log4qt/varia/levelmatchfilter.h \
    log4qt/varia/denyallfilter.h \
    log4qt/varia/debugappender.h \
    global.h \
    crrcmvb.h \
    crrcfaultmapper.h \
    crrcfault.h \
    database.h \
    MainGetDefaultPara.h \
    mybase.h \
    header.h \
    navigator.h \
    faulttypebean.h \
    faultbean.h \
    runstatepage.h \
    vehiclelogo.h \
    networkpage.h \
    loginpage.h \
    numberbuttons.h \
    reconditionpage.h \
    iosignalspage.h \
    bypasspage.h \
    settingpage.h \
    eventpage.h \
    settimepage.h \
    setairconditioner.h \
    dcdcpage.h \
    setvehicleno.h \
    settractionpage.h \
    tractioninfopage.h \
    sivinfopage.h \
    brakeinfopage.h \
    airconditionerpage.h \
    versioninfopage.h \
    modifypwdpage.h \
    setwheelpage.h \
    sentsandpage.h \
    cumulatedatapage.h \
    lowpowertestpage.h \
    portdatapage.h \
    broadcastpage.h \
    horizontalbuttons.h \
    speedtestpage.h \
    runstatehelppage.h \
    runstatehelppage2.h \
    h8.h \
    setvehiclelight.h \
    command.h \
    serial.h \
    networkhelppage.h \
    setairconditionerhelp.h \
    bypasshelppage.h \
    simulation.h \
    modeandspeedpage.h \
    mendmodepage.h \
    washmodepage.h \
    overtractpage.h \
    utilfunction.h \
    factorysetpage.h

FORMS    += widget.ui \
    header.ui \
    navigator.ui \
    runstatepage.ui \
    vehiclelogo.ui \
    networkpage.ui \
    loginpage.ui \
    numberbuttons.ui \
    reconditionpage.ui \
    iosignalspage.ui \
    bypasspage.ui \
    settingpage.ui \
    eventpage.ui \
    settimepage.ui \
    setairconditioner.ui \
    dcdcpage.ui \
    setvehicleno.ui \
    settractionpage.ui \
    tractioninfopage.ui \
    sivinfopage.ui \
    brakeinfopage.ui \
    airconditionerpage.ui \
    versioninfopage.ui \
    modifypwdpage.ui \
    setwheelpage.ui \
    sentsandpage.ui \
    cumulatedatapage.ui \
    lowpowertestpage.ui \
    portdatapage.ui \
    broadcastpage.ui \
    horizontalbuttons.ui \
    speedtestpage.ui \
    runstatehelppage.ui \
    runstatehelppage2.ui \
    setvehiclelight.ui \
    networkhelppage.ui \
    setairconditionerhelp.ui \
    bypasshelppage.ui \
    simulation.ui \
    modeandspeedpage.ui \
    mendmodepage.ui \
    washmodepage.ui \
    overtractpage.ui \
    factorysetpage.ui

RESOURCES += \
    Resources.qrc

OTHER_FILES += \
    log4qt/log4qt.pri

#include "runstatepage.h"
#include "ui_runstatepage.h"

#define _DCDCNUMBER 305
#define _DCDCPOINT 308
#define _LEVELNUMBER 207
#define _LEVELPOINT 208

#define _DCDCHEIGHT 100
#define _LEVELTRACTHEIGHT 50
#define _LEVLEBRAKEHEIGHT 50

#define _DCDCNORMAL ("border-image: url(:/image/battaryWork.png);")
#define _DCDCFAULTA ("border-image: url(:/image/battaryAfault.png);")
#define _DCDCFAULTB ("border-image: url(:/image/battaryBfault.png);")
#define _DCDCISOLATEA ("border-image: url(:/image/battaryAcut.png);")
#define _DCDCISOLATEB ("border-image: url(:/image/battaryBcut.png);")
#define _DCDCCONNFAULTA ("border-image: url(:/image/battaryAconnF.png);")
#define _DCDCCONNFAULTB ("border-image: url(:/image/battaryBconnF.png);")
#define _DCDCCONNFAULT ("border-image: url(:/image/battaryConnF.png);")

#define _DCDCFAULT ("color:black; background-color:red;")
#define _DCDCCUT ("border-image: url(:/image/cut.png); color:black;")
#define _DCDCCONNFAULT ("color:black; background-color:white;")
#define _DCDCUNKNOWN ("color:red; background-color:white;")

#define _ACUNORMAL ("border-image: url(:/image/acuWork.png);")
#define _ACUUNWORK ("border-image: url(:/image/acuDiswork.png);")
#define _ACUFAULT ("border-image: url(:/image/acuFault.png);")
#define _ACUCONNFAULT ("border-image: url(:/image/acuConnFault.png);")
#define _ACUUNKNOWN ("border-image: url(:/image/acuUnknown.jpg);")

#define _TCUNORMAL ("border-image: url(:/image/tcuWork.png);")
#define _TCUFAULT ("border-image: url(:/image/tcuFault.png);")
#define _TCULOCK ("border-image: url(:/image/tcuLock.png);")
#define _TCUCONNFAULT ("border-image: url(:/image/tcuConnFault.png);")
#define _TCUUNKNOWN ("border-image: url(:/image/tcuUnknown.jpg);")

#define _BCURELEASE ("border-image: url(:/image/brakeRelease.png);")
#define _BCUAPPLY ("border-image: url(:/image/brakeApplyOK.png);")
#define _BCUCUT ("border-image: url(:/image/brakeCut.png);")
#define _BCUFAULT ("border-image: url(:/image/brakeReleaseNotOK.png);")
#define _BCUUNKNOWN ("border-image: url(:/image/brakeUnknown.jpg);")

#define _HSCBCLOSE ("border-image: url(:/image/HSCBclosed.png);")
#define _HSCBOPEN ("border-image: url(:/image/HSCBopen.png);")
#define _HSCBFAULT ("border-image: url(:/image/defect.png);")
#define _HSCBUNKNOWN ("border-image: url(:/image/HSCUnknown.jpg);")

#define _TRACKBRAKE ("border-image: url(:/image/trackbreak.png);")
#define _UNTRACKBRAKE ("border-image: url(:/image/OFFtrackbreak.png);")

RunStatePage::RunStatePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::RunStatePage)
{
    //default DCDC buttons are up
    ui->setupUi(this);
    ui->btnDCDC->setCheckable(true);
    ui->btnDCDC->setEnabled(false);
    ui->btnManual->setCheckable(true);
    ui->btnDCDC->setChecked(false);
    ui->btnDCDC->setStyleSheet(NButtonDISABLE);
    ui->btnManual->setChecked(false);

    this->database->HM1CT_DCDCDisCharge_B1 = false;
    this->database->HM1CT_DCDCDisChargeCancel_B1 = true;
    this->database->HM1CT_DCDCMmode_B1 = false;
    this->database->HM1CT_DCDCMmodeCancel_B1 = true;
}

RunStatePage::~RunStatePage()
{
    delete ui;
}

void RunStatePage::updatePage()
{
    //signal systems
    updateIcons(ui->labelInfo, this->database->CTHM_EventsPop_B1);
    //emergency alarm
//    updateIcons(ui->labelAlarm1, this->database->CTHM_PECUAlarm11_B1);
//    updateIcons(ui->labelAlarm2, this->database->CTHM_PECUAlarm21_B1);
//    updateIcons(ui->labelAlarm3, this->database->CTHM_PECUAlarm22_B1);
//    updateIcons(ui->labelAlarm4, this->database->CTHM_PECUAlarm41_B1);
//    updateIcons(ui->labelAlarm5, this->database->CTHM_PECUAlarm42_B1);
//    updateIcons(ui->labelAlarm6, this->database->CTHM_PECUAlarm51_B1);

    //FB,EB,MSB
//    updateIcons(ui->labelFastBrake, this->database->CTHM_FastBrake_B1);
//    updateIcons(ui->labelEmergencyBrake, this->database->CTHM_EmgyBrake_B1);
//    updateIcons(ui->labelMSB, this->database->CTHM_MSBState_B1);

    //talk
//    updateIcons(ui->labelTalkToDriver, this->database->CTHM_CCSta_B1);
//    updateIcons(ui->labelTalkToPassenger, this->database->CTHM_CPSta_B1);


    dcdcPercent(this->database->CTHM_DCDCEnergy_U8);
    levelPercent(this->database->CTHM_ElecEffortValue_I16);
    ui->labelBattery->setText(QString::number(this->database->CTHM_BattVolt_U16)+"V");
    ui->labelBatteryTemperature->setText(QString::number(this->database->CTHM_BattTemp_U8)+"℃");

    updateHSCB(ui->labelHSCB, this->database->CTHM_HSCBState_U8);
//    updateDCDC(ui->labelDCDC1, this->database->CTHM_DCDC1Sta_U8);
//    updateDCDC(ui->labelDCDC2, this->database->CTHM_DCDC2Sta_U8);

    updateACU(ui->labelC1ACUState, this->database->CTHM_ACEState_U8);

    updateTBCU(ui->labelM1TractionState, this->database->CTHM_TBCU1State_U8);
    updateTBCU(ui->labelM2TractionState, this->database->CTHM_TBCU2State_U8);

    updateBCU(ui->labelM1Brake, this->database->CTHM_HCM1State_U8);
    updateBCU(ui->labelNPBrake, this->database->CTHM_BCU2State_U8);
    updateBCU(ui->labelM2Brake, this->database->CTHM_HCM3State_U8);

    updateIcons(ui->labelTractionBrake1, this->database->TR1CT_ITrackBrakesOut_B1);
    updateIcons(ui->labelTractionBrake2, this->database->TR2CT_ITrackBrakesOut_B1);
    //updateIcons(ui->labelTractionBrake3, this->database->TR3CT_ITrackBrakesOut_B1);

    updateIcons(ui->labelManuMode, this->database->CTHM_HMIReqFedBk21_B1);
    updateIcons(ui->labeldcdcDischarge, this->database->CTHM_HMIReqFedBk20_B1);
}


void RunStatePage::updateIcons(QLabel *label, bool state)
{
    if (state)
        label->show();
    else
        label->hide();
}

void RunStatePage::updateTrackBrake(QLabel *label, bool on)
{
    if (on)
        label->setStyleSheet(_TRACKBRAKE);
    else
        label->setStyleSheet(_UNTRACKBRAKE);
}

void RunStatePage::updateTBCU(QLabel *label, unsigned char tbcuState)
{
    switch (tbcuState)
    {
    case 4: label->setStyleSheet(_TCUCONNFAULT); break;
    case 3: label->setStyleSheet(_TCULOCK); break;
    case 2: label->setStyleSheet(_TCUFAULT); break;
    case 1: label->setStyleSheet(_TCUNORMAL); break;
    default: label->setStyleSheet(_TCUUNKNOWN);
    }
}

void RunStatePage::updateBCU(QLabel *label, unsigned char bcuState)
{
    switch (bcuState)
    {
    case 4: label->setStyleSheet(_BCUCUT); break;
    case 3: label->setStyleSheet(_BCUFAULT); break;
    case 2: label->setStyleSheet(_BCUAPPLY); break;
    case 1: label->setStyleSheet(_BCURELEASE); break;
    default: label->setStyleSheet(_BCUUNKNOWN);
    }
}

void RunStatePage::updateACU(QLabel *label, unsigned char acuState)
{
    switch (acuState)
    {
    case 4: label->setStyleSheet(_ACUCONNFAULT); break;
    case 3: label->setStyleSheet(_ACUFAULT); break;
    case 2: label->setStyleSheet(_ACUUNWORK); break;
    case 1: label->setStyleSheet(_ACUNORMAL); break;
    default: label->setStyleSheet(_ACUUNKNOWN);
    }
}

void RunStatePage::updateHSCB(QLabel *label, unsigned char hscbState)
{
    switch (hscbState)
    {
    case 3: label->setStyleSheet(_HSCBFAULT); break;
    case 2: label->setStyleSheet(_HSCBOPEN); break;
    case 1: label->setStyleSheet(_HSCBCLOSE); break;
    default: label->setStyleSheet(_HSCBUNKNOWN);
    }
}

void RunStatePage::dcdcPercent(unsigned char dcdcPercent)
{
    ui->labelSuperBatteryNumber->setGeometry((int)ui->labelSuperBatteryNumber->geometry().x(), (int)(_DCDCNUMBER +dcdcPercent*0.01*_DCDCHEIGHT),
                                             (int)ui->labelSuperBatteryNumber->width(), ui->labelSuperBatteryNumber->height());
    ui->labelSuperBatteryPoint->setGeometry((int)ui->labelSuperBatteryPoint->geometry().x(), (int)(_DCDCPOINT+dcdcPercent*0.01*_DCDCHEIGHT),
                                            (int)ui->labelSuperBatteryPoint->width(), (int)ui->labelSuperBatteryPoint->height());
}


void RunStatePage::updateDCDC(QLabel *label, unsigned char dcdcState1, unsigned char dcdcState2)
{
    if (4 == dcdcState1 && 4 == dcdcState2)
    {
        label->setStyleSheet(_DCDCCONNFAULT);
    }
    else if (2 == dcdcState1)
    {
        label->setStyleSheet(_DCDCFAULTA);
    }
    else if (2 == dcdcState2)
    {
        label->setStyleSheet(_DCDCFAULTB);
    }
    else if (3 == dcdcState1)
    {
        label->setStyleSheet(_DCDCISOLATEA);
    }
    else if (3 == dcdcState2)
    {
        label->setStyleSheet(_DCDCISOLATEB);
    }
    else if (4 == dcdcState1)
    {
        label->setStyleSheet(_DCDCCONNFAULTA);
    }
    else if ( 4 == dcdcState2)
    {
        label->setStyleSheet(_DCDCCONNFAULTB);
    }
    else if (1 == dcdcState1 && 1 == dcdcState2)
    {
        label->setStyleSheet(_DCDCNORMAL);
    }else
    {
        label->setStyleSheet(_WHITE);
    }
}


void RunStatePage::levelPercent(signed short levelPercent)
{
    QString level;
    if (0 == levelPercent)
    {
        ui->labelLevelNumber->setGeometry(ui->labelLevelNumber->geometry().x(), _LEVELNUMBER,ui->labelLevelNumber->width(), ui->labelLevelNumber->height());
        ui->labelLevelPoint->setGeometry(ui->labelLevelPoint->geometry().x(),_LEVELPOINT,ui->labelLevelPoint->width(),ui->labelLevelPoint->height());
        level = "";
    }
    else if (levelPercent > 0)
    {
        ui->labelLevelNumber->setGeometry(ui->labelLevelNumber->geometry().x(), int(_LEVELNUMBER+_LEVELTRACTHEIGHT*levelPercent*0.01),
                                          (int)ui->labelLevelNumber->width(), (int)ui->labelLevelNumber->height());
        ui->labelLevelPoint->setGeometry(ui->labelLevelPoint->geometry().x(),(int)(_LEVELPOINT+_LEVELTRACTHEIGHT*levelPercent*0.01),
                                          (int)ui->labelLevelPoint->width(),(int)ui->labelLevelPoint->height());
        level = "牵引：";
    }
    else
    {
        ui->labelLevelNumber->setGeometry(ui->labelLevelNumber->geometry().x(),(int)( _LEVELNUMBER-_LEVLEBRAKEHEIGHT*levelPercent*0.01),
                                          (int)ui->labelLevelNumber->width(), (int)ui->labelLevelNumber->height());
        ui->labelLevelPoint->setGeometry(ui->labelLevelPoint->geometry().x(),(int)(_LEVELPOINT-_LEVLEBRAKEHEIGHT*levelPercent*0.01),
                                         (int)ui->labelLevelPoint->width(),(int)ui->labelLevelPoint->height());
        level = "制动：";
    }
        ui->labelLevelNumber->setText(level + QString::number(levelPercent)+"%");
}

void RunStatePage::on_btnManual_toggled(bool checked)
{
    if (checked)
    {
        ui->btnManual->setChecked(true);
        ui->btnManual->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_DCDCMmode_B1 = true;
        this->database->HM1CT_DCDCMmodeCancel_B1 = false;
        ui->btnDCDC->setEnabled(true);
        ui->btnDCDC->setStyleSheet(NButtonUP);
    }
    else
    {
        ui->btnManual->setChecked(false);
        ui->btnManual->setStyleSheet(NButtonUP);
        this->database->HM1CT_DCDCMmode_B1 = false;
        this->database->HM1CT_DCDCMmodeCancel_B1 = true;

        //disable DCDC discharge button
        ui->btnDCDC->setEnabled(false);
        ui->btnDCDC->setChecked(false);
        ui->btnDCDC->setStyleSheet(NButtonDISABLE);

        this->database->HM1CT_DCDCDisCharge_B1 = false;
        this->database->HM1CT_DCDCDisChargeCancel_B1 = true;
    }
}

void RunStatePage::updateSignal(bool signal)
{
    if (signal)
        ui->labelSignalSystem->setStyleSheet(_GREEN);
    else
        ui->labelSignalSystem->setStyleSheet(_RED);
}

void RunStatePage::on_btnDCDC_toggled(bool checked)
{
    if (checked)
    {
        ui->btnDCDC->setChecked(true);
        ui->btnDCDC->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_DCDCDisCharge_B1 = true;
        this->database->HM1CT_DCDCDisChargeCancel_B1 = false;
    }
    else
    {
        ui->btnDCDC->setChecked(false);
        ui->btnDCDC->setStyleSheet(NButtonUP);
        this->database->HM1CT_DCDCDisCharge_B1 = false;
        this->database->HM1CT_DCDCDisChargeCancel_B1 = true;
    }
}


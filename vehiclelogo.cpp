#include "vehiclelogo.h"
#include "ui_vehiclelogo.h"
#include "crrcfault.h"

#define _OFFLINE ("font: 15px, SimHei; color: rgb(0,0,0); background-color: gray; border: 2px groove, black; border-color: black;")
#define _CUT ("font: 15px, SimHei; color: rgb(0,0,0); image: url(:/image/cut.png); border: 2px groove, gray; border-color: gray;")
#define _DOOR_FAULT ("border-image: url(:/image/doorFault.png);")
#define _DOOR_BLOCK ("font: 20px, SimHei; color: rgb(0,0,0); image: url(:/image/doorBlock.png); border: 2px groove, gray; border-color: gray;")
#define _DOOR_OPENERROR ("font: 20px, SimHei; color: rgb(0,0,0); image: url(:/image/doorOpenError.png); border: 2px groove, gray; border-color: gray;")
#define _DOOR_OPEN ("font: 15px, SimHei; color: rgb(0,0,0); image: url(:/image/doorOpen.png); border: 2px groove, gray; border-color: gray;")
#define _DOOR_CLOSE ("font: 20px, SimHei; color: rgb(0,0,0); background-color: gray; border: 2px groove, gray; border-color: gray;")
#define _DOOR_EMERGENCY ("font: 20px, SimHei; color: rgb(0,0,0); background-color: gray; border: 2px groove, gray; border-color: gray;")
#define _DOOR_UNKNOWN ("border-image: url(:/image/panConnFault.png);")

#define _PANFAULT ("background-color: black;border-image: url(:/image/panConnFault.png);")
#define _DOWNLOCK ("background-color: black;border-image: url(:/image/downLock.png);")
#define _UPLOCK ("background-color: black;border-image: url(:/image/upLock.png);")
#define _DOWNFAULT ("background-color: black;border-image: url(:/image/downFault.png);")
#define _UPFAULT ("background-color: black;border-image: url(:/image/upFault.png);")
#define _DOWN ("background-color: black;border-image: url(:/image/down.png);")
#define _UPMID ("background-color: black;border-image: url(:/image/upMid.png);")
#define _UP ("background-color: black;border-image: url(:/image/up.png);")

#define _FORWARD ("border-image: url(:/image/leftDirect.png);")
#define _BACKWARD ("border-image: url(:/image/rightDirect.png);")
#define _CLASH ("border-image: url(:/image/clashDirection.png);")

#define _KEYOFF ("background-color: rgb(255, 255, 127);border-radius:30px;")
#define _KEYON ("background-color: rgb(0, 255, 0);border-radius:30px;")

//#define _OVERLOAD ("font: 15px, SimHei;color: white; background-color: rgb(0, 255, 255); border: 2px groove, gray; border-color: gray;")
//#define _BLACK ("font: 15px, SimHei;color: white; background-color: black; border: 2px groove, gray; border-color: gray;")
//#define _RED ("font: 15px, SimHei; color: white; background-color: red; border: 2px groove, gray; border-color: gray;")
//#define _SLIGHT_FAULT ("font: 20px, SimHei; color: blue; background-color: rgb(244 ,128, 17); border: 2px groove, gray; border-color: gray;")
//#define _GREEN ("font: 15px, SimHei; color: rgb(0,0,0); background-color: rgb(0, 255, 0); border: 2px groove, gray; border-color: gray;")
//#define _YELLOW ("font: 15px, SimHei; color: rgb(0,0,0); background-color: yellow; border: 2px groove, gray; border-color: gray;")

//#define _AIR_BRAKE ("font: 15px, SimHei; color: rgb(0,0,0); background-color: rgb(153,0,51); border: 2px groove, gray; border-color: gray;")
//#define _FAST_BRAKE ("font: 15px, SimHei; color: rgb(255,255,255); background-color: rgb(204,0,255); border: 2px groove, gray; border-color: gray;")

//#define _DOOR_LOCK ("font: 20px, SimHei; color: blue; image: url(:/image/lock.png); border: 2px groove, gray; border-color: gray;")

VehicleLogo::VehicleLogo(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::VehicleLogo)
{
    ui->setupUi(this);    
}

VehicleLogo::~VehicleLogo()
{
    delete ui;
}

void VehicleLogo::GetcrrcFaultInfo(CrrcFault *crrcFault)
{
    m_crrcFault = crrcFault;
}

void VehicleLogo::updatePage()
{
    setDoorState(ui->labelDoor1,this->database->CTHM_MDCU1On_B1, this->database->DR1CT_IIsolateR1_B1, false, this->database->DR1CT_IEmergencyUnlockR1_B1, this->database->DR1CT_IObstructeOpeningR1_B1||this->database->DR1CT_IObstructeCloingR1_B1,
                 this->database->DR1CT_INotClosedwellR1_B1, this->database->DR1CT_IOpnedwellR1_B1,this->database->DR1CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor2,this->database->CTHM_MDCU2On_B1, this->database->DR2CT_IIsolateR1_B1, false,  this->database->DR2CT_IEmergencyUnlockR1_B1, this->database->DR2CT_IObstructeOpeningR1_B1||this->database->DR2CT_IObstructeCloingR1_B1,
                 this->database->DR2CT_INotClosedwellR1_B1, this->database->DR2CT_IOpnedwellR1_B1,this->database->DR2CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor3,this->database->CTHM_MDCU3On_B1, this->database->DR3CT_IIsolateR1_B1,  false, this->database->DR3CT_IEmergencyUnlockR1_B1, this->database->DR3CT_IObstructeOpeningR1_B1||this->database->DR3CT_IObstructeCloingR1_B1,
                 this->database->DR3CT_INotClosedwellR1_B1, this->database->DR3CT_IOpnedwellR1_B1,this->database->DR3CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor4,this->database->CTHM_MDCU4On_B1, this->database->DR4CT_IIsolateR1_B1, false, this->database->DR4CT_IEmergencyUnlockR1_B1, this->database->DR4CT_IObstructeOpeningR1_B1||this->database->DR4CT_IObstructeCloingR1_B1,
                 this->database->DR4CT_INotClosedwellR1_B1, this->database->DR4CT_IOpnedwellR1_B1,this->database->DR4CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor5,this->database->CTHM_MDCU5On_B1, this->database->DR5CT_IIsolateR1_B1, false, this->database->DR5CT_IEmergencyUnlockR1_B1, this->database->DR5CT_IObstructeOpeningR1_B1||this->database->DR5CT_IObstructeCloingR1_B1,
                 this->database->DR5CT_INotClosedwellR1_B1, this->database->DR5CT_IOpnedwellR1_B1,this->database->DR5CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor6,this->database->CTHM_MDCU6On_B1, this->database->DR6CT_IIsolateR1_B1, false, this->database->DR6CT_IEmergencyUnlockR1_B1, this->database->DR6CT_IObstructeOpeningR1_B1||this->database->DR6CT_IObstructeCloingR1_B1,
                 this->database->DR6CT_INotClosedwellR1_B1, this->database->DR6CT_IOpnedwellR1_B1,this->database->DR6CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor7,this->database->CTHM_MDCU7On_B1, this->database->DR7CT_IIsolateR1_B1, false, this->database->DR7CT_IEmergencyUnlockR1_B1, this->database->DR7CT_IObstructeOpeningR1_B1||this->database->DR7CT_IObstructeCloingR1_B1,
                 this->database->DR7CT_INotClosedwellR1_B1, this->database->DR7CT_IOpnedwellR1_B1,this->database->DR7CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor8,this->database->CTHM_MDCU8On_B1, this->database->DR8CT_IIsolateR1_B1, false, this->database->DR8CT_IEmergencyUnlockR1_B1, this->database->DR8CT_IObstructeOpeningR1_B1||this->database->DR8CT_IObstructeCloingR1_B1,
                 this->database->DR8CT_INotClosedwellR1_B1, this->database->DR8CT_IOpnedwellR1_B1,this->database->DR8CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor9,this->database->CTHM_MDCU9On_B1, this->database->DR9CT_IIsolateR1_B1, false, this->database->DR9CT_IEmergencyUnlockR1_B1, this->database->DR9CT_IObstructeOpeningR1_B1||this->database->DR9CT_IObstructeCloingR1_B1,
                 this->database->DR9CT_INotClosedwellR1_B1, this->database->DR9CT_IOpnedwellR1_B1,this->database->DR9CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor10,this->database->CTHM_MDCU10On_B1, this->database->DR10CT_IIsolateR1_B1, false, this->database->DR10CT_IEmergencyUnlockR1_B1, this->database->DR10CT_IObstructeOpeningR1_B1||this->database->DR10CT_IObstructeCloingR1_B1,
                 this->database->DR10CT_INotClosedwellR1_B1, this->database->DR10CT_IOpnedwellR1_B1,this->database->DR10CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor11,this->database->CTHM_MDCU11On_B1, this->database->DR11CT_IIsolateR1_B1, false, this->database->DR11CT_IEmergencyUnlockR1_B1, this->database->DR11CT_IObstructeOpeningR1_B1||this->database->DR11CT_IObstructeCloingR1_B1,
                 this->database->DR11CT_INotClosedwellR1_B1, this->database->DR11CT_IOpnedwellR1_B1,this->database->DR11CT_IClosedwellR1_B1);
    setDoorState(ui->labelDoor12,this->database->CTHM_MDCU12On_B1, this->database->DR12CT_IIsolateR1_B1, false, this->database->DR12CT_IEmergencyUnlockR1_B1, this->database->DR12CT_IObstructeOpeningR1_B1||this->database->DR12CT_IObstructeCloingR1_B1,
                 this->database->DR12CT_INotClosedwellR1_B1, this->database->DR12CT_IOpnedwellR1_B1,this->database->DR12CT_IClosedwellR1_B1);
    setPanState(ui->labelPan, this->database->CTHM_PantoState_U8, true);

    setDirection(ui->labelLfitDirection, this->database->CTHM_Forward_B1, this->database->CTHM_Backward_B1);
    setDirection(ui->labelRightDirection, this->database->CTHM_Forward_B1, this->database->CTHM_Backward_B1);

    setKeyState(ui->labelLeftHead, this->database->CTHM_M1Active_B1);
    setKeyState(ui->labelRightHead, this->database->CTHM_M2Active_B1);
}

void VehicleLogo::setPanState(QLabel *label, unsigned char state, bool onState)
{
    if (!onState)
    {
        label->setStyleSheet(_PANFAULT);
        return;
    }
    switch (state)
    {
    case 7:
        label->setStyleSheet(_DOWNLOCK);
        break;

    case 6:
        label->setStyleSheet(_UPLOCK);
        break;

    case 4:
        label->setStyleSheet(_DOWNFAULT);
        break;

    case 5:
        label->setStyleSheet(_UPFAULT);
        break;

    case 3:
        label->setStyleSheet(_DOWN);
        break;

    case 2:
        label->setStyleSheet(_UPMID);
        break;

    case 1:
        label->setStyleSheet(_UP);
        break;

    default:
        label->setStyleSheet(_WHITE);
        break;
    }
}

void VehicleLogo::setDoorState(QLabel *label, bool onLine, bool cut, bool fault, bool emergencyUnlock, bool obstacle, bool notInPlace, bool open, bool close){
    if (!onLine)
    {
        label->setStyleSheet(_OFFLINE);
    }
    else if (cut)
    {
        label->setStyleSheet(_CUT);
    }
    else if (fault)
    {
        label->setStyleSheet(_DOOR_FAULT);
    }
    else if (emergencyUnlock)
    {
        label->setStyleSheet(_DOOR_EMERGENCY);
    }
    else if (obstacle)
    {
        label->setStyleSheet(_DOOR_BLOCK);
    }
    else if (notInPlace)
    {
        label->setStyleSheet(_DOOR_OPENERROR);
    }
    else if (open)
    {
        label->setStyleSheet(_DOOR_OPEN);
    }
    else if (close)
    {
        label->setStyleSheet(_DOOR_CLOSE);
    }
    else
    {
        label->setStyleSheet(_DOOR_UNKNOWN);
    }
}

void VehicleLogo::setDirection(QLabel *label, bool forward, bool backward)
{
    if (forward && backward)
    {
        label->setStyleSheet(_CLASH);
    }
    else if (forward)
    {
        label->setStyleSheet(_FORWARD);
    }
    else if (backward)
    {
        label->setStyleSheet(_BACKWARD);
    }
    else
    {
        label->setStyleSheet(_BACKGROUND);
    }
}

void VehicleLogo::setKeyState(QLabel *label, bool on)
{
    if (on)
    {
        label->setStyleSheet(_KEYON);
    }
    else
    {
        label->setStyleSheet(_KEYOFF);
    }
}



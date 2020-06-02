#include "setairconditioner.h"
#include "ui_setairconditioner.h"
#include <QButtonGroup>
#include <QTimer>

#define _OFF "border-image: url(:/image/HVACoff.png);"
#define _FAULT "border-image: url(:/image/HVACfault.png);"
#define _RUN "border-image: url(:/image/HVACrun.png);"

enum mode
{
    cease = 0x00,
    autoWarm = 0x01,
    manuWarm = 0x02,
    autoCold = 0x03,
    manuCold = 0x04,
    wentilate = 0x05
};
SetAirconditioner::SetAirconditioner(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetAirconditioner)
{
    ui->setupUi(this);

    this->airButtons = new QButtonGroup;
    this->airButtons->addButton(ui->btnONOff, cease);
    this->airButtons->addButton(ui->btnAutoWarm, autoWarm);
    this->airButtons->addButton(ui->btnManuWarm, manuWarm);
    this->airButtons->addButton(ui->btnAutoCold, autoCold);
    this->airButtons->addButton(ui->btnManuCold, manuCold);
    this->airButtons->addButton(ui->btnWentilate, wentilate);
    this->airButtons->setExclusive(true);
    connect(this->airButtons, SIGNAL(buttonClicked(int)), this, SLOT(onModeSetClicked(int)));
    this->timer1 = new QTimer;
    this->timer1->stop();
    connect(this->timer1, SIGNAL(timeout()), this, SLOT(onTimer1Out()));
    this->timer2 = new QTimer;
    this->timer2->stop();
    connect(this->timer2, SIGNAL(timeout()), this, SLOT(onTimer2Out()));
    this->timer3 = new QTimer;
    this->timer3->stop();
    connect(this->timer3, SIGNAL(timeout()), this, SLOT(onTimer3Out()));
    this->onModeSetClicked(cease);
    this->currentMode = cease;

    ui->btnPreOff->setCheckable(true);
    ui->btnPreOff->setChecked(false);
    this->setTem = 19;
    this->tempButtonsEnable(false);

}

SetAirconditioner::~SetAirconditioner()
{
    delete ui;
}

void SetAirconditioner::showEvent(QShowEvent *)
{
    ui->labelTem->setText(QString::number(this->setTem));
    ui->labelModeInfo->setText("");
}

void SetAirconditioner::tempButtonsEnable(bool enable)
{
    if (enable)
    {
        ui->btnAdd->setEnabled(true);
        ui->btnMinus->setEnabled(true);
        ui->btnSetTem->setEnabled(true);
    }
    else
    {
        ui->btnAdd->setEnabled(false);
        ui->btnMinus->setEnabled(false);
        ui->btnSetTem->setEnabled(false);
    }
}

void SetAirconditioner::on_btnBack_clicked()
{
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
}

void SetAirconditioner::allButtonsUP()
{
    for(mode i = cease; i <= wentilate; i = (mode)(i + 1))
    {
        this->airButtons->button(i)->setStyleSheet(NButtonUP);
    }
}

//void SetAirconditioner::allButtonsEnable(bool enable)
//{
//    for(mode i = cease; i <= wentilate; i = (mode)(i + 1))
//    {
//        if (enable)
//            this->airButtons->button(i)->setEnabled(true);
//        else
//            this->airButtons->button(i)->setEnabled(false);
//    }
//}

void SetAirconditioner::onModeSetClicked(int mode)
{
    this->currentMode = mode;
    this->database->HM1CT_HVACMode_U8 = mode;
    if (mode == manuWarm || mode == manuCold)
    {
        this->tempButtonsEnable(true);
        if (mode == manuWarm)
            this->setTem = 12;
        else
            this->setTem = 19;
        ui->labelTem->setText(QString::number(this->setTem));
    }

    else
        this->tempButtonsEnable(false);
        this->timer1->start(3000);
        ui->labelModeInfo->setText("设置中...");
        this->database->HM1CT_SAVEHVACMode_B1 = true;
        this->allButtonsUP();
        this->airButtons->button(this->currentMode)->setStyleSheet(NButtonDOWN);
        //this->allButtonsEnable(false);
}

void SetAirconditioner::onTimer1Out()
{
    this->timer1->stop();
    this->database->HM1CT_SAVEHVACMode_B1 = false;
    ui->labelModeInfo->setText("设置成功。");
    //this->allButtonsEnable(true);
}

//void SetAirconditioner::on_btnPreOff_toggled(bool checked)
//{
//    if (checked)
//    {
//        if (!this->timer2->isActive())
//        {
//            this->timer2->start(4000);
//            this->database->HM1CT_IDeactPreHeatCool_B1 = true;
//            ui->btnPreOff->setEnabled(false);
//            ui->btnPreOff->setStyleSheet(NBUttonDISABLE);
//        }
//    }
//    else
//        ui->btnPreOff->setStyleSheet(NButtonUP);
//}

void SetAirconditioner::on_btnPreOff_clicked()
{
    if (!this->timer2->isActive())
    {
        this->timer2->start(4000);
        this->database->HM1CT_IDeactPreHeatCool_B1 = true;
        ui->btnPreOff->setEnabled(false);
        //ui->btnPreOff->setStyleSheet(NBUttonDISABLE);
    }
}

void SetAirconditioner::onTimer2Out()
{
    this->timer2->stop();
    this->database->HM1CT_IDeactPreHeatCool_B1 = false;
    ui->btnPreOff->setEnabled(true);
    //ui->btnPreOff->setStyleSheet(NButtonDOWN);
}

void SetAirconditioner::on_btnAdd_clicked()
{
    int maximum = 0;
    if (manuWarm == this->currentMode)
        maximum = 18;
    else if (manuCold == this->currentMode)
        maximum = 27;
    if (this->setTem < maximum)
        this->setTem++;
    ui->labelTem->setText(QString::number(this->setTem));
}

void SetAirconditioner::on_btnMinus_clicked()
{
    int minimum = 0;
    if (manuWarm == this->currentMode)
        minimum = 12;
    else if (manuCold == this->currentMode)
        minimum = 19;
    if (this->setTem > minimum)
        this->setTem--;
    ui->labelTem->setText(QString::number(this->setTem));
}

void SetAirconditioner::on_btnSetTem_clicked()
{
    this->database->HM1CT_HVACTemp_U8 = this->setTem;
    if (!this->timer3->isActive())
    {
        this->timer3->start(3000);
        this->database->HM1CT_SAVEHVACTemp_B1 = true;
        ui->btnSetTem->setEnabled(false);
    }
}
void SetAirconditioner::onTimer3Out()
{
    this->timer3->stop();
    this->database->HM1CT_SAVEHVACTemp_B1 = false;
    ui->btnSetTem->setEnabled(true);
}

void SetAirconditioner::updateAirStates(QLabel *label, bool run)
{
    if (!run)
    {
        label->setStyleSheet(_OFF);
    }
//    else if (fault)
//    {
//        label->setStyleSheet(_FAULT);
//    }
    else
        //if (run)
    {
        label->setStyleSheet(_RUN);
    }
}

void SetAirconditioner::updatePage()
{
    updateAirStates(ui->labelCompressor11, this->database->CTDT_AC1CTICompressor1sta_B1);
    updateAirStates(ui->labelCompressor12, this->database->CTDT_AC1CTICompressor2sta_B1);
    updateAirStates(ui->labelCompressor21, this->database->CTDT_AC2CTICompressor1sta_B1);
    updateAirStates(ui->labelCompressor22, this->database->CTDT_AC2CTICompressor2sta_B1);
    updateAirStates(ui->labelVentilate1, this->database->CTDT_AC1CTIVentilate1Sta_B1);
    updateAirStates(ui->labelVentilate2, this->database->CTDT_AC2CTIVentilate1Sta_B1);
    updateAirStates(ui->labelCondenser1, this->database->CTDT_AC1CTICondenser1Status_B1);
    updateAirStates(ui->labelCondenser2, this->database->CTDT_AC2CTICondenser1Status_B1);
    updateAirStates(ui->labelHeater11, this->database->CTDT_AC1CTIHeater1Status_B1);
    updateAirStates(ui->labelHeater12, this->database->CTDT_AC1CTIHeater2Status_B1);
    updateAirStates(ui->labelHeater21, this->database->CTDT_AC2CTIHeater1Status_B1);
    updateAirStates(ui->labelHeater22, this->database->CTDT_AC2CTIHeater2Status_B1);
    ui->labelNewWind1->setText(QString::number(this->database->CTDT_AC1CTIFreshTemp_U8));
    ui->labelNewWind2->setText(QString::number(this->database->CTDT_AC2CTIFreshTemp_U8));
    ui->labelReturnWind1->setText(QString::number(this->database->CTDT_AC1CTIReturnTemp_U8));
    ui->labelReturnWind2->setText(QString::number(this->database->CTDT_AC2CTIReturnTemp_U8));

    QList<bool> mode1,mode2;
    mode1 << this->database->CTDT_AC1CTIDevActive_B1 << this->database->CTDT_AC1CTIAutoHeatMode_B1
          << this->database->CTDT_AC1CTIManualHeatMode_B1 << this->database->CTDT_AC1CTIAutoCoolMode_B1
          << this->database->CTDT_AC1CTIManualCoolMode_B1 << this->database->CTDT_AC1CTIVentilateMode_B1
          << this->database->CTDT_AC1CTIPreCoolHeatMode_B1;

    mode2 << this->database->CTDT_AC2CTIDevActive_B1 << this->database->CTDT_AC2CTIAutoHeatMode_B1
          << this->database->CTDT_AC2CTIManualHeatMode_B1 << this->database->CTDT_AC2CTIAutoCoolMode_B1
          << this->database->CTDT_AC2CTIManualCoolMode_B1 << this->database->CTDT_AC2CTIVentilateMode_B1
          << this->database->CTDT_AC2CTIPreCoolHeatMode_B1;

    ui->labelWorkMode1->setText(updateMode(mode1));
    ui->labelWorkMode2->setText(updateMode(mode2));
}

QString SetAirconditioner::updateMode(QList<bool> modes)
{
    if (modes.size()<=0) return "无";
    QString modeString = "";
    int index = 0,sum = 0;
    for (int i = 0; i < modes.size();i++)
    {
        if (modes[i]) index = i;
        sum += modes[i];
    }
    if (sum > 1)
    {
        logger()->error("空调模式不唯一");
        return "模式冲突";
    }
    else
    {
        switch(index)
        {
        case 0: modeString = "关机";
            break;

        case 1:modeString = "自动暖";
            break;

        case 2:modeString = "手动暖";
            break;

        case 3:modeString = "自动冷";
            break;

        case 4:modeString = "手动冷";
            break;

        case 5:modeString = "通风";
            break;

        case 6:modeString = "预冷/暖关";
            break;

        default:modeString = "无";
            break;
        }
        return modeString;
    }
}

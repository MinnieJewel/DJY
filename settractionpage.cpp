#include "settractionpage.h"
#include "ui_settractionpage.h"
#include <QButtonGroup>
#include "utilfunction.h"
enum buttonId
{
    mot11Off = 0,
    mot12Off,
    mot21Off,
    mot22Off,
    EDCutOff1,
    EDCutOff2,
    RstTCU1,
    RstTCU2,
    mendMode
};
SetTractionPage::SetTractionPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetTractionPage)
{
    ui->setupUi(this);
    this->tractButtons= new QButtonGroup;
    this->tractButtons->addButton(ui->btnEle1Seg, mot11Off);
    this->tractButtons->addButton(ui->btnEle2Seg, mot12Off);
    this->tractButtons->addButton(ui->btnEle3Seg, mot21Off);
    this->tractButtons->addButton(ui->btnEle4Seg, mot22Off);
    this->tractButtons->addButton(ui->btnBrk1Cut, EDCutOff1);
    this->tractButtons->addButton(ui->btnBrk2Cut, EDCutOff2);
    this->tractButtons->addButton(ui->btnTract1Reset, RstTCU1);
    this->tractButtons->addButton(ui->btnTract2Reset, RstTCU2);
    this->tractButtons->addButton(ui->btnMend, mendMode);
    ui->btnMend->hide();
    ui->btnBrk1Cut->hide();
    ui->btnBrk2Cut->hide();
    this->tractButtons->setExclusive(false);

    this->initialButtons();
    connect(this->tractButtons, SIGNAL(buttonClicked(int)), this, SLOT(onBtnClicked(int)));
    this->util = new UtilFunction();
}

SetTractionPage::~SetTractionPage()
{
    delete ui;
}

void SetTractionPage::updatePage()
{
    util->showInfo(ui->labelT11, this->database->CTHM_HMIReqFedBk01_B1);
    util->showInfo(ui->labelT12, this->database->CTHM_HMIReqFedBk02_B1);
    util->showInfo(ui->labelT21, this->database->CTHM_HMIReqFedBk03_B1);
    util->showInfo(ui->labelT22, this->database->CTHM_HMIReqFedBk04_B1);
}

void SetTractionPage::initialButtons()
{

    for (int i = mot11Off; i <= mendMode; i++)
    {
        this->tractButtons->button(i)->setCheckable(true);
        this->tractButtons->button(i)->setChecked(false);
        //connect(this->tractButtons->button(i), SIGNAL(toggled(bool)), this, SLOT(onBtnToggled(bool)));
    }
}

//void SetTractionPage::onBtnToggled(bool toggled)
//{
//    int buttonId = this->tractButtons->checkedId();
//    if (- 1 == buttonId)
//    {
//        logger()->error("the buttonId is invalid in tractionButtons;");
//        return;
//    }
//    onBtnClicked(buttonId, toggled);
//}

void SetTractionPage::on_btnBack_clicked()
{
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
}

void SetTractionPage::on_btnLowPower_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uVehicleLogo);
    emit this->changeMiddlePage(uLowPowerTestPage);
    emit this->changeNavigatorPage(uNavigator);
}

void SetTractionPage::onBtnClicked(int id)
{
    switch(id)
    {
    case mot11Off:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_ManMot11Off_B1 = true;
            this->database->HM1CT_ManMot11OffCancel_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_ManMot11Off_B1 = false;
            this->database->HM1CT_ManMot11OffCancel_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;

    case mot12Off:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_ManMot12Off_B1 = true;
            this->database->HM1CT_ManMot12OffCancel_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_ManMot12Off_B1 = false;
            this->database->HM1CT_ManMot12OffCancel_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case mot21Off:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_ManMot21Off_B1 = true;
            this->database->HM1CT_ManMot21OffCancel_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_ManMot21Off_B1 = false;
            this->database->HM1CT_ManMot21OffCancel_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case mot22Off:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_ManMot22Off_B1 = true;
            this->database->HM1CT_ManMot22OffCancel_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_ManMot22Off_B1 = false;
            this->database->HM1CT_ManMot22OffCancel_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case EDCutOff1:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_EDCutOff1_B1 = true;
            this->database->HM1CT_EDCutOff1Cancel_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_EDCutOff1_B1 = false;
            this->database->HM1CT_EDCutOff1Cancel_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case EDCutOff2:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_EDCutOff2_B1 = true;
            this->database->HM1CT_EDCutOff2Cancel_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_EDCutOff2_B1 = false;
            this->database->HM1CT_EDCutOff2Cancel_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case RstTCU1:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_RstTCU1_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_RstTCU1_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case RstTCU2:
        if (this->tractButtons->button(id)->isChecked())
        {
            this->database->HM1CT_RstTCU2_B1 = true;
            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
        }
        else
        {
            this->database->HM1CT_RstTCU2_B1 = false;
            tractButtons->button(id)->setStyleSheet(NButtonUP);
        }
        break;
    case mendMode:
//        if (this->tractButtons->button(id)->isChecked())
//        {
//            this->database->HM1CT_MaintMode_B1 = true;
//            this->database->HM1CT_MaintModeCancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_MaintMode_B1 = false;
//            this->database->HM1CT_MaintModeCancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
        break;
    }
}

//void SetTractionPage::onBtnClicked(int id, bool toggled)
//{
//    switch(id)
//    {
//    case mot11Off:
//        if (toggled)
//        {
//            this->database->HM1CT_ManMot11Off_B1 = true;
//            this->database->HM1CT_ManMot11OffCancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_ManMot11Off_B1 = false;
//            this->database->HM1CT_ManMot11OffCancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;

//    case mot12Off:
//        if (toggled)
//        {
//            this->database->HM1CT_ManMot12Off_B1 = true;
//            this->database->HM1CT_ManMot12OffCancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_ManMot12Off_B1 = false;
//            this->database->HM1CT_ManMot12OffCancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case mot21Off:
//        if (toggled)
//        {
//            this->database->HM1CT_ManMot21Off_B1 = true;
//            this->database->HM1CT_ManMot21OffCancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_ManMot21Off_B1 = false;
//            this->database->HM1CT_ManMot21OffCancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case mot22Off:
//        if (toggled)
//        {
//            this->database->HM1CT_ManMot22Off_B1 = true;
//            this->database->HM1CT_ManMot22OffCancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_ManMot22Off_B1 = false;
//            this->database->HM1CT_ManMot22OffCancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case EDCutOff1:
//        if (toggled)
//        {
//            this->database->HM1CT_EDCutOff1_B1 = true;
//            this->database->HM1CT_EDCutOff1Cancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_EDCutOff1_B1 = false;
//            this->database->HM1CT_EDCutOff1Cancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case EDCutOff2:
//        if (toggled)
//        {
//            this->database->HM1CT_EDCutOff2_B1 = true;
//            this->database->HM1CT_EDCutOff2Cancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_EDCutOff2_B1 = false;
//            this->database->HM1CT_EDCutOff2Cancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case RstTCU1:
//        if (toggled)
//        {
//            this->database->HM1CT_RstTCU1_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_RstTCU1_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case RstTCU2:
//        if (toggled)
//        {
//            this->database->HM1CT_RstTCU2_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_RstTCU2_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    case mendMode:
//        if (toggled)
//        {
//            this->database->HM1CT_MaintMode_B1 = true;
//            this->database->HM1CT_MaintModeCancel_B1 = false;
//            tractButtons->button(id)->setStyleSheet(NButtonDOWN);
//        }
//        else
//        {
//            this->database->HM1CT_MaintMode_B1 = false;
//            this->database->HM1CT_MaintModeCancel_B1 = true;
//            tractButtons->button(id)->setStyleSheet(NButtonUP);
//        }
//        break;
//    }
//}

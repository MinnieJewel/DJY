#include "overtractpage.h"
#include "ui_overtractpage.h"
#include "utilfunction.h"

OverTractPage::OverTractPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::OverTractPage)
{
    ui->setupUi(this);
    ui->btnTractMode->setCheckable(true);
    ui->btnTractMode->setChecked(false);

    //default overTorque cancel
    ui->btnTractMode->setStyleSheet(NButtonUP);
    this->database->HM1CT_OverTorque_B1 = false;
    this->database->HM1CT_OverTorqueCancel_B1 = true;
    this->util = new UtilFunction();
    ui->labelTract->hide();
}

OverTractPage::~OverTractPage()
{
    delete ui;
}

void OverTractPage::on_btnTractMode_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTractMode->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_OverTorque_B1 = true;
        this->database->HM1CT_OverTorqueCancel_B1 = false;
    }
    else
    {
        ui->btnTractMode->setStyleSheet(NButtonUP);
        this->database->HM1CT_OverTorque_B1 = false;
        this->database->HM1CT_OverTorqueCancel_B1 = true;
    }
}

void OverTractPage::updatePage()
{
    util->showInfo(ui->labelTract, this->database->CTHM_HMIReqFedBk07_B1);
}


void OverTractPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
    emit this->changeNavigatorPage(uNavigator);
}

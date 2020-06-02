#include "washmodepage.h"
#include "ui_washmodepage.h"
#include "utilfunction.h"
WashModePage::WashModePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::WashModePage)
{
    ui->setupUi(this);
    this->util = new UtilFunction();
    ui->labelInfo->hide();
    ui->labelInfoCondition->hide();
}

WashModePage::~WashModePage()
{
    delete ui;
}

void WashModePage::updatePage()
{
    this->util->showInfo(ui->labelInfo, this->database->CTHM_WashMode_B1);
    this->util->showInfo(ui->labelInfoCondition, !this->database->CTHM_WashModeCond_B1);
    if (this->database->CTHM_WashModeCond_B1)
        {
            ui->btnWash->setEnabled(true);
            if (ui->btnWash->isChecked())
            {
                ui->btnWash->setStyleSheet(NButtonDOWN);
            }
            else
            {
                ui->btnWash->setStyleSheet(NButtonUP);
            }
        }
        else
        {
            ui->btnWash->setEnabled(false);
            ui->btnWash->setStyleSheet(NButtonDISABLE);
        }
}

void WashModePage::on_btnWash_toggled(bool checked)
{
    if (checked)
    {
        ui->btnWash->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_WashMode_B1 = true;
        this->database->HM1CT_WashModeCancel_B1 = false;
    }
    else
    {
        ui->btnWash->setStyleSheet(NButtonUP);
        this->database->HM1CT_WashMode_B1 = false;
        this->database->HM1CT_WashModeCancel_B1 = true;
    }
}

void WashModePage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
    emit this->changeNavigatorPage(uNavigator);
}

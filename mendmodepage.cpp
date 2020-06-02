#include "mendmodepage.h"
#include "ui_mendmodepage.h"

MendModePage::MendModePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::MendModePage)
{
    ui->setupUi(this);
    ui->btnMend->setCheckable(true);
    ui->btnMend->setChecked(false);
    ui->btnMend->setStyleSheet(NButtonUP);
    showMendInfo(false);
    //default maintain mode is false
    this->database->HM1CT_MaintMode_B1 = false;
    this->database->HM1CT_MaintModeCancel_B1 = true;
}

MendModePage::~MendModePage()
{
    delete ui;
}

void MendModePage::on_btnMend_toggled(bool checked)
{
    if (checked)
    {
        ui->btnMend->setEnabled(false);
        this->showMendInfo(true);
    }
    else
    {
        ui->btnMend->setStyleSheet(NButtonUP);
    }
}

void MendModePage::showMendInfo(bool show)
{
    if (show)
    {
        ui->btnMend->setStyleSheet(NButtonDISABLE);
        ui->labelMendIcon->show();
        ui->labelMendInfo->show();
        ui->btnMendOk->show();
        ui->btnMendCancel->show();
    }
    else
    {
        ui->labelMendIcon->hide();
        ui->labelMendInfo->hide();
        ui->btnMendOk->hide();
        ui->btnMendCancel->hide();
    }
}

void MendModePage::on_btnMendOk_clicked()
{
    ui->btnMend->setChecked(true);
    ui->btnMend->setStyleSheet(NButtonDOWN);
    this->database->HM1CT_MaintMode_B1 = true;
    this->database->HM1CT_MaintModeCancel_B1 = false;
    this->showMendInfo(false);
    ui->btnMend->setEnabled(true);
}

void MendModePage::on_btnMendCancel_clicked()
{
    ui->btnMend->setChecked(false);
    ui->btnMend->setStyleSheet(NButtonUP);
    this->database->HM1CT_MaintMode_B1 = false;
    this->database->HM1CT_MaintModeCancel_B1 = true;
    this->showMendInfo(false);
    ui->btnMend->setEnabled(true);
}

void MendModePage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
    emit this->changeNavigatorPage(uNavigator);
}

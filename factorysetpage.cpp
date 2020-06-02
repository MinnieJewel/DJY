#include "factorysetpage.h"
#include "ui_factorysetpage.h"
#include "MainGetDefaultPara.h"
#include "database.h"
#include "global.h"

FactorySetPage::FactorySetPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::FactorySetPage)
{
    ui->setupUi(this);
}

FactorySetPage::~FactorySetPage()
{
    delete ui;
}

void FactorySetPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
    emit this->changeNavigatorPage(uNavigator);
}

void FactorySetPage::on_btnM1_clicked()
{
    ui->btnM1->setStyleSheet(NButtonDOWN);
    ui->btnM2->setStyleSheet(NButtonUP);
    MainGetDefaultPara::set(QString("Position/HMI"), 1);
    this->database->HMIPosition = 1;

    _LOG << "the hmi position has been set to" << this->database->HMIPosition;
}

void FactorySetPage::on_btnM2_clicked()
{
    ui->btnM1->setStyleSheet(NButtonUP);
    ui->btnM2->setStyleSheet(NButtonDOWN);
    MainGetDefaultPara::set(QString("/Position/HMI"), 2);
    this->database->HMIPosition = 2;

    _LOG << "the hmi position has been set to" << this->database->HMIPosition;
}

void FactorySetPage::on_btn_Restart_clicked()
{
     system("reboot");
}

void FactorySetPage::showEvent(QShowEvent *)
{
    ui->btnM1->setStyleSheet(NButtonUP);
    ui->btnM2->setStyleSheet(NButtonUP);

    if (1 == this->database->HMIPosition)
    {
        ui->btnM1->setStyleSheet(NButtonDOWN);
        ui->labelInfo->setText("当前为M1端，IP：192.168.1.203。");
    }
    else if(2 == this->database->HMIPosition)
    {
        ui->btnM2->setStyleSheet(NButtonDOWN);
        ui->labelInfo->setText("当前为M2端，IP：192.168.1.231。");
    }
}

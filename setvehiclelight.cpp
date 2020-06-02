#include "setvehiclelight.h"
#include "ui_setvehiclelight.h"
#include "h8.h"
#include <QButtonGroup>

#define BRIGHTNESSSCALE  255

enum BUTTONID
{
    AUTOMODE = 0,
    MANUMODE
};

SetVehicleLight::SetVehicleLight(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetVehicleLight)
{
    ui->setupUi(this);
    this->modeButton = new QButtonGroup;
    this->modeButton->addButton(ui->btnModeAuto, AUTOMODE);
    this->modeButton->addButton(ui->btnModeManu, MANUMODE);
    this->modeButton->setExclusive(true);
    ui->btnModeAuto->setStyleSheet(NButtonDOWN);
    ui->btnMinus->setEnabled(false);
    ui->btnPlus->setEnabled(false);
    m_BrightValuefactor = 0.8;
    ui->lbl_set_value->setText(QString::number(m_BrightValuefactor,'f',1));
     connect(this->modeButton, SIGNAL(buttonClicked(int)), this, SLOT(modeButtonsClick(int)));
}

SetVehicleLight::~SetVehicleLight()
{
    delete ui;
}

void SetVehicleLight::modeButtonsClick(int id)
{
    switch (id)
    {
    case AUTOMODE:
        ui->btnModeAuto->setStyleSheet(NButtonDOWN);
        ui->btnModeManu->setStyleSheet(NButtonUP);
        ui->btnMinus->setEnabled(false);
        ui->btnPlus->setEnabled(false);
        H8::getH8()->setBrightness(0);
    break;

    case MANUMODE:
        ui->btnModeAuto->setStyleSheet(NButtonUP);
        ui->btnModeManu->setStyleSheet(NButtonDOWN);
        ui->btnMinus->setEnabled(true);
        ui->btnPlus->setEnabled(true);
        H8::getH8()->setBrightness((int)m_BrightValuefactor);
        break;
    }
}



void SetVehicleLight::on_btnMinus_clicked()
{
    if (m_BrightValuefactor > 0.1)
    {
        m_BrightValuefactor -= 0.1;
    }
    H8::getH8()->setBrightness((int)(BRIGHTNESSSCALE*m_BrightValuefactor));
    this->ui->lbl_set_value->setText(QString::number(m_BrightValuefactor,'f',1));
}


void SetVehicleLight::on_btnPlus_clicked()
{
    if(m_BrightValuefactor < 1)
    {
        m_BrightValuefactor += 0.1;
    }
    H8::getH8()->setBrightness((int)(BRIGHTNESSSCALE*m_BrightValuefactor));
    this->ui->lbl_set_value->setText(QString::number(m_BrightValuefactor,'f',1));
}

void SetVehicleLight::on_btnBack_clicked()
{
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
}

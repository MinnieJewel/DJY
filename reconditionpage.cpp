#include "reconditionpage.h"
#include "ui_reconditionpage.h"
#include <QButtonGroup>
#define NRECONDITIONButtonUP    "outline:none; font:25px,\"SimHei\";color: rgb(0, 32, 96);border-image: url(:/image/buttonUP.jpg);border-radius:2px;"
#define NRECONDITIONButtonDOWN  "outline:none; font:25px, \"SimHei\";color: white;border-image: url(:/image/buttonDOWN.jpg);border-radius:2px;"
enum buttonId
{
    uTraction = 0,
    uAux,
    uBrake,
    //uAirconditioner,
    uIO,
    uVersion,
    uPassword,
    uWheelset,
    uSendsand,
    //uCutRim,
    uAccumulate,
    uPortData,
    uBroadcast,
    uTestSpeed,
    uModeSpeed
};
ReconditionPage::ReconditionPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ReconditionPage)
{
    ui->setupUi(this);
    this->buttonGroup = new QButtonGroup;
    this->buttonGroup->addButton(ui->btnTraction, uTraction);
    this->buttonGroup->addButton(ui->btnAux, uAux);
    this->buttonGroup->addButton(ui->btnBrake, uBrake);
    //this->buttonGroup->addButton(ui->btnAircondition, uAirconditioner);
    this->buttonGroup->addButton(ui->btnIO, uIO);
    this->buttonGroup->addButton(ui->btnVersion, uVersion);
    this->buttonGroup->addButton(ui->btnModpass, uPassword);
    this->buttonGroup->addButton(ui->btnWheelDia, uWheelset);
    this->buttonGroup->addButton(ui->btnSand, uSendsand);
    //this->buttonGroup->addButton(ui->btnCutRim, uCutRim);
    this->buttonGroup->addButton(ui->btnAccumulate, uAccumulate);
    this->buttonGroup->addButton(ui->btnPortData, uPortData);
    //this->buttonGroup->addButton(ui->btnBroadcast, uBroadcast);
    this->buttonGroup->addButton(ui->btnTestSpeed, uTestSpeed);
    this->buttonGroup->addButton(ui->btnModeSpeed, uModeSpeed);
    this->buttonGroup->setExclusive(true);
    ui->btnAircondition->hide();
    connect(this->buttonGroup, SIGNAL(buttonClicked(int)), this, SLOT(onButtonClicked(int)));
    ui->btnCutRim->setCheckable(true);
    ui->btnCutRim->setChecked(false);
    connect(ui->btnCutRim, SIGNAL(toggled(bool)), this, SLOT(onRimCutBtnClicked(bool)));

}

ReconditionPage::~ReconditionPage()
{
    delete ui;
}

void ReconditionPage::onRimCutBtnClicked(bool checked)
{
    if (checked)
    {
        ui->btnCutRim->setStyleSheet(NRECONDITIONButtonDOWN);
        this->database->HM1CT_CutoffLY_B1 = true;
    }
    else
    {
        ui->btnCutRim->setStyleSheet(NRECONDITIONButtonUP);
        this->database->HM1CT_CutoffLY_B1 = false;
    }

}

void ReconditionPage::onButtonClicked(int id)
{
    switch (id)
    {
    case uTraction:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uTractionInfoPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case uAux:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSIVInfoPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case uBrake:        
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uBrakeInfoPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    //case uAirconditioner:
        //emit this->changeHeaderPage(uHeader);
        //emit this->changeLogoPage(uInvalid);
        //emit this->changeMiddlePage(uAirConditionerPage);
        //emit this->changeNavigatorPage(uNavigator);
        break;
    case uIO:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uIOSignalsPage);
        emit this->changeNavigatorPage(uInvalid);
        break;
    case uVersion:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uVersionInfoPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case uPassword:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uModifyPwdPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case uWheelset:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uSetWheelPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case uSendsand:        
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSentSandPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
//    case uCutRim:
//        break;
    case uAccumulate:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uCumulateDataPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case uPortData:
        emit this->changeHeaderPage(uInvalid);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uPortDataPage);
        emit this->changeNavigatorPage(uInvalid);
        break;

//    case uBroadcast:
//        emit this->changeHeaderPage(uHeader);
//        emit this->changeLogoPage(uInvalid);
//        emit this->changeMiddlePage(uBroadcastPage);
//        emit this->changeNavigatorPage(uNavigator);
//        break;

    case uTestSpeed:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSpeedTestPage);
        break;
    case uModeSpeed:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uModeAndSpeedPage);
        break;
    }
}

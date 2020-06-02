#include "settingpage.h"
#include "ui_settingpage.h"
#include <QButtonGroup>

enum ButtonNo
{
    setTime = 0,
    airConditioner,
    DCDC,
    traction,
    setVehicleNo,
    setLight,
    tryLight,
    mend,
    wash,
    overTract,
    heat,
    trainBack,
    pisTest,
    factorySet
};

SettingPage::SettingPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SettingPage)
{
    ui->setupUi(this);
    ui->btnHeat->hide();
    ui->btnTrainBack->hide();
    this->setGroup = new QButtonGroup;
    this->setGroup->addButton(ui->btnSetTime, setTime);
    this->setGroup->addButton(ui->btnSetAircondition, airConditioner);
    this->setGroup->addButton(ui->btnSetDCDC, DCDC);
    this->setGroup->addButton(ui->btnSetTraction, traction);
    this->setGroup->addButton(ui->btnSetVehicleNo, setVehicleNo);
    this->setGroup->addButton(ui->btnSetL, setLight);
    this->setGroup->addButton(ui->btnLight, tryLight);
    this->setGroup->addButton(ui->btnMend, mend);
    this->setGroup->addButton(ui->btnWash, wash);
    this->setGroup->addButton(ui->btnTractMode, overTract);
    this->setGroup->addButton(ui->btnHeat, heat);
    this->setGroup->addButton(ui->btnTrainBack, trainBack);
    this->setGroup->addButton(ui->btnPISTest, pisTest);
    this->setGroup->addButton(ui->btnFactorySet, factorySet);
    this->setGroup->setExclusive(true);
    connect(setGroup, SIGNAL(buttonClicked(int)), this, SLOT(onNumberClicked(int)));
}

SettingPage::~SettingPage()
{
    delete ui;
}





void SettingPage::onNumberClicked(int number)
{
    switch (number)
    {
    case setTime:
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSetTimePage);
        break;

    case airConditioner:
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uSetAirconditioner);
        break;
    case DCDC:
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uDCDCPage);
        break;
    case traction:        
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uSetTractionPage);
        break;
    case setVehicleNo:
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSetVehicleNo);
        break;
    case setLight:
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSetVehicleLight);
        break;    
    case pisTest:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uBroadcastPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case wash:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uWashModePage);
        emit this->changeNavigatorPage(uNavigator);
        break;

    case overTract:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uOverTractPage);
        emit this->changeNavigatorPage(uNavigator);
        break;

    case tryLight:break;
    case mend:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uMendModePage);
        emit this->changeNavigatorPage(uNavigator);
        break;

    case factorySet:
        emit this->changeHeaderPage(uHeader);
        emit this->changeMiddlePage(uFactorySetPage);
        emit this->changeNavigatorPage(uNavigator);
        break;
    }
}








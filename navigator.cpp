#include "navigator.h"
#include "ui_navigator.h"
#include <QButtonGroup>
#include "bypasspage.h"

#define _NavigatorUP ("	border-radius:9px; background-color:white;font:20px, SimHei;outline:none;")
#define _NavigatorDOWN ("border-radius:9px; background-color:green;font:20px, SimHei;outline:none;")
#define _ByPass ("border-radius:9px; background-color:yellow;font:20px, SimHei;outline:none;")

enum navigatorId
{
    runState = 0,
    netWork,
    byPass,
    setting,
    recondition,
    eventPage
};
Navigator::Navigator(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Navigator)
{
    ui->setupUi(this);
    this->bypassPage = new ByPassPage();
    this->navigatorGroup = new QButtonGroup;
    this->navigatorGroup->addButton(ui->btnRunstatePage, runState);
    this->navigatorGroup->addButton(ui->btnNetworkPage, netWork);
    this->navigatorGroup->addButton(ui->btnBypass, byPass);
    this->navigatorGroup->addButton(ui->btnConfig, setting);
    this->navigatorGroup->addButton(ui->btnRecondition, recondition);
    this->navigatorGroup->addButton(ui->btnEvent, eventPage);

    this->navigatorGroup->setExclusive(true);

    connect(this->navigatorGroup, SIGNAL(buttonClicked(int)), this, SLOT(onBtnGroupClicked(int)));
    changeStyle(runState);
}

Navigator::~Navigator()
{
    delete ui;
}

void Navigator::changeStyle(int id)
{
    if (byPass == id)
    {
        if (this->bypassPage->getBypass())
        return;
    }
    for (int i = 0; i < this->navigatorGroup->buttons().size(); i++)
    {
        if (this->navigatorGroup->button(i))
        this->navigatorGroup->button(i)->setStyleSheet(_NavigatorUP);
        else logger()->error("button number" + QString::number(i) + " is not in the navigatorGroup");
    }

    if (this->navigatorGroup->button(id))
        this->navigatorGroup->button(id)->setStyleSheet(_NavigatorDOWN);
    else logger()->error("button number" + QString::number(id) + " is not in the navigatorGroup");
}

void Navigator::onBtnGroupClicked(int clickId)
{
    switch (clickId)
    {
    case runState:
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uRunStatePage);
        break;

    case netWork:
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uNetworkPage);
        break;
    case byPass:
        emit this->changeLogoPage(uVehicleLogo);
        emit this->changeMiddlePage(uByPassPage);
        break;
    case setting:
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSettingPage);
        break;
    case recondition:
        emit this->changeMiddlePage(uLoginPage);
        emit this->changeLogoPage(uInvalid);
        emit this->changeNavigatorPage(uInvalid);
        break;
    case eventPage:
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uEventPage);
        break;

    default:
        logger()->error("navigator buttonGroup click error, click number:" + clickId);
    }
    emit this->changeHeaderPage(uHeader);
    emit this->changeNavigatorPage(uNavigator);
    changeStyle(clickId);
}
void Navigator::setHelpPage(int id)
{
    this->helpPageNo = id;
    if (uInvalid == this->helpPageNo)
        ui->btnHelp->hide();
    else
        ui->btnHelp->show();
}

void Navigator::updatePage()
{
    if (this->bypassPage->getBypass())
        this->navigatorGroup->button(byPass)->setStyleSheet(_YELLOW);
}

void Navigator::on_btnHelp_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(this->helpPageNo);
    emit this->changeNavigatorPage(uNavigator);
}

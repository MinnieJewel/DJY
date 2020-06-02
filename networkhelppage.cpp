#include "networkhelppage.h"
#include "ui_networkhelppage.h"

NetworkHelpPage::NetworkHelpPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::NetworkHelpPage)
{
    ui->setupUi(this);
}

NetworkHelpPage::~NetworkHelpPage()
{
    delete ui;
}

void NetworkHelpPage::on_btnBack_clicked()
{
    emit this->changeLogoPage(uVehicleLogo);
    emit this->changeMiddlePage(uNetworkPage);
    emit this->changeNavigatorPage(uNavigator);
}

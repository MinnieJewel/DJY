#include "bypasshelppage.h"
#include "ui_bypasshelppage.h"

ByPassHelpPage::ByPassHelpPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ByPassHelpPage)
{
    ui->setupUi(this);
}

ByPassHelpPage::~ByPassHelpPage()
{
    delete ui;
}

void ByPassHelpPage::on_btnBack_clicked()
{
    emit this->changeLogoPage(uVehicleLogo);
    emit this->changeMiddlePage(uByPassPage);
}

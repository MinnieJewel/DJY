#include "setairconditionerhelp.h"
#include "ui_setairconditionerhelp.h"

SetAirconditionerHelp::SetAirconditionerHelp(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetAirconditionerHelp)
{
    ui->setupUi(this);
}

SetAirconditionerHelp::~SetAirconditionerHelp()
{
    delete ui;
}

void SetAirconditionerHelp::on_btnBack_clicked()
{
    emit this->changeLogoPage(uVehicleLogo);
    emit this->changeMiddlePage(uSetAirconditioner);
    emit this->changeNavigatorPage(uNavigator);
}

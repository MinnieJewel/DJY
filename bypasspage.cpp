#include "bypasspage.h"
#include "ui_bypasspage.h"

ByPassPage::ByPassPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ByPassPage)
{
    ui->setupUi(this);
    isBypass = false;
}

ByPassPage::~ByPassPage()
{
    delete ui;
}

void ByPassPage::setByPass(QLabel *label, bool bypass)
{
    if (bypass)
    {
        label->setStyleSheet(_YELLOW);        
    }
    else
    {
        label->setStyleSheet(_GREEN);        
    }
}

bool ByPassPage::getBypass()
{
    return  isBypass;
}

void ByPassPage::updatePage()
{
    setByPass(ui->labelDeadman1, this->database->RM1CT_DX1DI11DdManActive_B1);
    setByPass(ui->labelDeadman2, this->database->RM6CT_DX1DI11DdManActive_B1);
    setByPass(ui->labelDoorCtrl1, this->database->RM5CT_DX1DI27DrsIsolRly_B1);
   // setByPass(ui->labelDoorCtrl2, this->database->RM6CT_DX1DI7DrsCtrIsolSw_B1);
    setByPass(ui->labelATC1, this->database->RM1CT_DX1DI23ATCCutoff_B1);
    setByPass(ui->labelATC2, this->database->RM6CT_DX1DI23ATCCutoff_B1);
    setByPass(ui->labelZeroSpeed1, this->database->RM1CT_DX2DI29Zerospeedbypass_B1);
    setByPass(ui->labelZeroSpeed2, this->database->RM6CT_DX2DI29Zerospeedbypass_B1);
    this->isBypass = this->database->RM1CT_DX1DI11DdManActive_B1 || this->database->RM6CT_DX1DI11DdManActive_B1 || this->database->RM5CT_DX1DI27DrsIsolRly_B1
    || this->database->RM1CT_DX1DI23ATCCutoff_B1 || this->database->RM6CT_DX1DI23ATCCutoff_B1 || this->database->RM1CT_DX2DI29Zerospeedbypass_B1 || this->database->RM6CT_DX2DI29Zerospeedbypass_B1;
}

#include "setvehicleno.h"
#include "ui_setvehicleno.h"
#include "global.h"
#include "numberbuttons.h"
#include <QButtonGroup>
#include <QTimer>

enum numbers
{
    number0 = 0,
    number1,
    number2,
    number3,
    number4,
    number5,
    number6,
    number7,
    number8,
    number9,
    numberClear,
    confirm,
    back
};

enum id
{
    vehicleNo = 0,
    lineNo
};

SetVehicleNo::SetVehicleNo(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetVehicleNo)
{
    ui->setupUi(this);
    this->numberButtons = new NumberButtons(this);
    this->numberButtons->setGeometry(510, 110, this->numberButtons->width(), this->numberButtons->height());
    this->numberButtons->show();
    this->numberButtons->hideButtons(false, false, false);
    this->setId = vehicleNo;
    connect(this->numberButtons->groupButtons, SIGNAL(buttonClicked(int)), this, SLOT(onNumberButtonClicked(int)));

    this->setGroup = new QButtonGroup;
    this->setGroup->addButton(ui->btnVehicleNo, vehicleNo);
    this->setGroup->addButton(ui->btnLineNo, lineNo);
    this->setGroup->setExclusive(true);
    connect(this->setGroup, SIGNAL(buttonClicked(int)), this, SLOT(onSetButtonClicked(int)));
    this->timer = new QTimer;
    this->timer->stop();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(onTimerOut()));
}

SetVehicleNo::~SetVehicleNo()
{
    delete ui;
}

void SetVehicleNo::showEvent(QShowEvent *)
{
    this->setGroup->button(vehicleNo)->setText(QString::number(this->database->CTHM_TrainNumber_U8));
    this->setGroup->button(lineNo)->setText(QString::number(this->database->CTHM_PathID_U16));
    this->setGroup->button(vehicleNo)->setStyleSheet(NButtonDOWNNUMBER);
    this->setGroup->button(lineNo)->setStyleSheet(NButtonUPNUMBER);
}

void SetVehicleNo::onSetButtonClicked(int id)
{
    this->setId = id;
    if (id == vehicleNo)
    {
        ui->btnVehicleNo->setStyleSheet(NButtonDOWNNUMBER);
        ui->btnLineNo->setStyleSheet(NButtonUPNUMBER);
    }
    else
    {
        ui->btnVehicleNo->setStyleSheet(NButtonUPNUMBER);
        ui->btnLineNo->setStyleSheet(NButtonDOWNNUMBER);
    }
}

void SetVehicleNo::onNumberButtonClicked(int buttonId)
{
    int setNo = 0;
    switch(buttonId)
    {
    case numberClear:
        this->setGroup->button(this->setId)->setText("");
        break;

    case back:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSettingPage);
        emit this->changeNavigatorPage(uNavigator);
        break;

    case confirm:
        setNo = this->setGroup->button(this->setId)->text().toUInt();
        if (vehicleNo == this->setId)
        {
            this->database->HM1CT_TrainNum_U16 = setNo;
            this->database->HM1CT_SAVETrainNum_B1 = true;
        }
        else
        {
            this->database->HM1CT_LineNum_U16 = setNo;
            this->database->HM1CT_SAVELineNum_B1 = true;
        }
        if (!this->timer->isActive())
            this->timer->start(3000);
        this->numberButtons->disableButtons(true, true, true);
        break;

    default:
    QString text = this->setGroup->button(this->setId)->text();
//    if (text.length() >=3 || "0" == text)
//    {
//        text.clear();
//    }
    this->setGroup->button(this->setId)->setText(text.append(QString::number(buttonId)));
    }
}

void SetVehicleNo::onTimerOut()
{
    this->timer->stop();
    this->database->HM1CT_SAVETrainNum_B1 = false;
    this->database->HM1CT_SAVELineNum_B1 = false;
    this->numberButtons->disableButtons(false, false, false);
}


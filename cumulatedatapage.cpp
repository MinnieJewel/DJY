#include "cumulatedatapage.h"
#include "ui_cumulatedatapage.h"
#include <QButtonGroup>
#include "horizontalbuttons.h"
#include <QDateTime>
enum accumulateId
{
    TractionEnergyTimeY = 0,
    ReEngyTimeY,
    AxPowerTimeY,
    TotalKiloTimeY,
    ServiceKiloTimeY,
    TcmsTimeTimeY,
    AirPressTime1TimeY,
    AirPressTime2TimeY,
    TractionEnergyTimeM,
    ReEngyTimeM,
    AxPowerTimeM,
    TotalKiloTimeM,
    ServiceKiloTimeM,
    TcmsTimeTimeM,
    AirPressTime1TimeM,
    AirPressTime2TimeM,
    TractionEnergyTimeD,
    ReEngyTimeD,
    AxPowerTimeD,
    TotalKiloTimeD,
    ServiceKiloTimeD,
    TcmsTimeTimeD,
    AirPressTime1TimeD,
    AirPressTime2TimeD,
    TractionEnergy,
    ReEngy,
    AxPower,
    TotalKilo,
    ServiceKilo,
    TcmsTime,
    AirPressTime1,
    AirPressTime2
};

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

CumulateDataPage::CumulateDataPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::CumulateDataPage)
{
    ui->setupUi(this);
    this->accumulateButtons = new QButtonGroup;

    this->accumulateButtons->addButton(ui->btnTractionEnergyTimeY, TractionEnergyTimeY);
    this->accumulateButtons->addButton(ui->btnReEngyTimeY, ReEngyTimeY);
    this->accumulateButtons->addButton(ui->btnAxPowerTimeY, AxPowerTimeY);
    this->accumulateButtons->addButton(ui->btnTotalKiloTimeY, TotalKiloTimeY);
    this->accumulateButtons->addButton(ui->btnServiceKiloTimeY, ServiceKiloTimeY);
    this->accumulateButtons->addButton(ui->btnTcmsTimeTimeY, TcmsTimeTimeY);
    this->accumulateButtons->addButton(ui->btnAirPressTime1TimeY, AirPressTime1TimeY);
    this->accumulateButtons->addButton(ui->btnAirPressTime2TimeY, AirPressTime2TimeY);

    this->accumulateButtons->addButton(ui->btnTractionEnergyTimeM, TractionEnergyTimeM);
    this->accumulateButtons->addButton(ui->btnReEngyTimeM, ReEngyTimeM);
    this->accumulateButtons->addButton(ui->btnAxPowerTimeM, AxPowerTimeM);
    this->accumulateButtons->addButton(ui->btnTotalKiloTimeM, TotalKiloTimeM);
    this->accumulateButtons->addButton(ui->btnServiceKiloTimeM, ServiceKiloTimeM);
    this->accumulateButtons->addButton(ui->btnTcmsTimeTimeM, TcmsTimeTimeM);
    this->accumulateButtons->addButton(ui->btnAirPressTime1TimeM, AirPressTime1TimeM);
    this->accumulateButtons->addButton(ui->btnAirPressTime2TimeM, AirPressTime2TimeM);

    this->accumulateButtons->addButton(ui->btnTractionEnergyTimeD, TractionEnergyTimeD);
    this->accumulateButtons->addButton(ui->btnReEngyTimeD, ReEngyTimeD);
    this->accumulateButtons->addButton(ui->btnAxPowerTimeD, AxPowerTimeD);
    this->accumulateButtons->addButton(ui->btnTotalKiloTimeD, TotalKiloTimeD);
    this->accumulateButtons->addButton(ui->btnServiceKiloTimeD, ServiceKiloTimeD);
    this->accumulateButtons->addButton(ui->btnTcmsTimeTimeD, TcmsTimeTimeD);
    this->accumulateButtons->addButton(ui->btnAirPressTime1TimeD, AirPressTime1TimeD);
    this->accumulateButtons->addButton(ui->btnAirPressTime2TimeD, AirPressTime2TimeD);

    this->accumulateButtons->addButton(ui->btnTractionEnergy, TractionEnergy);
    this->accumulateButtons->addButton(ui->btnReEngy, ReEngy);
    this->accumulateButtons->addButton(ui->btnAxPower, AxPower);
    this->accumulateButtons->addButton(ui->btnTotalKilo, TotalKilo);
    this->accumulateButtons->addButton(ui->btnServiceKilo, ServiceKilo);
    this->accumulateButtons->addButton(ui->btnTcmsTime, TcmsTime);
    this->accumulateButtons->addButton(ui->btnAirPressTime1, AirPressTime1);
    this->accumulateButtons->addButton(ui->btnAirPressTime2, AirPressTime2);
    this->accumulateButtons->setExclusive(true);
    connect(this->accumulateButtons, SIGNAL(buttonClicked(int)), this, SLOT(onAccumulateButtonClicked(int)));

    this->horizontalButtons = new HorizontalButtons(this);
    this->horizontalButtons->setGeometry(0, 350, this->horizontalButtons->width(), this->horizontalButtons->height());
    connect(this->horizontalButtons->groupButtons, SIGNAL(buttonClicked(int)), this, SLOT(onNumbersButtonClicked(int)));
    this->selecteId = 0;
    this->text = "";
    this->remindText = "";
    this->setTime = false;
    this->setvalues = false;
    //restore the id of button clicked
    this->accumulateId = 0;
    //restore the tag value send to MVB
    this->accumulateTagId = 0;
    //restore which item's time should be set
    this->timeButtonId = 0;
}

CumulateDataPage::~CumulateDataPage()
{
    delete ui;
}

void CumulateDataPage::showEvent(QShowEvent *)
{
//    ui->btnTractionEnergyTime->setText("2000/00/00");
//    ui->btnReEngyTime->setText("2000/00/00");
//    ui->btnAxPowerTime->setText("2000/00/00");
//    ui->btnTotalKiloTime->setText("2000/00/00");
//    ui->btnServiceKiloTime->setText("2000/00/00");
//    ui->btnTcmsTimeTime->setText("2000/00/00");
//    ui->btnAirPressTime1Time->setText("2000/00/00");
//    ui->btnAirPressTime2Time->setText("2000/00/00");
//    ui->btnTractionEnergy->setText(QString::number("0"));
//    ui->btnReEngy->setText("0");
//    ui->btnAxPower->setText("0");
//    ui->btnTotalKilo->setText("0");
//    ui->btnServiceKilo->setText("0");
//    ui->btnTcmsTime->setText("0");
//    ui->btnAirPressTime1->setText("0");
//    ui->btnAirPressTime2->setText("0");
    ui->btnTractionEnergyTimeY->setText("2000");
    ui->btnTractionEnergyTimeM->setText("00");
    ui->btnTractionEnergyTimeD->setText("00");

    ui->btnReEngyTimeY->setText("2000");
    ui->btnReEngyTimeM->setText("00");
    ui->btnReEngyTimeD->setText("00");

    ui->btnAxPowerTimeY->setText("2000");
    ui->btnAxPowerTimeM->setText("00");
    ui->btnAxPowerTimeD->setText("00");

    ui->btnTotalKiloTimeY->setText("2000");
    ui->btnTotalKiloTimeM->setText("00");
    ui->btnTotalKiloTimeD->setText("00");

    ui->btnServiceKiloTimeY->setText("2000");
    ui->btnServiceKiloTimeM->setText("00");
    ui->btnServiceKiloTimeD->setText("00");

    ui->btnTcmsTimeTimeY->setText("2000");
    ui->btnTcmsTimeTimeM->setText("00");
    ui->btnTcmsTimeTimeD->setText("00");

    ui->btnAirPressTime1TimeY->setText("2000");
    ui->btnAirPressTime1TimeM->setText("00");
    ui->btnAirPressTime1TimeD->setText("00");

    ui->btnAirPressTime2TimeY->setText("2000");
    ui->btnAirPressTime2TimeM->setText("00");
    ui->btnAirPressTime2TimeD->setText("00");

    ui->btnTractionEnergy->setText(QString::number(0));
    ui->btnReEngy->setText(QString::number(0));
    ui->btnAxPower->setText(QString::number(0));
    ui->btnTotalKilo->setText(QString::number(0));
    ui->btnServiceKilo->setText(QString::number(0));
    ui->btnTcmsTime->setText(QString::number(0));
    ui->btnAirPressTime1->setText(QString::number(0));
    ui->btnAirPressTime2->setText(QString::number(0));
}

//void CumulateDataPage::on_btnBack_clicked()
//{
//    emit this->changeHeaderPage(uHeader);
//    emit this->changeLogoPage(uInvalid);
//    emit this->changeMiddlePage(uRecondition);
//    emit this->changeNavigatorPage(uNavigator);
//}

void CumulateDataPage::updateButtonStyle(int id)
{
    for (int i = 0; i < this->accumulateButtons->buttons().size(); i++)
    {
        this->accumulateButtons->button(i)->setStyleSheet(NButtonUP);
    }
    if (this->accumulateButtons->button(id))
        this->accumulateButtons->button(id)->setStyleSheet(NButtonDOWN);
}

void CumulateDataPage::onAccumulateButtonClicked(int accumulateId)
{
    this->updateButtonStyle(accumulateId);
    this->selecteId = accumulateId;
    this->text = this->accumulateButtons->button(accumulateId)->text();
    switch (accumulateId)
    {
    case TractionEnergyTimeY :case TractionEnergyTimeM :case TractionEnergyTimeD:
        this->setTime = true;
        this->setvalues = false;
        this->accumulateTagId = 0xE2;
        this->timeButtonId = TractionEnergyTimeY;
        this->remindText = "牵引能耗起始时间";
        break;

    case ReEngyTimeY :case ReEngyTimeM :case ReEngyTimeD:
        this->accumulateTagId = 0xE4;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = ReEngyTimeY;
        this->remindText = "再生电量起始时间";
        break;

    case AxPowerTimeY :case AxPowerTimeM :case AxPowerTimeD:
        this->accumulateTagId = 0xE3;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = AxPowerTimeY;
        this->remindText = "辅助能耗起始时间";
        break;

    case TotalKiloTimeY :case TotalKiloTimeM :case TotalKiloTimeD:
        this->accumulateTagId = 0xE1;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = TotalKiloTimeY;
        this->remindText = "总里程起始时间";
        break;

    case ServiceKiloTimeY :case ServiceKiloTimeM :case ServiceKiloTimeD:
        this->accumulateTagId = 0xE5;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = ServiceKiloTimeY;
        this->remindText = "检修里程起始时间";
        break;

    case TcmsTimeTimeY :case TcmsTimeTimeM :case TcmsTimeTimeD:
        this->accumulateTagId = 0xE8;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = TcmsTimeTimeY;
        this->remindText = "TCMS总运行时间起始时间";
        break;

    case AirPressTime1TimeY :case AirPressTime1TimeM :case AirPressTime1TimeD:
        this->accumulateTagId = 0xE6;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = AirPressTime1TimeY;
        this->remindText = "空压机1运行时间起始时间";
        break;

    case AirPressTime2TimeY :case AirPressTime2TimeM :case AirPressTime2TimeD:
        this->accumulateTagId = 0xE7;
        this->setTime = true;
        this->setvalues = false;
        this->timeButtonId = AirPressTime2TimeY;
        this->remindText = "空压机2运行时间起始时间";
        break;

    case TractionEnergy:
        this->accumulateTagId = 0xF2;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "牵引能耗";
        break;

    case ReEngy:
        this->accumulateTagId = 0xF4;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "再生电量";
        break;

    case AxPower:
        this->accumulateTagId = 0xF3;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "辅助能耗";
        break;

    case TotalKilo:
        this->accumulateTagId = 0xF1;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "总里程";
        break;

    case ServiceKilo:
        this->accumulateTagId = 0xF5;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "检修里程";
        break;

    case TcmsTime:
        this->accumulateTagId = 0xF8;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "TCMS总运行时间";
        break;

    case AirPressTime1:
        this->accumulateTagId = 0xF6;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "空压机1运行时间";
        break;

    case AirPressTime2:
        this->accumulateTagId = 0xF7;
        this->setTime = false;
        this->setvalues = true;
        this->remindText = "空压机2运行时间";
        break;
    }
}


void CumulateDataPage::onNumbersButtonClicked(int id)
{
    QString textInfoAppend = "";
    if (!this->accumulateButtons->button(this->selecteId))
        return;
    switch(id)
    {
    case numberClear:
        this->accumulateButtons->button(this->selecteId)->setText("");
        break;
    case back:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uRecondition);
        emit this->changeNavigatorPage(uNavigator);
        break;

    case confirm:

        if (this->setTime && !this->setvalues)
        {

            if (this->accumulateButtons->button(this->timeButtonId) && this->accumulateButtons->button(this->timeButtonId + 8)
                && this->accumulateButtons->button(this->timeButtonId + 16))
                {
                int year = this->accumulateButtons->button(this->timeButtonId)->text().toUInt();
                int month = this->accumulateButtons->button(this->timeButtonId + 8)->text().toUInt();
                int day = this->accumulateButtons->button(this->timeButtonId + 16)->text().toUInt();
                if (QDate::isValid(year, month, day))
                {
                    this->database->HM1CT_SetTagAccTime_U8 = this->accumulateTagId;
                    this->database->HM1CT_SetAccTimeYear_U8 = year;
                    this->database->HM1CT_SetAccTimeMonth_U8 = month;
                    this->database->HM1CT_SetAccTimeDay_U8 = day;
                    textInfoAppend = "设置成功。";
                }
                else
                textInfoAppend = "格式不正确。";
            }
            else
                textInfoAppend = "设置失败。";
        }
        else if (!this->setTime && this->setvalues)
        {
            int value = this->accumulateButtons->button(this->selecteId)->text().toUInt();
            this->database->HM1CT_SetTagAccData_U8 = this->accumulateTagId;
            this->database->HM1CT_SetAccData_U32 = value;
            textInfoAppend = "设置成功。";
        }
        else
           textInfoAppend = "设置失败，请选择要设置内容。";

        ui->labelInfo->setText(this->remindText + textInfoAppend);
        break;

    default:
        QString text = this->accumulateButtons->button(this->selecteId)->text();
        this->accumulateButtons->button(this->selecteId)->setText(text.append(QString::number(id)));
    }
}

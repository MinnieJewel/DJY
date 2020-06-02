#include "header.h"
#include "ui_header.h"
#include "crrcfault.h"
#include <QDateTime>

Header::Header(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::Header)
{
    ui->setupUi(this);   
    this->setPageName("运行");
    ui->labelConnFault->hide();
    ui->labelFaultComfirm->hide();
    ui->btnConfirm->hide();
    ui->btnConfirmAll->hide();
}

Header::~Header()
{
    delete ui;
}

void Header::updatePage()
{
    ui->label_Time->setText(QDateTime::currentDateTime().date().toString("yyyy-MM-dd")+" "
                            +QDateTime::currentDateTime().time().toString("hh:mm:ss"));
    setVehicleNo(QString::number(this->database->CTHM_TrainNumber_U8));
    setVoltage(QString::number(qAbs(this->database->CTHM_HvValue_I16)));
    setSpeed(QString::number(this->database->CTHM_TrainSpeed_U16));

    this->showIcon(ui->labelRestrictSpeed, this->database->CTHM_SpeedLimMode_B1);
    this->showIcon(ui->labelWashMode, this->database->CTHM_WashMode_B1);
    this->showIcon(ui->labelDrag, this->database->CTHM_Coupled_B1);
    this->showIcon(ui->labelFault, this->crrcFault->getCurrentFaultListSize()>0);
    this->showIcon(ui->labelMend, this->database->CTHM_HMIReqFedBk15_B1);
    this->showIcon(ui->labelTractionActive, this->database->CTTR1_CTractionAuth_B1 || this->database->CTTR2_CTractionAuth_B1);
    this->showIcon(ui->labelTalkToPassenger, this->database->CTHM_CPSta_B1);
    this->showIcon(ui->labelBrake, this->database->CTHM_EmgyBrake_B1);//EB

//    if (!this->database->hmiCcuOnlineState)
//    {
//        static int blinkF = 0;
//        if (blinkF++ > 2)
//        {
//            ui->labelConnFault->show();
//            if (blinkF > 5)
//                blinkF = 0;
//        }
//        else
//        {
//            ui->labelConnFault->hide();
//        }
//    }
//    else {
        ui->labelConnFault->hide();
        //show fault confirm window
            updateConfirmFault();
 //       }


}

void Header::installCrrcFault(CrrcFault *crrcFault)
{
    this->crrcFault = crrcFault;
}

void Header::setPageName(QString name)
{
    ui->label_Title->setText(name);
}

void Header::setVehicleNo(QString number)
{
    ui->label_CarNumber->setText("车号：" + number);
}

void Header::setSpeed(QString speed)
{
    ui->label_Speed->setText("车速:" + speed);
}

void Header::setVoltage(QString voltage)
{
    ui->labelVoltage->setText("受电弓:" + voltage);
}

void Header::showIcon(QLabel *label, bool signal)
{
    if (signal)
        label->show();
    else
        label->hide();
}

void Header::startRollingFault(bool flg)
{
    m_rollingfaultstart = flg;
}

void Header::updateConfirmFault()
{
    if(m_rollingfaultstart)
    {
        if(crrcFault->getConfirmFaultListSize() > 0)
        {
            confirmAlarmState(true);

            // 当有新故障时，列表从0开始滚动
            if(crrcFault->NewFaultOccur)
            {
                m_FaultIndex = 0;
            }

            if(m_rollingfaultcnt++>10)
            {
                m_rollingfaultcnt = 0;
                if(m_FaultIndex < crrcFault->getConfirmFaultListSize()-1)
                {
                    m_FaultIndex++;
                }else
                {
                    m_FaultIndex = 0;
                }
            }

            ui->labelFaultComfirm->setText(crrcFault->getConfirmFaultPosition(m_FaultIndex) + "车"
                                           + crrcFault->getConfirmFaultDevice(m_FaultIndex) + " "
                                           + crrcFault->getConfirmFaultName(m_FaultIndex));

        }else
        {
            confirmAlarmState(false);
        }
    }
}

void Header::on_btnConfirm_clicked()
{
    if(crrcFault->getConfirmFaultListSize()>0)
    {
       m_rollingfaultcnt = 0;


       crrcFault->deleteConfirmFault();

       if(m_FaultIndex>=crrcFault->getConfirmFaultListSize() && m_FaultIndex>0)
       {
            m_FaultIndex--;
       }
    }
}

void Header::on_btnConfirmAll_clicked()
{
    if(crrcFault->getConfirmFaultListSize()>0)
    {
        crrcFault->deleteAllconfirmFault();
        m_FaultIndex = 0;
        m_rollingfaultcnt = 0;
    }
}

void Header::confirmAlarmState(bool alarm)
{
    if (alarm)
    {
        ui->labelFaultComfirm->show();
        ui->btnConfirm->show();
        ui->btnConfirmAll->show();
    }
    else
    {
        ui->labelFaultComfirm->hide();
        ui->btnConfirm->hide();
        ui->btnConfirmAll->hide();
    }
}

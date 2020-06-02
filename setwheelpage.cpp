#include "setwheelpage.h"
#include "ui_setwheelpage.h"
#include "horizontalbuttons.h"
#include <QButtonGroup>
#include <QTimer>

enum wheelNo
{
    wheel1 = 0,
    wheel2,
    wheel3,
    wheel4,
    wheel5,
    wheel6
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


SetWheelPage::SetWheelPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetWheelPage)
{
    ui->setupUi(this);

    this->wheelGroup = new QButtonGroup(this);
    this->wheelGroup->setExclusive(true);
    this->wheelGroup->addButton(ui->btnM1Wheel1, wheel1);
    this->wheelGroup->addButton(ui->btnM1Wheel2, wheel2);
    this->wheelGroup->addButton(ui->btnNPWheel1, wheel3);
    this->wheelGroup->addButton(ui->btnNPWheel2, wheel4);
    this->wheelGroup->addButton(ui->btnM2Wheel1, wheel5);
    this->wheelGroup->addButton(ui->btnM2Wheel2, wheel6);
    connect(this->wheelGroup, SIGNAL(buttonClicked(int)), this, SLOT(setSelectedButton(int)));
    this->counter = -1;
    this->setSelectedButton(0);

    this->horizontalButtons = new HorizontalButtons(this);
    this->horizontalButtons->setGeometry(0, 230, this->horizontalButtons->width(), this->horizontalButtons->height());
    this->horizontalButtons->show();

    connect(this->horizontalButtons->groupButtons, SIGNAL(buttonClicked(int)), this, SLOT(onNumbersClick(int)));
    this->horizontalButtons->disableButtons(false, false, false);

    this->timer = new QTimer;
    this->timer->stop();
    connect(this->timer, SIGNAL(timeout()), this, SLOT(resetHmiSetWheelDiaCommand()));
}

SetWheelPage::~SetWheelPage()
{
    delete ui;
}

void SetWheelPage::updateCurrentWheel()
{
    ui->labelWheel1->setText(QString::number(this->database->CTHM_WheelDig1FedBk_U8 + 500));
    ui->labelWheel2->setText(QString::number(this->database->CTHM_WheelDig2FedBk_U8 + 500));
    ui->labelWheel3->setText(QString::number(this->database->CTHM_WheelDig3FedBk_U8 + 500));
    ui->labelWheel4->setText(QString::number(this->database->CTHM_WheelDig4FedBk_U8 + 500));
    ui->labelWheel5->setText(QString::number(this->database->CTHM_WheelDig5FedBk_U8 + 500));
    ui->labelWheel6->setText(QString::number(this->database->CTHM_WheelDig6FedBk_U8 + 500));
}

void SetWheelPage::showEvent(QShowEvent *)
{
    this->updateCurrentWheel();    

//    this->wheelGroup->button(wheel1)->setText(QString::number(this->database->CTHM_WheelDig1FedBk_U8 + 500));
//    this->wheelGroup->button(wheel2)->setText(QString::number(this->database->CTHM_WheelDig2FedBk_U8 + 500));
//    this->wheelGroup->button(wheel3)->setText(QString::number(this->database->CTHM_WheelDig3FedBk_U8 + 500));
//    this->wheelGroup->button(wheel4)->setText(QString::number(this->database->CTHM_WheelDig4FedBk_U8 + 500));
//    this->wheelGroup->button(wheel5)->setText(QString::number(this->database->CTHM_WheelDig5FedBk_U8 + 500));
//    this->wheelGroup->button(wheel6)->setText(QString::number(this->database->CTHM_WheelDig6FedBk_U8 + 500));
    ui->labelInfo->hide();
    ui->labelInfo->setText("");
}

void SetWheelPage::setSelectedButton(int index)
{
    this->counter = index;
    for (int i = 0; i < this->wheelGroup->buttons().size(); i++)
    {
        this->wheelGroup->button(i)->setStyleSheet(NButtonUP);
    }
    if (this->wheelGroup->button(index))
    {
    this->wheelGroup->button(index)->setStyleSheet(NButtonDOWN);
    }
}

bool SetWheelPage::checkValue(int counter)
{
    if (!this->wheelGroup->button(counter))
        return false;
    unsigned short int setDiameter = this->wheelGroup->button(counter)->text().toUShort();
    if (setDiameter > 690 || setDiameter < 530)
    {
        return false;
    }
    else
        return true;
}

void SetWheelPage::onNumbersClick(int number)
{
    switch (number)
    {
    case numberClear:
        this->wheelGroup->button(this->counter)->setText(QString(""));
        break;

    case back:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uRecondition);
        emit this->changeNavigatorPage(uNavigator);
        break;

    case confirm:
        if (!this->checkValue(this->counter))
        {
            ui->labelInfo->setText("输入错误，轮径值在530～690之间。");
            ui->labelInfo->show();
            return;
        }
        else
        {
           // QString text = this->wheelGroup->button(this->counter)->text();
            if (!this->timer->isActive())
            {
                this->horizontalButtons->disableButtons(false, true, true);
//                ui->btnConfirm->setEnabled(false);
//                ui->btnBack->setEnabled(false);
                this->setWheelDiameter(this->counter);
                this->timer->start(5000);
            }                        
        }
        break;

        default:
        QString text = this->wheelGroup->button(this->counter)->text();
        if (text.length() >=3 || "0" == text)
        {
            text.clear();
        }
        this->wheelGroup->button(this->counter)->setText(text.append(QString::number(number)));
    }
}

void SetWheelPage::setWheelDiameter(int currentWheel)
{
    ui->labelInfo->hide();
    switch(currentWheel)
    {
    case wheel1:
        this->database->HM1CT_WheelDia1_U8 = this->wheelGroup->button(wheel1)->text().toUShort() - 500;
        this->database->HM1CT_SAVEWheelDig1_B1 = true;
        break;
    case wheel2:
        this->database->HM1CT_WheelDia1_U8 = this->wheelGroup->button(wheel2)->text().toUShort() - 500;
        this->database->HM1CT_SAVEWheelDig2_B1 = true;
        break;
    case wheel3:
        this->database->HM1CT_WheelDia1_U8 = this->wheelGroup->button(wheel3)->text().toUShort() - 500;
        this->database->HM1CT_SAVEWheelDig3_B1 = true;
        break;
    case wheel4:
        this->database->HM1CT_WheelDia1_U8 = this->wheelGroup->button(wheel4)->text().toUShort() - 500;
        this->database->HM1CT_SAVEWheelDig4_B1 = true;
        break;
    case wheel5:
        this->database->HM1CT_WheelDia1_U8 = this->wheelGroup->button(wheel5)->text().toUShort();
        this->database->HM1CT_SAVEWheelDig5_B1 = true;
        break;
    case wheel6:
        this->database->HM1CT_WheelDia1_U8 = this->wheelGroup->button(wheel6)->text().toUShort();
        this->database->HM1CT_SAVEWheelDig6_B1 = true;
        break;
    }
}

bool SetWheelPage::checkSaveSucessed(int counter)
{
    switch(counter)
    {
    case wheel1:
        return this->database->CTHM_SAVEWD1FedBk_B1;
        break;

    case wheel2:
        return this->database->CTHM_SAVEWD2FedBk_B1;
        break;

    case wheel3:
        return this->database->CTHM_SAVEWD3FedBk_B1;
        break;

    case wheel4:
        return this->database->CTHM_SAVEWD4FedBk_B1;
        break;

    case wheel5:
        return this->database->CTHM_SAVEWD5FedBk_B1;
        break;

    case wheel6:
        return this->database->CTHM_SAVEWD6FedBk_B1;
        break;

    default:
        return false;
    }
}

void SetWheelPage::resetHmiSetWheelDiaCommand()
{
    this->timer->stop();
    if (this->checkSaveSucessed(this->counter))
    {
        logger()->info("wheel " + QString::number(counter + 1) + " has been set to " + this->wheelGroup->button(this->counter)->text());
        ui->labelInfo->setText("设置成功。");
    }
    else
        ui->labelInfo->setText("设置失败。");
    ui->labelInfo->show();
    this->updateCurrentWheel();
    this->database->HM1CT_SAVEWheelDig1_B1 = false;
    this->database->HM1CT_SAVEWheelDig2_B1 = false;
    this->database->HM1CT_SAVEWheelDig3_B1 = false;
    this->database->HM1CT_SAVEWheelDig4_B1 = false;
    this->database->HM1CT_SAVEWheelDig5_B1 = false;
    this->database->HM1CT_SAVEWheelDig6_B1 = false;
    this->horizontalButtons->disableButtons(false, false, false);
//    ui->btnConfirm->setEnabled(true);
//    ui->btnBack->setEnabled(true);
}


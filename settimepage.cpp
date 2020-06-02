#include "settimepage.h"
#include "ui_settimepage.h"
#include "numberbuttons.h"
#include <QDateTime>
#include <QTimer>
enum timeId
{
    uYear = 0,
    uMonth,
    uDay,
    uHour,
    uMinute,
    uSecond
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

SetTimePage::SetTimePage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SetTimePage)
{
    ui->setupUi(this);
    this->timeButtonGroup = new QButtonGroup;
    this->timeButtonGroup->addButton(ui->btnYear , uYear);
    this->timeButtonGroup->addButton(ui->btnMonth, uMonth);
    this->timeButtonGroup->addButton(ui->btnDay, uDay);
    this->timeButtonGroup->addButton(ui->btnHour, uHour);
    this->timeButtonGroup->addButton(ui->btnMinute, uMinute);
    this->timeButtonGroup->addButton(ui->btnSecond, uSecond);
    connect(this->timeButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(setSelectedButton(int)));

    this->timeButtonGroup->button(uYear)->setStyleSheet(NButtonDOWN);
    this->pressedId = uYear;

    this->numberButtons = new NumberButtons(this);
    this->numberButtons->setGeometry(510, 90, this->numberButtons->width(), this->numberButtons->height());
    this->numberButtons->show();
    connect(this->numberButtons->groupButtons, SIGNAL(buttonClicked(int)), this, SLOT(onNumbersClick(int)));
    this->timer = new QTimer;
    this->timer->stop();
    connect (this->timer, SIGNAL(timeout()), this, SLOT(resetHmiSetTimeCommand()));
    this->numberButtons->hideButtons(false, false, false);
}

SetTimePage::~SetTimePage()
{
    delete ui;
}

void SetTimePage::setSelectedButton(int id)
{
    for (int i = uYear; i < this->timeButtonGroup->buttons().size(); i ++)
    {
        this->timeButtonGroup->button(i)->setStyleSheet(NButtonUP);
    }
    if (this->timeButtonGroup->button(id))
    {
        this->pressedId = id;
        this->timeButtonGroup->button(id)->setStyleSheet(NButtonDOWN);
    }
}

void SetTimePage::onNumbersClick(int number)
{
    switch(number)
    {
    case numberClear:
        this->timeButtonGroup->button(this->pressedId)->setText(QString(""));
        break;

    case back:
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uSettingPage);
        break;

    case confirm:
        this->year = ui->btnYear->text().toInt();
        this->month = ui->btnMonth->text().toInt();
        this->day = ui->btnDay->text().toInt();
        this->hour = ui->btnHour->text().toInt();
        this->minute = ui->btnMinute->text().toInt();
        this->second = ui->btnSecond->text().toInt();

        if (QDate::isValid(2000 + this->year, this->month, this->day)
            && QTime::isValid(this->hour, this->minute, this->second))
            {
            this->database->hmiSetDateTime.setDate(QDate(2000 + this->year, this->month, this->day));
            this->database->hmiSetDateTime.setTime(QTime(this->hour, this->minute, this->second));
            logger()->info("The time has been set to " + this->database->hmiSetDateTime.toString("yyyy-MM-dd hh:mm:ss"));
            this->setHmiSetTimeCommand();
        }
        else
        {
            ui->labelInfo->setText("时间格式错误，请重新输入。");
            ui->labelInfo->show();
        }
        break;

        default:
        QString text = this->timeButtonGroup->button(this->pressedId)->text();
        if (text.length() >= 2 || "0" == text)
        {
            text.clear();
        }
        this->timeButtonGroup->button(this->pressedId)->setText(text.append(QString::number(number)));
    }
}

void SetTimePage::resetHmiSetTimeCommand()
{
    this->database->HM1CT_SAVETime_B1 = false;
    this->timer->stop();
    this->numberButtons->groupButtons->button(confirm)->setEnabled(true);
    this->numberButtons->groupButtons->button(back)->setEnabled(true);
//    ui->btnConfirm->setEnabled(true);
//    ui->btnBack->setEnabled(true);
    ui->labelInfo->setText(QString("时间设置完成。"));
    ui->labelInfo->show();
}

void SetTimePage::setHmiSetTimeCommand()
{
    if (!this->timer->isActive())
    {
        this->database->HM1CT_SAVETime_B1= true;
        this->timer->start(3000);
        this->numberButtons->groupButtons->button(confirm)->setEnabled(false);
        this->numberButtons->groupButtons->button(back)->setEnabled(false);
//        ui->btnConfirm->setEnabled(false);
//        ui->btnBack->setEnabled(false);
        ui->labelInfo->setText("时间设置中，请等待...");
        ui->labelInfo->show();
    }
}

void SetTimePage::showEvent(QShowEvent *)
{
    this->year = QDateTime::currentDateTime().toString("yy").toInt();
    this->month = QDateTime::currentDateTime().toString("MM").toInt();
    this->day = QDateTime::currentDateTime().toString("dd").toInt();
    this->hour = QDateTime::currentDateTime().toString("hh").toInt();
    this->minute = QDateTime::currentDateTime().toString("mm").toInt();
    this->second = QDateTime::currentDateTime().toString("ss").toInt();

    ui->btnYear->setText(QString::number(this->year));
    ui->btnMonth->setText(QString::number(this->month));
    ui->btnDay->setText(QString::number(this->day));
    ui->btnHour->setText(QString::number(this->hour));
    ui->btnMinute->setText(QString::number(this->minute));
    ui->btnSecond->setText(QString::number(this->second));

    ui->labelInfo->hide();
}


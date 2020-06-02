#include "numberbuttons.h"
#include "ui_numberbuttons.h"
#include <QButtonGroup>

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

NumberButtons::NumberButtons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NumberButtons)
{
    ui->setupUi(this);
    this->groupButtons = new QButtonGroup;
    this->groupButtons->addButton(ui->btn0, number0);
    this->groupButtons->addButton(ui->btn1, number1);
    this->groupButtons->addButton(ui->btn2, number2);
    this->groupButtons->addButton(ui->btn3, number3);
    this->groupButtons->addButton(ui->btn4, number4);
    this->groupButtons->addButton(ui->btn5, number5);
    this->groupButtons->addButton(ui->btn6, number6);
    this->groupButtons->addButton(ui->btn7, number7);
    this->groupButtons->addButton(ui->btn8, number8);
    this->groupButtons->addButton(ui->btn9, number9);
    this->groupButtons->addButton(ui->btnClear, numberClear);
    this->groupButtons->addButton(ui->btnConfirm, confirm);
    this->groupButtons->addButton(ui->btnBack, back);
    this->groupButtons->setExclusive(true);
}

NumberButtons::~NumberButtons()
{
    delete ui;
}

void NumberButtons::hideButtons(bool confirm, bool clear, bool back)
{
    if (confirm)
        ui->btnConfirm->hide();
    else
        ui->btnConfirm->show();

    if (clear)
        ui->btnClear->hide();
    else
        ui->btnClear->show();

    if (back)
        ui->btnBack->hide();
    else
        ui->btnBack->show();
}

void NumberButtons::disableButtons(bool clear, bool confirm, bool back)
{
    if (clear)
        ui->btnClear->setEnabled(false);
    else
        ui->btnClear->setEnabled(true);

    if (confirm)
        ui->btnConfirm->setEnabled(false);
    else
        ui->btnConfirm->setEnabled(true);

    if (back)
        ui->btnBack->setEnabled(false);
    else
        ui->btnBack->setEnabled(true);
}


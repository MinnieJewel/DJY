#include "horizontalbuttons.h"
#include "ui_horizontalbuttons.h"
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

HorizontalButtons::HorizontalButtons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HorizontalButtons)
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

HorizontalButtons::~HorizontalButtons()
{
    delete ui;
}

void HorizontalButtons::disableButtons(bool clear, bool confirm, bool back)
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

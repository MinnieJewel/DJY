#include "modifypwdpage.h"
#include "ui_modifypwdpage.h"
#include "numberbuttons.h"
#include <QButtonGroup>
#include "MainGetDefaultPara.h"

#define _pwdUp ("outline:none;font:20px, \"SimHei\";color:white;border:3px solid white;background-color:rgb(51,153,255);")
#define _pwdDown ("outline:none;font:20px, \"SimHei\";color:rgb(51,153,255);border:3px solid white;background-color:white;")
#define _pwdRight ("border-image: url(:/image/rightFlug.png);")
#define _pwdWrong ("border-image: url(:/image/wrongFlug.png);")
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

enum buttonId
{
    old = 0,
    newpwd,
    repeatNew
};

ModifyPwdPage::ModifyPwdPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::ModifyPwdPage)
{
    ui->setupUi(this);
    this->numberButtons = new NumberButtons(this);
    this->numberButtons->setGeometry(500, 85, this->numberButtons->width(), this->numberButtons->height());
    this->numberButtons->show();

    connect(this->numberButtons->groupButtons, SIGNAL(buttonClicked(int)), this, SLOT(onNumbersClick(int)));
    this->numberButtons->hideButtons(false, false, false);

    this->pwdButtonGroup = new QButtonGroup;
    this->pwdButtonGroup->addButton(ui->btnOld, old);
    this->pwdButtonGroup->addButton(ui->btnNew, newpwd);
    this->pwdButtonGroup->addButton(ui->btnRepeat, repeatNew);
    this->pwdButtonGroup->setExclusive(true);

    connect(this->pwdButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(onPwdButtonClick(int)));
}

ModifyPwdPage::~ModifyPwdPage()
{
    delete ui;
}

void ModifyPwdPage::showEvent(QShowEvent *)
{

    ui->labelErrorInfo->hide();
    clearAll();
}

void ModifyPwdPage::clearAll()
{
    this->oldPassword = "";
    this->newPassword = "";
    this->cfPassword = "";
    ui->btnOld->setText("");
    ui->btnNew->setText("");
    ui->btnRepeat->setText("");
    ui->label_pwdConfirm->hide();
    //default set the oldPWd button down
    this->clickButtonId = old;
    onPwdButtonClick(old);
}

void ModifyPwdPage::onPwdButtonClick(int id)
{
    this->clickButtonId = id;
    for (int i = 0; i < this->pwdButtonGroup->buttons().size(); i++)
    {
        this->pwdButtonGroup->button(i)->setStyleSheet(_pwdUp);
    }
    this->pwdButtonGroup->button(id)->setStyleSheet(_pwdDown);

    if (old != id)
    {
        if (!checkPwdValue())
        {
            ui->label_pwdConfirm->setStyleSheet(_pwdWrong);
        }
        else
        {
            ui->label_pwdConfirm->setStyleSheet(_pwdRight);
        }

        ui->label_pwdConfirm->show();
    }
}

bool ModifyPwdPage::checkPwdValue()
{
    if (this->database->password == this->oldPassword)
        return true;
    else
        return false;
}

void ModifyPwdPage::onNumbersClick(int number)
{
    switch(number)
    {
    case back:
        emit this->changeHeaderPage(uHeader);
        emit this->changeLogoPage(uInvalid);
        emit this->changeMiddlePage(uRecondition);
        emit this->changeNavigatorPage(uNavigator);
        break;
    case confirm:
        {
            if (!checkPwdValue())
            {
                ui->label_pwdConfirm->setStyleSheet(_pwdWrong);
                ui->labelErrorInfo->setText("密码错误");
                ui->labelErrorInfo->show();
                break;
            }
            else if (0 == this->newPassword.length() || 0 == this->cfPassword.length())
            {
                ui->labelErrorInfo->setText("请输入新密码");
                ui->labelErrorInfo->show();
                break;
            }
            else if (this->newPassword.length() > 6 || this->cfPassword.length() > 6)
            {
                ui->labelErrorInfo->setText("密码不能大于6位");
                ui->labelErrorInfo->show();
                break;
            }
            if (this->newPassword == this->cfPassword)
            {
                MainGetDefaultPara::set(QString("/Password/Password"), this->newPassword);
                this->database->password = this->newPassword;
                ui->labelErrorInfo->setText("密码设置成功");
                clearAll();
            }
            else
            {
                ui->labelErrorInfo->setText("新密码输入不一致，请重新输入。");
            }
            ui->labelErrorInfo->show();
        break;
    }
    case numberClear:
        {
            if (this->clickButtonId == old)
                this->oldPassword = "";
            else if (this->clickButtonId == newpwd)
                this->newPassword = "";
            else if (this->clickButtonId == repeatNew)
                this->cfPassword = "";

            this->pwdButtonGroup->button(clickButtonId)->setText("");
        }
        break;

    default:
        {
            QString input = "";

            if (this->clickButtonId == old)
            {
                this->oldPassword += QString::number(number);
                input = this->oldPassword;
            }
            else if (this->clickButtonId == newpwd)
            {
                this->newPassword += QString::number(number);
                input = this->newPassword;
            }
            else if (this->clickButtonId == repeatNew)
            {
                this->cfPassword += QString::number(number);
                input = this->cfPassword;
            }
                this->pwdButtonGroup->button(this->clickButtonId)->setText(this->pwdButtonGroup->button(this->clickButtonId)->text() + QString("*"));

        }
    }
}


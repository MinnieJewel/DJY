#include "loginpage.h"
#include "ui_loginpage.h"
#include "numberbuttons.h"
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

LoginPage::LoginPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    this->numberButtons = new NumberButtons(this);
    this->numberButtons->setGeometry(510, 90, this->numberButtons->width(), this->numberButtons->height());
    this->numberButtons->show();
    this->numberButtons->hideButtons(true, false, true);

    connect(this->numberButtons->groupButtons, SIGNAL(buttonClicked(int)), this, SLOT(onNumbersClick(int)));
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::setPassword(QString password)
{
    this->password = password;
}

void LoginPage::showEvent(QShowEvent *)
{
    this->setPassword(this->database->password);
    ui->labelErrorInfo->hide();
}

void LoginPage::onNumbersClick(int number)
{
    switch(number)
    {
    case numberClear:
        {
            if (this->input.length() > 0)
            {
                this->input.remove(this->input.length() - 1, 1);
                ui->labelInput->setText("");
                for(int i = 0; i < input.length(); i++)
                {
                    ui->labelInput->setText(ui->labelInput->text() + "*");
                }
            }
        }
        break;

    default:
        {
//            if (this->input.length() < 6)
//            {
                this->input += QString::number(number);

                ui->labelInput->setText(ui->labelInput->text() + QString("*"));
//                for (int j = 0; j < input.length(); j++)
//                {
//                    ui->labelInput->setText(ui->labelInput->text() + QString("*"));
//                }
           // }
        }
    }
}



void LoginPage::on_btnConfirm_clicked()
{
    if (NULL == this->password)
    {
        ui->labelErrorInfo->show();
    }
    else if (this->password == this->input)
    {
        ui->labelErrorInfo->hide();
        emit this->changeHeaderPage(uHeader);
        emit this->changeMiddlePage(uRecondition);
        emit this->changeNavigatorPage(uNavigator);
    }
    else
    {
        ui->labelErrorInfo->show();
    }
    this->input.clear();
    ui->labelInput->setText("");
}

void LoginPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uVehicleLogo);
    emit this->changeMiddlePage(uRunStatePage);
    emit this->changeNavigatorPage(uNavigator);
}

#include "broadcastpage.h"
#include "ui_broadcastpage.h"
#include <QTimer>

BroadcastPage::BroadcastPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::BroadcastPage)
{
    ui->setupUi(this);
    this->timer1 = new QTimer;
    this->timer2 = new QTimer;
    connect(this->timer1, SIGNAL(timeout()), this, SLOT(onTimer1out()));
    connect(this->timer2, SIGNAL(timeout()), this, SLOT(onTimer2out()));
}

BroadcastPage::~BroadcastPage()
{
    delete ui;
}

void BroadcastPage::onTimer1out()
{
    this->database->HM1CT_PATestStart_B1 = false;
    ui->btnStartTest->setEnabled(true);
    this->timer1->stop();
}

void BroadcastPage::onTimer2out()
{
    this->database->HM1CT_PATestStop_B1 = false;
    ui->btnStopTest->setEnabled(true);
    this->timer2->stop();
}

void BroadcastPage::on_btnStartTest_clicked()
{
    this->timer1->start(4000);
    ui->btnStartTest->setEnabled(false);
    this->database->HM1CT_PATestStart_B1 = true;
}

void BroadcastPage::on_btnStopTest_clicked()
{
    this->timer2->start(4000);
    ui->btnStopTest->setEnabled(false);
    this->database->HM1CT_PATestStop_B1 = true;
}

void BroadcastPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uSettingPage);
    emit this->changeNavigatorPage(uNavigator);
}

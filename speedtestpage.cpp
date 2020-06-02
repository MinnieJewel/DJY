#include "speedtestpage.h"
#include "ui_speedtestpage.h"

SpeedTestPage::SpeedTestPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::SpeedTestPage)
{
    ui->setupUi(this);
    ui->btnTest1->setCheckable(true);
    ui->btnTest1->setChecked(false);
    ui->btnTest2->setCheckable(true);
    ui->btnTest2->setChecked(false);
    ui->btnTestMinus->setCheckable(true);
    ui->btnTestMinus->setChecked(false);
}

SpeedTestPage::~SpeedTestPage()
{
    delete ui;
}

void SpeedTestPage::updatePage()
{
    ui->labelSpeed->setText(QString::number(this->database->CTHM_TrainNumber_U8 * 0.1)+"m/h");
    ui->labelLevel->setText(QString::number(this->database->CTHM_Grade_U8) + "%");
    ui->labelTestSpeed->setText(this->getTestSpeed(this->database->CTHM_AcTestA_I8));
    ui->labelTestLevel->setText(this->getTestLevel(this->database->CTHM_AcTestLevel_I8));
    ui->labelOriSpeed->setText(QString::number(this->database->CTHM_AcTestV0_U8) + "m/s");
    ui->labelEndSpeed->setText(QString::number(this->database->CTHM_AcTestVt_U8) + "m/s");
    ui->labelTestDistance->setText(QString::number((this->database->CTHM_AcTestSH_U8 * 256
                                           + this->database->CTHM_AcTestSL_U8)*0.1) + "m");

    if (0 == this->database->CTHM_AcTestStatus_U8) ui->labelInfo->setText("测试未启动。");
    else if (1 == this->database->CTHM_AcTestStatus_U8) ui->labelInfo->setText("测试中。。。");
    else if (2 == this->database->CTHM_AcTestStatus_U8) ui->labelInfo->setText("测试完成。");
    else ui->labelInfo->setText("测试状态错误。");
}

QString SpeedTestPage::getTestSpeed(signed char speedTest)
{
    int speed = (int)speedTest;
    if (speed == 0) return "0m/s2";
    if (speed > 0)
        return "加速度 " + QString::number(speed * 0.1) + "m/s2";
    else
        return "减速度 " + QString::number(-1 *speed * 0.1) + "m/s2";
}

QString SpeedTestPage::getTestLevel(signed char levelTest)
{
    int level = (int)levelTest;
    if (level == 0) return "0%";
    if (level > 0)
        return "牵引 " + QString::number(level) + " %";
    else
        return "制动 " + QString::number(level) + " %";
}

void SpeedTestPage::on_btnTest1_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTest1->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_TestAcc1_B1 = true;
    }
    else
    {
        ui->btnTest1->setStyleSheet(NButtonUP);
        this->database->HM1CT_TestAcc1_B1 = false;
    }
}

void SpeedTestPage::on_btnTest2_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTest2->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_TestAcc2_B1 = true;
    }
    else
    {
        ui->btnTest2->setStyleSheet(NButtonUP);
        this->database->HM1CT_TestAcc2_B1 = false;
    }
}

void SpeedTestPage::on_btnTestMinus_toggled(bool checked)
{
    if (checked)
    {
        ui->btnTestMinus->setStyleSheet(NButtonDOWN);
        this->database->HM1CT_TestDec_B1 = true;
    }
    else
    {
        ui->btnTestMinus->setStyleSheet(NButtonUP);
        this->database->HM1CT_TestDec_B1 = false;
    }
}

void SpeedTestPage::on_btnBack_clicked()
{
    emit this->changeHeaderPage(uHeader);
    emit this->changeLogoPage(uInvalid);
    emit this->changeMiddlePage(uRecondition);
    emit this->changeNavigatorPage(uNavigator);
}

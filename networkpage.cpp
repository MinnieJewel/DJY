#include "networkpage.h"
#include "ui_networkpage.h"
#include "global.h"
#include <stdlib.h>
#include <QPainter>
NetworkPage::NetworkPage(QWidget *parent) :
    MyBase(parent),
    ui(new Ui::NetworkPage)
{
    ui->setupUi(this);
}

NetworkPage::~NetworkPage()
{
    delete ui;
}

void NetworkPage::paintEvent(QPaintEvent *)
{
    QPainter paint(this);
    QPen pen;
    pen.setWidth(3);
    //set Ethernet color
    pen.setColor(QColor(255, 102, 255));
    paint.setPen(pen);

    //draw polylines
    static const QPointF pointEthCcu1ToSwitch[4] = {
    QPointF(60, 23) ,QPointF(30 ,23), QPointF(30, 303), QPointF(60, 303)
    };
    paint.drawPolyline(pointEthCcu1ToSwitch, 4);

    static const QPointF pointEthErm1ToSwitch[4] = {
    QPointF(730, 23), QPointF(760, 23), QPointF(760, 303), QPointF(730, 303)
    };
    paint.drawPolyline(pointEthErm1ToSwitch, 4);

    //draw lines
    static const QPointF pointsEth[16] = {
    //M1
    QPointF(30, 49), QPointF(60, 49), QPointF(30, 273), QPointF(60, 273),
    QPointF(110, 303), QPointF(240, 303), QPointF(290, 303), QPointF(490, 303),
    QPointF(540, 303), QPointF(680, 303),
    //M2
    QPointF(730, 273), QPointF(760, 273), QPointF(730, 243), QPointF(760, 243),
    QPointF(730, 213), QPointF(760, 213)
    };
    paint.drawLines(pointsEth, 8);

    //set Ethernet color
    pen.setColor(QColor(255, 0, 255));
    //draw lines of MVB
    static const QPointF pointMVB[32] = {
    QPointF(110, 23), QPointF(680, 23), QPointF(110, 49), QPointF(130, 49),
    QPointF(110, 75), QPointF(130, 75), QPointF(110, 101), QPointF(130, 101),
    QPointF(110, 127), QPointF(130, 127), QPointF(110, 153), QPointF(130, 153),
    QPointF(660, 49), QPointF(680, 49), QPointF(660, 75), QPointF(680, 75),
    QPointF(660, 101), QPointF(680, 101), QPointF(660, 127), QPointF(680, 127),
    QPointF(660, 153), QPointF(680, 153),
    QPointF(130, 23), QPointF(130, 153), QPointF(265, 23), QPointF(265, 40),
    QPointF(385, 23), QPointF(385, 40), QPointF(525, 23), QPointF(525, 40),
    QPointF(660, 23), QPointF(660, 153)
    };
    paint.setPen(pen);
    paint.drawLines(pointMVB, 16);

    pen.setColor(QColor(0, 0, 0));
    paint.setPen(pen);
    //draw lines of CANOpen
    static const QPointF pointContinuous1[4] = {
    QPointF(85, 140), QPointF(85, 173), QPointF(705, 173), QPointF(705, 140)
    };
    paint.drawPolyline(pointContinuous1, 4);

    static const QPointF pointContinuous2[4] = {
    QPointF(340, 103), QPointF(350, 103), QPointF(350, 243), QPointF(340, 243)
    };
    paint.drawPolyline(pointContinuous2, 4);

    static const QPointF pointContinuous3[4] = {
    QPointF(445, 103), QPointF(435, 103), QPointF(435, 243), QPointF(445, 243)
    };
    paint.drawPolyline(pointContinuous3,4);

    static const QPointF pointCANOpen[16] = {
    QPointF(180, 146), QPointF(180, 200), QPointF(250, 146), QPointF(250, 200),
    QPointF(530, 173), QPointF(530, 200),QPointF(608, 146), QPointF(608, 200),
    QPointF(340, 133), QPointF(350, 133),QPointF(340, 213), QPointF(350, 213),
    QPointF(435, 133), QPointF(445, 133),QPointF(435, 213), QPointF(445, 213)
    };
    paint.drawLines(pointCANOpen, 8);
}

void NetworkPage::setState(QLabel *label, bool onState, bool slave)
{
    if(onState)
    {
        if (slave)
            label->setStyleSheet(_YELLOW);
        else
            label->setStyleSheet(_GREEN);
    }
    else label->setStyleSheet(_GRAY);
}

void NetworkPage::updatePage()
{
    setState(ui->labelCCU1, this->database->CTHM_CCU1On_B1 && this->database->hmiCcuOnlineState, !this->database->CTHM_CCU1Active_B1);
    setState(ui->labelCCU2, this->database->CTHM_CCU2On_B1 && this->database->hmiCcuOnlineState, !this->database->CTHM_CCU2Active_B1);
    setState(ui->labelHMI1, this->database->CTHM_HMI1On_B1, false);
    setState(ui->labelHMI2, this->database->CTHM_HMI2On_B1, false);
    setState(ui->labelRIOM1, this->database->CTHM_RIOM1GWOnline_B1 && this->database->CTHM_RIOM1DX1Online_B1
             && this->database->CTHM_RIOM1DX2Online_B1 && this->database->CTHM_RIOM1AXOnline_B1, false);
    setState(ui->labelRIOM2, this->database->CTHM_RIOM2GWOnline_B1 && this->database->CTHM_RIOM2DX1Online_B1
             && this->database->CTHM_RIOM2DX2Online_B1 && this->database->CTHM_RIOM2AXOnline_B1, !this->database->CTHM_RIOMCAN1Active_B1);
    setState(ui->labelRIOM3, this->database->CTHM_RIOM3GWOnline_B1 && this->database->CTHM_RIOM3DX1Online_B1
             && this->database->CTHM_RIOM3AXOnline_B1, false);
    setState(ui->labelRIOM4, this->database->CTHM_RIOM4GWOnline_B1 && this->database->CTHM_RIOM4DX1Online_B1
             && this->database->CTHM_RIOM4AXOnline_B1, false);
    setState(ui->labelRIOM5, this->database->CTHM_RIOM5GWOnline_B1 && this->database->CTHM_RIOM5DX1Online_B1
             && this->database->CTHM_RIOM5DX2Online_B1 && this->database->CTHM_RIOM5AXOnline_B1, !this->database->CTHM_RIOMCAN2Active_B1);
    setState(ui->labelRIOM6, this->database->CTHM_RIOM6GWOnline_B1 && this->database->CTHM_RIOM6DX1Online_B1
             && this->database->CTHM_RIOM6DX2Online_B1 && this->database->CTHM_RIOM6AXOnline_B1, false);
    setState(ui->labelERM1, this->database->CTHM_ERM1On_B1, false);
    setState(ui->labelERM2, this->database->CTHM_ERM2On_B1, false);
    setState(ui->labelTBCU1, this->database->CTHM_TBCU1On_B1, false);
    setState(ui->labelTBCU2, this->database->CTHM_TBCU2On_B1, false);
    setState(ui->labelBCU, this->database->CTHM_BCUOn_B1, false);
    setState(ui->labelACU, this->database->CTHM_ACUOn_B1, false);
    setState(ui->labelPIS1, this->database->CTHM_PIS1On_B1, !this->database->CTHM_PIS1Active_B1);
    setState(ui->labelPIS2, this->database->CTHM_PIS2On_B1, !this->database->CTHM_PIS2Active_B1);
    setState(ui->labelEDCU1, this->database->CTHM_MDCU1On_B1, false);
    setState(ui->labelEDCU2, this->database->CTHM_MDCU2On_B1, false);
    setState(ui->labelEDCU3, this->database->CTHM_MDCU3On_B1, false);
    setState(ui->labelEDCU4, this->database->CTHM_MDCU4On_B1, false);
    setState(ui->labelEDCU5, this->database->CTHM_MDCU5On_B1, false);
    setState(ui->labelEDCU6, this->database->CTHM_MDCU6On_B1, false);
    setState(ui->labelEDCU7, this->database->CTHM_MDCU7On_B1, false);
    setState(ui->labelEDCU8, this->database->CTHM_MDCU8On_B1, false);
    setState(ui->labelEDCU9, this->database->CTHM_MDCU9On_B1, false);
    setState(ui->labelEDCU10, this->database->CTHM_MDCU10On_B1, false);
    setState(ui->labelEDCU11, this->database->CTHM_MDCU11On_B1, false);
    setState(ui->labelEDCU12, this->database->CTHM_MDCU12On_B1, false);
    setState(ui->labelHVAC1, this->database->CTHM_HVAC1On_B1, false);
    setState(ui->labelHVAC2, this->database->CTHM_HVAC2On_B1, false);
    setState(ui->labelATC, this->database->CTHM_ATC1On_B1, false);
    setState(ui->labelDCDC1, this->database->CTHM_BCCU1On_B1, false);
    setState(ui->labelDCDC2, this->database->CTHM_BCCU2On_B1, false);
}

#ifndef HEADER_H
#define HEADER_H

#include "mybase.h"
class QLabel;
class CrrcFault;

namespace Ui {
    class Header;
}

class Header : public MyBase
{
    Q_OBJECT

public:
    explicit Header(QWidget *parent = 0);
    void updatePage();
    void setPageName(QString);
    void setVehicleNo(QString);
    void setSpeed(QString);
    void setVoltage(QString);
    void showIcon(QLabel* label, bool signal);
    void installCrrcFault(CrrcFault *crrcFault);
    void startRollingFault(bool flg);
    void confirmAlarmState(bool alarm);
    ~Header();

private:
    Ui::Header *ui;
    CrrcFault *crrcFault;
    int m_FaultIndex;
    bool m_rollingfaultstart;
    int m_rollingfaultcnt;
    void updateConfirmFault();

private slots:
    void on_btnConfirmAll_clicked();
    void on_btnConfirm_clicked();
};

#endif // HEADER_H

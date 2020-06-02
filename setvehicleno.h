#ifndef SETVEHICLENO_H
#define SETVEHICLENO_H

#include "mybase.h"
class NumberButtons;
class QButtonGroup;
class QTimer;

namespace Ui {
    class SetVehicleNo;
}

class SetVehicleNo : public MyBase
{
    Q_OBJECT

public:
    explicit SetVehicleNo(QWidget *parent = 0);
    ~SetVehicleNo();
    NumberButtons* numberButtons;
    //true:setVehiclNo; false:setLineNo;
    int setId;
    QButtonGroup *setGroup;
    void showEvent(QShowEvent *);
private:
    Ui::SetVehicleNo *ui;
    QTimer* timer;

private slots:
    void onSetButtonClicked(int);
    void onNumberButtonClicked(int);
    void onTimerOut();

};

#endif // SETVEHICLENO_H

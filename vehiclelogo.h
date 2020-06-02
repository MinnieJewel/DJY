#ifndef VEHICLELOGO_H
#define VEHICLELOGO_H

#include "mybase.h"
class QLabel;
class CrrcFault;
namespace Ui {
    class VehicleLogo;
}

class VehicleLogo : public MyBase
{
    Q_OBJECT

public:
    explicit VehicleLogo(QWidget *parent = 0);
    ~VehicleLogo();
    void setPanState(QLabel *label, unsigned char,bool);
    void setDoorState(QLabel *label, bool onLine, bool cut, bool fault, bool emergencyUnlock, bool obstacle, bool notInPlace, bool open, bool close);
    void setDirection(QLabel *label, bool forward, bool backward);
    void setKeyState(QLabel *label, bool on);
    void updatePage();
    void GetcrrcFaultInfo(CrrcFault* crrcFault);

private:
    Ui::VehicleLogo *ui;
    CrrcFault* m_crrcFault;
};

#endif // VEHICLELOGO_H

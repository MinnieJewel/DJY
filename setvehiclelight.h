#ifndef SETVEHICLELIGHT_H
#define SETVEHICLELIGHT_H
#include "mybase.h"
class QButtonGroup;

namespace Ui {
    class SetVehicleLight;
}

class SetVehicleLight : public MyBase
{
    Q_OBJECT

public:
    explicit SetVehicleLight(QWidget *parent = 0);
    ~SetVehicleLight();


private:
    Ui::SetVehicleLight *ui;
    float m_BrightValuefactor;
    QButtonGroup *modeButton;

private slots:
    void on_btnBack_clicked();
    void on_btnPlus_clicked();
    void on_btnMinus_clicked();
    void modeButtonsClick(int);
};

#endif // SETVEHICLELIGHT_H

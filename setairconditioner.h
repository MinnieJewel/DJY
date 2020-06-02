#ifndef SETAIRCONDITIONER_H
#define SETAIRCONDITIONER_H

#include "mybase.h"
class QButtonGroup;
class QTimer;
class QLabel;

namespace Ui {
    class SetAirconditioner;
}

class SetAirconditioner : public MyBase
{
    Q_OBJECT

public:
    explicit SetAirconditioner(QWidget *parent = 0);
    ~SetAirconditioner();
    void allButtonsUP();
    //void allButtonsEnable(bool);
    void tempButtonsEnable(bool);
    void showEvent(QShowEvent *);
    void updateAirStates(QLabel *label, bool run);
    void updatePage();
    QString updateMode(QList<bool>);

private:
    Ui::SetAirconditioner *ui;
    QButtonGroup* airButtons;
    unsigned char setTem;
    QTimer *timer1, *timer2, *timer3;
    int currentMode;
private slots:
    void on_btnPreOff_clicked();
    void on_btnSetTem_clicked();
    void on_btnMinus_clicked();
    void on_btnAdd_clicked();
    //void on_btnPreOff_toggled(bool checked);
    void on_btnBack_clicked();
    void onModeSetClicked(int);
    void onTimer1Out();
    void onTimer2Out();
    void onTimer3Out();
};

#endif // SETAIRCONDITIONER_H

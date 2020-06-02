#ifndef SETWHEELPAGE_H
#define SETWHEELPAGE_H

#include "mybase.h"
class HorizontalButtons;
class QButtonGroup;
class QTimer;

namespace Ui {
    class SetWheelPage;
}

class SetWheelPage : public MyBase
{
    Q_OBJECT

public:
    explicit SetWheelPage(QWidget *parent = 0);
    ~SetWheelPage();
    HorizontalButtons* horizontalButtons;
    void showEvent(QShowEvent *);
    bool checkValue(int);
    void setWheelDiameter(int);
    void updateCurrentWheel();
    bool checkSaveSucessed(int);

private:
    Ui::SetWheelPage *ui;
    QButtonGroup* wheelGroup;
    int counter;
    QTimer* timer;

private slots:
    void onNumbersClick(int number);
    void resetHmiSetWheelDiaCommand();
    void setSelectedButton(int index);
};

#endif // SETWHEELPAGE_H

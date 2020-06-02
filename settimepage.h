#ifndef SETTIMEPAGE_H
#define SETTIMEPAGE_H

#include "mybase.h"
    class NumberButtons;
    class QTimer;
    class QButtonGroup;
namespace Ui {
    class SetTimePage;
}

class SetTimePage : public MyBase
{
    Q_OBJECT

public:
    explicit SetTimePage(QWidget *parent = 0);
    ~SetTimePage();
    NumberButtons* numberButtons;
    void showEvent(QShowEvent *);
    void initialValues();
    void setHmiSetTimeCommand();

public slots:
    void onNumbersClick(int);

private:
    Ui::SetTimePage *ui;
    int pressedId;
    int year, month, day, hour, minute, second;
    QTimer *timer;
    QButtonGroup *timeButtonGroup;

private slots:
    void setSelectedButton(int);
    void resetHmiSetTimeCommand();
};

#endif // SETTIMEPAGE_H

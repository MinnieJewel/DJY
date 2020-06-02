#ifndef CUMULATEDATAPAGE_H
#define CUMULATEDATAPAGE_H

#include "mybase.h"
class QButtonGroup;
class HorizontalButtons;

namespace Ui {
    class CumulateDataPage;
}

class CumulateDataPage : public MyBase
{
    Q_OBJECT

public:
    explicit CumulateDataPage(QWidget *parent = 0);
    ~CumulateDataPage();
    HorizontalButtons *horizontalButtons;
    void updateButtonStyle(int id);
    void showEvent(QShowEvent *);

private:
    Ui::CumulateDataPage *ui;
    QButtonGroup *accumulateButtons;
    int selecteId, accumulateTagId, accumulateId, timeButtonId;
    QString text, remindText;
    bool setTime, setvalues;

private slots:
    //void on_btnBack_clicked();
    void onAccumulateButtonClicked(int);
    void onNumbersButtonClicked(int);
};

#endif // CUMULATEDATAPAGE_H

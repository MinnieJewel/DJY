#ifndef BROADCASTPAGE_H
#define BROADCASTPAGE_H

#include "mybase.h"
class QTimer;

namespace Ui {
    class BroadcastPage;
}

class BroadcastPage : public MyBase
{
    Q_OBJECT

public:
    explicit BroadcastPage(QWidget *parent = 0);
    ~BroadcastPage();

private:
    Ui::BroadcastPage *ui;
    QTimer *timer1, *timer2;

private slots:
    void on_btnBack_clicked();
    void on_btnStopTest_clicked();
    void on_btnStartTest_clicked();
    void onTimer1out();
    void onTimer2out();
};

#endif // BROADCASTPAGE_H

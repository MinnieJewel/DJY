#ifndef SPEEDTESTPAGE_H
#define SPEEDTESTPAGE_H

#include "mybase.h"

namespace Ui {
    class SpeedTestPage;
}

class SpeedTestPage : public MyBase
{
    Q_OBJECT

public:
    explicit SpeedTestPage(QWidget *parent = 0);
    ~SpeedTestPage();
    void updatePage();
    QString getTestSpeed(signed char speed);
    QString getTestLevel(signed char level);

private:
    Ui::SpeedTestPage *ui;

private slots:
    void on_btnBack_clicked();
    void on_btnTestMinus_toggled(bool checked);
    void on_btnTest2_toggled(bool checked);
    void on_btnTest1_toggled(bool checked);
};

#endif // SPEEDTESTPAGE_H
